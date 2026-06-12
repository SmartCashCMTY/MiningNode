# MiningNode 3.0.0

SmartCash 3.0.0 node and mining source update for community use.

## What It Does
- Provides the SmartCash 3.0.0 daemon, mining timer, and helper scripts
- Supports smartnode, fullnode, seed, and miner roles
- Keeps mining throttled through systemd during active block generation

## Quick Start
```bash
sudo bash contrib/smartcash3/install-node.sh miner
```

## System Requirements
- Ubuntu Server 24.04 LTS
- Public IPv4 address
- 2 vCPU
- 2 GB RAM or better
- 30 GB SSD or more

## Hardware Requirements
- VPS or dedicated server with static public IPv4
- Open inbound ports as required by the installer
- Stable internet connection
## Installation
```bash
sudo bash contrib/smartcash3/install-node.sh miner
```

Use `smartnode`, `seed`, or `fullnode` as the role when needed.

## Configuration
- Node config: `/etc/smartcash3/smartcash.conf`
- Miner config: `/etc/smartcash3/miner.env`
- Services: `smartcash3.service`, `smartcash3-miner.service`, `smartcash3-miner.timer`

## Update
- Pull the latest source and re-run the installer for the role you need

## Backup
- `/etc/smartcash3/smartcash.conf`
- `/etc/smartcash3/miner.env`
- Any role-specific notes or local overrides

## Security
- Never commit secrets, seed phrases, private keys, or API keys
- Keep wallet data and payout settings outside Git

## Credits
Original SmartCash Project: https://github.com/smartcash
This repository is an Update 3.0.0 based on the open-source work of the SmartCash project.
All rights to original components, trademarks, logos, source code, and documentation remain with their respective owners.
The original creator and relevant open-source contributors should be acknowledged appropriately.

## License
SmartCash Core components are generally released under MIT. Third-party components keep their own licenses.
Please check the original project license.

## Disclaimer
Use at your own risk. No warranty is provided for functionality, availability, or security. No liability is accepted for direct or indirect damages, data loss, wallet loss, lost private keys, misconfiguration, network issues, blockchain issues, software bugs, or security vulnerabilities.

## Cryptocurrency Risks
Cryptocurrencies are high-risk digital assets. Losses, including total loss, are possible. Node operation and staking-related workflows may fail or behave unexpectedly. You are responsible for wallet backups, local law compliance, and tax obligations.

## Legal Notice
Use this software in accordance with the laws and regulations that apply in your jurisdiction. You are responsible for regulatory, tax, and legal compliance in your country. No legal, tax, or financial advice is provided.
