#!/usr/bin/env bash
set -euo pipefail

ROLE="${1:-fullnode}"
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
REPO_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
SMARTCASH_USER="smartcash"
DATADIR="/var/lib/smartcash3"
CONFDIR="/etc/smartcash3"
MINER_ENV="$CONFDIR/miner.env"
RELEASE_URL="https://github.com/SmartCashCMTY/Node-Client-Wallet/releases/download/v3.0.0"
ARCHIVE_NAME="smartcash3-3.0.0-x86_64-linux-gnu.tar.gz"
ARCHIVE_SHA256="458469a13f4f7cdde94c509f15e0306079ae39a2c5f34dc63d14dff88ece36a2"
PUBLIC_PEERS=(
  "151.252.59.32:29678"
  "151.252.59.33:29678"
)

if [[ $EUID -ne 0 ]]; then
  echo "run as root" >&2
  exit 1
fi

case "$ROLE" in
  fullnode|seed|miner|smartnode) ;;
  *)
    echo "usage: $0 [fullnode|seed|miner|smartnode]" >&2
    exit 1
    ;;
esac

if [[ "$ROLE" == "miner" && -z "${MINING_ADDRESS:-}" ]]; then
  read -r -p "Enter mining payout address (leave empty to auto-generate): " MINING_ADDRESS || true
fi

WALLET_DISABLED=0
if [[ "$ROLE" == "miner" && -z "${MINING_ADDRESS:-}" ]]; then
  echo "No MINING_ADDRESS provided - wallet will be enabled to auto-generate a payout address."
  WALLET_DISABLED=1
fi

apt-get update
apt-get install -y curl ca-certificates fail2ban ufw jq tar unzip htop openssl

id "$SMARTCASH_USER" >/dev/null 2>&1 || useradd --system --home "$DATADIR" --shell /usr/sbin/nologin "$SMARTCASH_USER"
install -d -m 0750 -o "$SMARTCASH_USER" -g "$SMARTCASH_USER" "$DATADIR"
install -d -m 0755 "$CONFDIR"

tmpdir="$(mktemp -d)"
trap 'rm -rf "$tmpdir"' EXIT
cd "$tmpdir"
curl -fL -o "$ARCHIVE_NAME" "$RELEASE_URL/$ARCHIVE_NAME"
printf '%s  %s\n' "$ARCHIVE_SHA256" "$ARCHIVE_NAME" | sha256sum -c -
tar -xzf "$ARCHIVE_NAME"
install -m 0755 linux-x86_64/smartcashd /usr/local/bin/smartcashd
install -m 0755 linux-x86_64/smartcash-cli /usr/local/bin/smartcash-cli
install -m 0755 linux-x86_64/smartcash-tx /usr/local/bin/smartcash-tx

RPCUSER="smartcashrpc"
RPCPASSWORD="$(openssl rand -hex 32)"
EXTERNAL_IP="$(curl -fsS4 https://ifconfig.me || true)"

cat > "$CONFDIR/smartcash.conf" <<EOF_CONF
daemon=1
server=1
listen=1
txindex=1
maxconnections=128
port=29678
rpcport=29679
rpcbind=127.0.0.1
rpcallowip=127.0.0.1
rpcuser=$RPCUSER
rpcpassword=$RPCPASSWORD
externalip=$EXTERNAL_IP:29678
EOF_CONF

if [[ "$ROLE" != "smartnode" && "$ROLE" != "miner" ]]; then
  echo "disablewallet=1" >> "$CONFDIR/smartcash.conf"
fi

for peer in "${PUBLIC_PEERS[@]}"; do
  if [[ "$peer" != "$EXTERNAL_IP:29678" ]]; then
    echo "addnode=$peer" >> "$CONFDIR/smartcash.conf"
  fi
done

if [[ "$ROLE" == "smartnode" ]]; then
  cat >> "$CONFDIR/smartcash.conf" <<EOF_CONF
sapi=1
sapiport=28080
smartnode=1
smartnodeprivkey=REPLACE_WITH_SMARTNODE_PRIVKEY
EOF_CONF
fi

if [[ "$ROLE" == "miner" ]]; then
  cat > "$MINER_ENV" <<EOF_CONF
PAYOUT_ADDRESS=${PAYOUT_ADDRESS:-${MINING_ADDRESS:-}}
GENERATE_BLOCKS=${GENERATE_BLOCKS:-1}
MAX_TRIES=${MAX_TRIES:-100000000}
MIN_BLOCK_HEIGHT=${MIN_BLOCK_HEIGHT:-4269520}
MIN_CONNECTIONS=${MIN_CONNECTIONS:-1}
MINING_CPU_QUOTA=${MINING_CPU_QUOTA:-10%}
EOF_CONF
  chown root:"$SMARTCASH_USER" "$MINER_ENV"
  chmod 0640 "$MINER_ENV"
fi

chown -R "$SMARTCASH_USER:$SMARTCASH_USER" "$DATADIR"
chown root:"$SMARTCASH_USER" "$CONFDIR/smartcash.conf"
chmod 0640 "$CONFDIR/smartcash.conf"

install -m 0644 "$REPO_ROOT/contrib/smartcash3/smartcash3.service" /etc/systemd/system/smartcash3.service
if [[ "$ROLE" == "miner" ]]; then
  install -m 0755 "$REPO_ROOT/contrib/smartcash3/smartcash3-mine-once.sh" /usr/local/sbin/smartcash3-mine-once
  install -m 0644 "$REPO_ROOT/contrib/smartcash3/smartcash3-miner.service" /etc/systemd/system/smartcash3-miner.service
  install -m 0644 "$REPO_ROOT/contrib/smartcash3/smartcash3-miner.timer" /etc/systemd/system/smartcash3-miner.timer
fi
systemctl daemon-reload

sed -i 's/^IPV6=yes/IPV6=no/' /etc/default/ufw
ufw allow 29678/tcp
if [[ "$ROLE" == "smartnode" ]]; then
  ufw allow 28080/tcp
fi

systemctl enable smartcash3
systemctl restart smartcash3
if [[ "$ROLE" == "miner" ]]; then
  systemctl enable --now smartcash3-miner.timer
fi

echo "installed SmartCash 3.0 $ROLE node"
echo "config: $CONFDIR/smartcash.conf"
echo
echo "Useful commands:"
echo "  /usr/local/bin/smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 getinfo"
echo "  /usr/local/bin/smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 getconnectioncount"
echo "  /usr/local/bin/smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 getblockcount"
echo "  /usr/local/bin/smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 getwalletinfo"
echo "  /usr/local/bin/smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 listtransactions"
echo "  systemctl status smartcash3 --no-pager"
echo "  journalctl -u smartcash3 -f"
