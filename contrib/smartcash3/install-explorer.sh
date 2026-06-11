#!/usr/bin/env bash
set -euo pipefail

if [[ $EUID -ne 0 ]]; then
  echo "run as root" >&2
  exit 1
fi

apt-get update
apt-get install -y nginx git curl ca-certificates build-essential mongodb nodejs npm

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"

install -d -m 0755 /opt/smartcash3
cd /opt/smartcash3

if [[ ! -d explorer ]]; then
  git clone https://github.com/iquidus/explorer.git explorer
fi

cd explorer
npm install --production
if [[ -f "$SCRIPT_DIR/explorer-smartcash3.patch" ]]; then
  patch -N -p1 < "$SCRIPT_DIR/explorer-smartcash3.patch" || true
fi
if [[ -f "$SCRIPT_DIR/explorer-smartnodes.patch" ]]; then
  patch -N -p1 < "$SCRIPT_DIR/explorer-smartnodes.patch" || true
fi
if [[ -f "$SCRIPT_DIR/explorer-address-rpc-balance.patch" ]]; then
  patch -N -p1 < "$SCRIPT_DIR/explorer-address-rpc-balance.patch" || true
fi
if [[ -f "$SCRIPT_DIR/explorer-richlist-rpc-balance.patch" ]]; then
  patch -N -p1 < "$SCRIPT_DIR/explorer-richlist-rpc-balance.patch" || true
fi
if [[ -f "$SCRIPT_DIR/explorer-richlist-rpc-received.patch" ]]; then
  patch -N -p1 < "$SCRIPT_DIR/explorer-richlist-rpc-received.patch" || true
fi
install -m 0644 "$SCRIPT_DIR/explorer-sync-tip.js" scripts/sync-tip.js
curl -LfsS -o public/images/logo.png https://s2.coinmarketcap.com/static/img/coins/64x64/1828.png
cp public/images/logo.png public/favicon.ico
cp settings.json.template settings.json

cat > settings.json <<'EOF_JSON'
{
  "title": "SmartCash 3.0 Explorer",
  "address": "127.0.0.1:3001",
    "coin": "SmartCash",
    "symbol": "SMART",
  "favicon": "/images/logo.png",
  "theme": "Cerulean",
  "port" : 3001,
  "dbsettings": {
    "user": "",
    "password": "",
    "database": "smartcash3",
    "address": "localhost",
    "port": 27017
  },
  "wallet": {
    "host": "127.0.0.1",
    "port": 29679,
    "user": "change_this_rpc_user",
    "pass": "change_this_rpc_password"
  },
  "confirmations": 10,
  "locale": "locale/en.json",
  "display": {
    "api": true,
    "markets": false,
    "richlist": true,
    "movement": true,
    "network": true,
    "smartnodes": true
  },
  "index": {"show_hashrate": true, "show_smartcash_price": true, "show_market_cap": false, "show_market_cap_over_price": false, "difficulty": "POW", "last_txs": 100, "txs_per_page": 10},
  "markets": {"coin": "SMART", "exchange": "USD", "enabled": [], "default": ""},
  "nethash": "getnetworkhashps",
  "nethash_units": "H"
}
EOF_JSON

cat > /etc/systemd/system/smartcash3-explorer.service <<'EOF_SERVICE'
[Unit]
Description=SmartCash 3.0 Iquidus Explorer
After=network-online.target mongodb.service smartcash3.service
Wants=network-online.target

[Service]
WorkingDirectory=/opt/smartcash3/explorer
ExecStart=/usr/bin/npm start
Restart=always
RestartSec=10
Environment=NODE_ENV=production

[Install]
WantedBy=multi-user.target
EOF_SERVICE

install -m 0644 "$SCRIPT_DIR/smartcash3-explorer-tip-sync.service" /etc/systemd/system/smartcash3-explorer-tip-sync.service
install -m 0644 "$SCRIPT_DIR/smartcash3-explorer-tip-sync.timer" /etc/systemd/system/smartcash3-explorer-tip-sync.timer

cat > /etc/nginx/sites-available/smartcash3-explorer <<'EOF_NGINX'
server {
    listen 80;
    server_name _;

    location /explorer/ {
        proxy_pass http://127.0.0.1:3001/;
        proxy_http_version 1.1;
        proxy_set_header Host $host;
        proxy_set_header X-Real-IP $remote_addr;
        proxy_set_header X-Forwarded-For $proxy_add_x_forwarded_for;
        proxy_set_header X-Forwarded-Proto $scheme;
    }

    location = /favicon.ico {
        proxy_pass http://127.0.0.1:3001/images/logo.png;
        proxy_set_header Host $host;
    }

    location = /explorer/favicon.ico {
        proxy_pass http://127.0.0.1:3001/images/logo.png;
        proxy_set_header Host $host;
    }
}
EOF_NGINX

ln -sf /etc/nginx/sites-available/smartcash3-explorer /etc/nginx/sites-enabled/smartcash3-explorer
systemctl daemon-reload
systemctl restart nginx
systemctl enable smartcash3-explorer
systemctl enable --now smartcash3-explorer-tip-sync.timer

echo "edit /opt/smartcash3/explorer/settings.json with RPC credentials, then run:"
echo "systemctl restart smartcash3-explorer"
echo "node scripts/sync.js index update"
