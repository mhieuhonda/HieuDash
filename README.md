# HieuDash v0.4

A Geometry Dash client built with Cocos2d-x 2.2.3, featuring admin panel, Vietnamese/English language support, and auto-login.

## Project Structure

| Directory | Description |
|-----------|-------------|
| **Classes/** | C++ source code (1,300+ classes) |
| **Resources/** | Game resources (sprites, fonts, particles) |
| **assets/** | Level data, audio, and additional assets |
| **lib/** | Prebuilt native libraries |
| **smali/** | Dalvik bytecode (Java layer) |
| **smali/com/hieudash/** | Custom HieuDash modules (Admin, Login, Language) |

## Features

### Admin Panel
Full in-game admin panel accessible on launch:
- **Ban/Unban User** — Ban or unban users by ID
- **Rate Level (Admin)** — Admin-level level rating
- **Feature/Delete Level** — Feature or delete levels
- **View User Info** — Lookup user information
- **Leaderboard** — View leaderboard scores
- All actions communicate with the GD server at `boomlings.com`

### Language Support
- **English** and **Tiếng Việt** (Vietnamese)
- 56+ translated UI strings
- Language selection on first launch
- Persistent setting via SharedPreferences

### Auto-Login
- One-tap login as **HieuLouis** on game launch
- SHA-256 password hashing with RobTop salt
- Credentials stored securely in SharedPreferences
- Server-validated login via `accounts/loginGJAccount.php`

## Build

```bash
bash scripts/build_android.sh
```

Requires: apktool, Android SDK (build-tools with zipalign + apksigner), JDK 17+

## Levels

The game includes official levels and community-created levels:

### Official Levels
- Level 1: Stereo Madness
- Level 2: Back On Track
- Level 3: Polargeist
- Level 4: Dry Out
- Level 5: Base After Base
- Level 6: Cant Let Go
- Level 7: Jumper
- Level 8: Time Machine
- Level 9: Cycles
- Level 10: xStep
- Level 11: Clutterfunk
- Level 12: Theory of Everything
- Level 13: Electroman
- Level 14: Clubstep
- Level 15: Electrodynamix
- Level 16: Hexagon Force
- Level 17: Blast Processing
- Level 18: Theory of Everything 2
- Level 19: Geometrical Dominator
- Level 20: Deadlocked
- Level 21: Fingerdash
- Level 22: Dash

### Custom Levels
- **Crimson Abyss** (ID: 6001) — Extreme Demon. 4 minutes. 13 gamemode sections. Crimson palette with ember accents. Hard but readable.
- **Neon Phantom** (ID: 6002) — Insane Demon. Cyberpunk neon theme. Ship/UFO/Wave gauntlets. Fast and flashy.
- **Void Tempest** (ID: 6003) — Hard Demon. Dark void theme. Ball/Robot sections with gravity flips.
- **Astral Eclipse** (ID: 6004) — Insane. Cosmic space theme. Dual sections and swing copter. Beautiful starfield.

## Version History

- **v0.4**: Major update. Removed all mod/hack traces (IAP bypass, free orbs, unlocked skins). Fixed Crimson Abyss and all custom level formats for proper game compatibility. Added Admin Panel with full server communication. Added Vietnamese/English language support. Added auto-login as HieuLouis. Implemented proper verification (coin/star/icon integrity). Implemented anti-cheat detection. Fixed 976 duplicate destructors, 7475 TODO stubs, 286 broken init() patterns across all C++ classes.
- **v0.3**: Clean release. Added Crimson Abyss, Neon Phantom, Void Tempest, and Astral Eclipse levels. Fixed bugs. Cleaned codebase.
- **v0.2**: Initial reconstruction.
- **v0.1**: Project setup.

## Credits

All source and resources belong to RobTop Games.
