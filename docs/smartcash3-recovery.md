# SmartCash 3.0.0 Recovery Update

SmartCash 3.0.0 is a recovery update that keeps the original SmartCash genesis,
history, wallet data, UTXOs and transactions up to block `4269520`. The 3.0.0
network is isolated from old SmartCash nodes by protocol `90300`, default P2P
port `29678`, fixed recovery seeds and a checkpoint at `4269520`.

## User Quick Start

Download wallets only from GitHub releases:

```text
Core Linux/Windows wallet releases:
https://github.com/SmartCashCMTY/Node-Client-Wallet/releases/tag/v3.0.0

BeeHive Desktop Light Wallet Linux/Windows releases:
https://github.com/SmartCashCMTY/BeeHive-Wallet/releases/tag/v3.0.0
```

For the Windows Core wallet, select this release asset from GitHub:

```text
smartcash3-3.0.0-x86_64-w64-mingw32.zip
```

For BeeHive Desktop Light Wallet, select the Linux AppImage or Windows ZIP from
GitHub:

```text
BeeHive SmartCash 3-3.0.0.AppImage
BeeHive SmartCash 3-3.0.0.zip
SHA256SUMS
```

Verify downloads against the `SHA256SUMS` file published in the same GitHub
release. Do not download wallet binaries from `151.252.59.32`; that host is only
used for explorer/bootstrap services.

Recommended `smartcash.conf` for public nodes and wallets:

```ini
port=29678
rpcport=29679
addnode=151.252.59.32:29678
addnode=151.252.59.33:29678
```

Recommended public 5-CT topology:

- Public seed + explorer node
- SeedNode
- CPU miner node
- CPU miner node
- Additional full node seed without mining

Bootstrap archive:

```text
http://151.252.59.32/bootstrap/smartcash3-bootstrap.tar.gz
http://151.252.59.32/bootstrap/smartcash3-bootstrap.tar.gz.sha256
```

Public Explorer:

```text
http://151.252.59.32/explorer/
```

Community copy/paste setup guides for seed/full nodes, SmartNodes and wallets:

```text
docs/community-setup-smartcash3.md
```

## Update Point

- Update height: `4269520`
- Update block hash: `000000002588c4fccbfe698cad5f4454bc60c7d2e8bf95185c2a14ba4e6e1cac`
- Last observed CT200 height: `4269526`
- Last observed CT200 hash: `000000001c41833ee80054c7cf36960db9d66be6cb78e4079f2c1064f296d799`
- Genesis is unchanged.
- All blocks, UTXOs, wallet data and transactions up to and including `4269520` remain valid.

## Network Parameters

- P2P magic: unchanged mainnet magic `5c a1 ab 1e` to preserve reindex/import compatibility with historic block files.
- P2P port: `29678`
- RPC port: `29679`
- SAPI port: `28080`
- Primary seed/bootstrap/explorer: `151.252.59.32`
- Primary SmartNode: `151.252.59.33`
- DNS seed targets: `seed3.smartcash.cc`, `seed3.smartcash.org`
- Fixed seeds: `151.252.59.32:29678`, `151.252.59.33:29678`
- Release protocol: `90300`
- Minimum peer protocol: `90300`

## Code Changes

- `src/chainparams.cpp`: new network magic, default port, fixed DNS seeds, checkpoint, minimum chain work and assume-valid hash.
- `src/chainparamsseeds.h`: fixed seed list reduced to the two public community seeds.
- `src/version.h`: protocol raised to `90300`, minimum peer protocol raised to `90300`.
- `src/clientversion.h` and `configure.ac`: version set to `3.0.0`.
- `src/smartnode/spork.cpp`: default `SPORK_21_SMARTNODE_PROTOCOL_REQUIREMENT` is reset to protocol `90300`. The old encoded default required `90328` after the protocol-base bump and marked valid `90300` SmartNodes as `UPDATE_REQUIRED`.
- `src/sapi/sapi.h` and `src/init.cpp`: default SAPI port is `28080`.
- `src/smartnode/smartnode.cpp`, `src/smartnode/activesmartnode.cpp`, `src/smartnode/smartnodesync.cpp`: empty SmartNode and payment lists are accepted as a valid bootstrap state for the first 3.0 SmartNode.
- `fMiningRequiresPeers=false`: permits the seed node to bootstrap block production before public peers exist.
- `nMaxTipAge=10 years`: prevents the recovered 2025 tip from keeping 3.0 nodes in initial-block-download mode.
- New recovery mining signer key index `64`: `SPSLdZi7AdwhW1HMYUEfryuxPZ3btHjoBk`.
- Background `gen=1` is not active in this codebase because daemon startup has `GenerateBitcoins(...)` commented out. Recovery block production is handled by a systemd timer that calls the same RPC `generate` path with the recovery signer address.

## Recovery Strategy

1. Stop old daemons if present.
2. Copy the approved blockchain data snapshot into `/var/lib/smartcash3` on the seed node.
3. Remove old peer state files before starting SmartCash 3.0: `peers.dat`, `banlist.dat`, `mempool.dat`, `netfulfilled.dat`.
4. Start the public seed node with SmartCash 3.0 daemon on port `29678`.
5. Start the SeedNode against the public seed using `addnode=151.252.59.32:29678`.
6. Start CPU miners and one additional full node seed.
7. Enable the recovery block producer only until the community miners are stable.
8. Publish bootstrap archive and wallet binaries.
9. Community nodes join through fixed seeds, DNS seeds or explicit `addnode`.

## DNS Records

Create A records:

```text
seed3.smartcash.cc.   300 IN A 151.252.59.32
seed3.smartcash.org.  300 IN A 151.252.59.32
explorer.smartcash.cc 300 IN A 151.252.59.32
```

If the original domains are not controlled, run with fixed seeds and document manual bootstrap:

```text
addnode=151.252.59.32:29678
addnode=151.252.59.33:29678
addnode=151.252.59.32:29678
addnode=151.252.59.33:29678
```

## Build Commands

All public 3.0.0 release binaries are built against `depends`, including Berkeley
DB `4.8.30`. Do not use `--with-incompatible-bdb` for release wallets.

Build Linux depends:

```bash
TAR_OPTIONS=--no-same-owner make -C depends -j2
```

Linux daemon and CLI:

```bash
./autogen.sh
./configure --prefix="$(pwd)/depends/x86_64-pc-linux-gnu" --disable-tests --disable-bench
make -j2 src/smartcashd src/smartcash-cli src/smartcash-tx
strip src/smartcashd src/smartcash-cli src/smartcash-tx
```

Linux Qt wallet:

```bash
make -j2 src/qt/smartcash-qt
strip src/qt/smartcash-qt
```

Windows cross build from Ubuntu:

```bash
sudo apt-get update
sudo apt-get install -y g++-mingw-w64-x86-64 mingw-w64-x86-64-dev nsis zip
TAR_OPTIONS=--no-same-owner make -C depends HOST=x86_64-w64-mingw32 -j2
make clean
./configure --prefix="$(pwd)/depends/x86_64-w64-mingw32" --host=x86_64-w64-mingw32 --disable-tests --disable-bench CC=x86_64-w64-mingw32-gcc-posix CXX=x86_64-w64-mingw32-g++-posix CXXFLAGS="-std=c++11"
make CC=x86_64-w64-mingw32-gcc-posix CXX=x86_64-w64-mingw32-g++-posix -j2
file src/smartcashd.exe src/smartcash-cli.exe src/smartcash-tx.exe src/qt/smartcash-qt.exe
```

Package Windows release:

```bash
install -m 0755 src/smartcashd.exe release/windows-x86_64/smartcashd.exe
install -m 0755 src/smartcash-cli.exe release/windows-x86_64/smartcash-cli.exe
install -m 0755 src/smartcash-tx.exe release/windows-x86_64/smartcash-tx.exe
install -m 0755 src/qt/smartcash-qt.exe release/windows-x86_64/smartcash-qt.exe
rm -f release/smartcash3-3.0.0-x86_64-w64-mingw32.zip
(cd release/windows-x86_64 && zip -9 ../smartcash3-3.0.0-x86_64-w64-mingw32.zip smartcash-cli.exe smartcash-qt.exe smartcash-tx.exe smartcashd.exe)
sha256sum -c release/SHA256SUMS
```

When switching between Linux and Windows builds in the same worktree, always run
`make clean` before reconfiguring. Mixing Linux and MinGW objects can produce
invalid binaries or confusing linker failures.

## Migration Commands

Copy blockchain from the previous chain snapshot to the seed node:

```bash
# Copy blockchain data from the previous chain snapshot to the seed node.
# Replace SOURCE_SERVER with your actual bootstrap source host.
rsync -aH --numeric-ids root@SOURCE_SERVER:/root/.smartcash/blocks /var/lib/smartcash3/
rsync -aH --numeric-ids root@SOURCE_SERVER:/root/.smartcash/chainstate /var/lib/smartcash3/
rsync -aH --numeric-ids root@SOURCE_SERVER:/root/.smartcash/rewards /var/lib/smartcash3/
rm -f /var/lib/smartcash3/peers.dat /var/lib/smartcash3/banlist.dat /var/lib/smartcash3/mempool.dat /var/lib/smartcash3/netfulfilled.dat
chown -R smartcash:smartcash /var/lib/smartcash3
```

Bootstrap archive:

```bash
systemctl stop smartcash3
tar --numeric-owner -C /var/lib/smartcash3 -czf /var/www/html/bootstrap/smartcash3-bootstrap.tar.gz blocks chainstate rewards
sha256sum /var/www/html/bootstrap/smartcash3-bootstrap.tar.gz > /var/www/html/bootstrap/smartcash3-bootstrap.tar.gz.sha256
systemctl start smartcash3
```

Recovery block producer on the seed node:

```bash
install -m 0755 contrib/smartcash3/smartcash3-mine-once.sh /usr/local/sbin/smartcash3-mine-once
install -m 0644 contrib/smartcash3/smartcash3-miner.service /etc/systemd/system/smartcash3-miner.service
install -m 0644 contrib/smartcash3/smartcash3-miner.timer /etc/systemd/system/smartcash3-miner.timer
systemctl daemon-reload
systemctl enable --now smartcash3-miner.timer
```

The timer runs every `55s`, matching the SmartCash target spacing. Community
miners use `generatetoaddress`, require at least one peer and refuse to mine
below the checkpoint height. Miner installs default to `MINING_CPU_QUOTA=10%`, applied
only while the mining RPC is running and removed again afterwards.

The original recovery timer used:

```bash
smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 generate 1 100000000 SPSLdZi7AdwhW1HMYUEfryuxPZ3btHjoBk
```

This uses the normal block assembler, SmartMining signature, nonce search, `CheckProofOfWork`, and `ProcessNewBlock` validation path.

## SmartNode Setup

SeedNode daemon config in `/etc/smartcash3/smartcash.conf`:

```ini
port=29678
rpcport=29679
sapi=1
sapiport=28080
smartnode=1
smartnodeprivkey=<smartnode-private-key>
externalip=YOUR_VPS_PUBLIC_IP
addnode=151.252.59.32:29678
addnode=151.252.59.33:29678
```

The systemd service reads `/etc/smartcash3/smartcash.conf` and uses
`/var/lib/smartcash3` as datadir. Settings in `/root/.smartcash/smartcash.conf`
do not affect the service.

After the SeedNode is synced, expected pre-broadcast status is:

```text
Not capable smartnode: Smartnode not in smartnode list
```

Start the SmartNode from the Windows controller wallet:

```text
snsync status
smartnode start-alias SN01
```

Then verify on the SeedNode:

```bash
smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 smartnode status
smartcash-cli -conf=/etc/smartcash3/smartcash.conf -datadir=/var/lib/smartcash3 smartnode count
```

`UPDATE_REQUIRED` for a `90300` SmartNode means the wallet or daemon still has an
old `SPORK_21_SMARTNODE_PROTOCOL_REQUIREMENT` default. Update to the current
3.0.0 binaries and broadcast again.

## Explorer Notes

- Homepage network rate is shown in `H/s`, not `GH/s`, because the recovery network hash rate is currently only single-digit hashes per second.
- Homepage difficulty is formatted with 8 decimals when below `1`, so `0.00024413` is not rounded to `0.00`.
- The stale `BTC Price` card is replaced by `SMART Price` in USD.
- The SmartCash USD price is fetched from `https://coinmarketcap.com/currencies/smartcash/` and cached in the Explorer process for 10 minutes.
- The Markets menu remains disabled; the CMC price card does not require enabling legacy exchange integrations.
- `/ext/connections` falls back to live RPC peers plus the public 5-CT seed set if the Explorer peer collection is empty.
- `/smartnodes` shows the live SmartNode list from RPC `smartnode list full`, including status, address, protocol, payee, last seen, active time, last paid and outpoint.
- The default Explorer logo is replaced with the SmartCash CoinMarketCap logo from `https://s2.coinmarketcap.com/static/img/coins/64x64/1828.png`.
- The Explorer favicon uses the same SmartCash logo via `/images/logo.png`; `/favicon.ico` and `/explorer/favicon.ico` are routed to that image for browser autodiscovery.
- Richlist data depends on the Explorer address index. If the full index is not complete, richlist output is partial.
- Address summaries may use lightweight `getaddressbalance` RPC validation while the historical index catches up.
- Do not enable unbounded address-history rendering through `getaddressdeltas`; large historical addresses can exhaust the seed node memory.
- The Iquidus indexer must handle transient RPC failures defensively; otherwise a single bad `getrawtransaction` response can stop indexing and leave the latest transaction table at an old block.
- A lightweight Explorer tip-sync timer runs every 60 seconds and indexes the last 250 blocks so the public Explorer follows the live chain even while the full historical index is still catching up.

## Risks And Countermeasures

- Old nodes are isolated by new default port and `MIN_PEER_PROTO_VERSION=90300`.
- Old-chain reorgs before `4269520` are rejected by checkpoint logic.
- A single seed is a centralization risk; add at least 3 community seeds after launch.
- If DNS domains are unavailable, fixed seeds still allow initial discovery.
- Keep public node firewalls limited to their required ports.
- Use bootstrap snapshots signed by release maintainers.
