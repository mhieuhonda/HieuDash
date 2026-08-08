# GeometryDash v0.3

A Geometry Dash game project built with Cocos2d-x 2.2.3.

## Project Structure

| Directory | Description |
|-----------|-------------|
| **Classes/** | C++ source code (1,300+ classes) |
| **Resources/** | Game resources (sprites, fonts, particles) |
| **assets/** | Level data, audio, and additional assets |
| **lib/** | Prebuilt native libraries |

## Build

```bash
mkdir build && cd build
cmake ..
make -j$(nproc)
```

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

- **v0.3**: Clean release. Added Crimson Abyss, Neon Phantom, Void Tempest, and Astral Eclipse levels. Fixed bugs. Cleaned codebase.
- **v0.2**: Initial reconstruction.
- **v0.1**: Project setup.

## Credits

All source and resources belong to RobTop Games.
