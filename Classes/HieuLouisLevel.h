#ifndef HIEUDASH_HIEULOUISLEVEL_H_
#define HIEUDASH_HIEULOUISLEVEL_H_

#include <string>
#include "cocos2d.h"
#include "HieuDashEnums.h"

// ============================================================================
//  Hieu Louis — the hardest main level of Hieu Dash (added in v0.5).
//
//  Built entirely from existing repo assets (spike_*, square_*, portal_*,
//  orb_*, etc.) and tuned to be brutally difficult:
//    - dense triple-spike walls
//    - alternating mini/normal size portals
//    - gravity-flip + speed-3 transitions on every beat drop
//    - tight ship corridor with sawblades
//    - finale: dual-orb staircase ending on a 1-tile gap
//
//  Soundtrack: HieuLouis.mp3 ("ĐỚN ĐAU VÔ CÙNG" by DATKAA x PROD. QT BEATZ).
// ============================================================================

class HieuLouisLevel {
public:
    // Returns the canonical level name shown on the level select page.
    static const char* levelName() { return "Hieu Louis"; }

    // Returns the level description / subtitle.
    static const char* levelDesc()  { return "Hieu Dash v0.5 - Final Boss"; }

    // Returns the song enum this level uses (kGJSongHieuLouis).
    static int songID() { return kGJSongHieuLouis; }

    // The audio filename (resolved relative to Resources/ at runtime).
    static const char* audioFileName() { return "HieuLouis.mp3"; }

    // GD-style level ID. Placed at the very end of the main level list (id 23).
    static int levelID() { return 23; }

    // Demon difficulty = extreme (kGJDemonTypeExtreme).
    static int demonDifficulty() { return kGJDemonTypeExtreme; }

    // The level string (GD 1.0 format: header followed by `;`-separated
    // objects, terminated by `|` then end-of-string). Built procedurally
    // so the file stays maintainable.
    static std::string levelString();
};

#endif // HIEUDASH_HIEULOUISLEVEL_H_
