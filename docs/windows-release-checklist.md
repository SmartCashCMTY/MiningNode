# Windows Release Checklist

## Before Upload

- Build `smartcashd.exe`, `smartcash-cli.exe`, `smartcash-tx.exe`, `smartcash-qt.exe` from the current `v3.0.0` tree.
- Verify the ZIP contains only the intended Windows assets.
- Regenerate `SHA256SUMS` after every rebuild.
- Confirm no `.env`, private keys, passwords, or seed phrases are present.
- Confirm release notes and download URLs point to `SmartCashCMTY` GitHub repositories.

## Anti-False-Positive

- Do not use packers or obfuscators.
- Prefer signed binaries.
- Keep filenames stable across releases.
- Avoid installer behavior that downloads additional payloads at runtime.
- Publish hashes next to the release assets.

## UI Sanity

- Verify the wallet opens at a readable size on Windows.
- Verify toolbar and status bar icons remain readable.
- Verify the wallet still starts with the current chain and peers.
