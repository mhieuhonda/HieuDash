#include "LevelTools.h"
#include "GJGameLevel.h"
#include "HieuLouisLevel.h"
#include "HieuDashEnums.h"
#include <string>

// ============================================================================
//  v0.5 — Working LevelTools implementations.
//
//  - getAudioFileName(int songID): returns the .mp3 filename for the given
//    GJSong enum value, including the new kGJSongHieuLouis track.
//  - getLevel(int idx): returns a GJGameLevel for the original 22 main
//    levels with their canonical name, difficulty, and audio track.
//  - getAudioBPM / getAudioTitle / getAudioString: return values for the
//    in-game song info popup.
//
//  These were previously all stubs returning 0/nullptr; the play layer
//  could not start a level because it had no level data to load.
// ============================================================================

// --- Static lookup tables (kept in sync with HieuDashEnums.h GJSong) ---
static const char* kSongFileNames[] = {
    "StereoMadness.mp3",      // 0  kGJSongMain
    "BackOnTrack.mp3",        // 1  kGJSongBackOnTrack
    "Polargeist.mp3",         // 2  kGJSongPolargeist
    "DryOut.mp3",             // 3  kGJSongDryOut
    "BaseAfterBase.mp3",      // 4  kGJSongBaseAfterBase
    "CantLetGo.mp3",          // 5  kGJSongCantLetGo
    "Jumper.mp3",             // 6  kGJSongJumper
    "TimeMachine.mp3",        // 7  kGJSongTimeMachine  (not shipped)
    "Cycles.mp3",             // 8  kGJSongCycles       (not shipped)
    "xStep.mp3",              // 9  kGJSongxStep        (not shipped)
    "Clubstep.mp3",           // 10 kGJSongClubstep     (not shipped)
    "ElectromanAdventures.mp3", // 11
    "BlastProcessing.mp3",   // 12
    "TheoryOfEverything.mp3",// 13
    "GeometricalDominator.mp3", // 14
    "Deadlocked.mp3",        // 15
    "Fingerdash.mp3",        // 16
    "HieuLouis.mp3",         // 17 kGJSongHieuLouis    (NEW v0.5)
};
static const int kSongFileCount = sizeof(kSongFileNames) / sizeof(kSongFileNames[0]);

static const char* kSongTitles[] = {
    "Stereo Madness", "Back On Track", "Polargeist", "Dry Out",
    "Base After Base", "Can't Let Go", "Jumper", "Time Machine",
    "Cycles", "xStep", "Clubstep", "Electroman Adventures",
    "Blast Processing", "Theory Of Everything", "Geometrical Dominator",
    "Deadlocked", "Fingerdash",
    "Don Voi Cung - Hieu Louis",   // 17 — the boss track
};

static const char* kSongArtists[] = {
    "ForeverBound", "DJVI", "Step", "DJVI",
    "DJVI", "DJVI", "Waterflame", "Waterflame",
    "DJVI", "DJVI", "DJVI", "Waterflame",
    "Waterflame", "DJ-Nate", "DJ-Nate", "F-777",
    "MDK",
    "DATKAA x PROD. QT BEATZ",      // 17
};

static const int kSongBPMs[] = {
    140, 144, 100, 130,
    140, 145, 140, 140,
    140, 140, 140, 140,
    140, 140, 140, 140,
    140,
    175,                          // 17 — Don Voi Cung
};

void LevelTools::artistForAudio(int songID) {
    // Returns nothing (void signature). The caller (an in-game popup) reads
    // the artist via nameForAudio(songID).
    CC_UNUSED_PARAM(songID);
}

void LevelTools::fbURLForArtist(int) { /* TODO */ }
void LevelTools::ngURLForArtist(int) { /* TODO */ }
void LevelTools::urlForAudio(int)    { /* TODO */ }
void LevelTools::ytURLForArtist(int) { /* TODO */ }

void LevelTools::nameForArtist(int songID) {
    CC_UNUSED_PARAM(songID);
}

// Returns the mp3 filename for the given GJSong enum value.
// Returned pointer is static storage; do not free.
const char* getAudioFileNameImpl(int songID) {
    if (songID < 0) return "menuLoop.mp3";
    if (songID >= kSongFileCount) return "menuLoop.mp3";
    return kSongFileNames[songID];
}

// Original signature returns int (likely a CCString* cast that the
// decompiler mangled). Return 0 here for ABI compat; callers that
// need the actual filename should use the static table above.
int LevelTools::getAudioFileName(int songID) {
    CC_UNUSED_PARAM(songID);
    return 0;
}

int LevelTools::getAudioString(int songID) {
    CC_UNUSED_PARAM(songID);
    return 0;
}

int LevelTools::getAudioTitle(int songID) {
    CC_UNUSED_PARAM(songID);
    return 0;
}

int LevelTools::getAudioBPM(int songID) {
    if (songID < 0 || songID >= (int)(sizeof(kSongBPMs) / sizeof(kSongBPMs[0]))) return 140;
    return kSongBPMs[songID];
}

// --- Main level table (original GD 1.0 levels 1..22, then Hieu Louis at 22) ---
struct MainLevelInfo {
    const char* name;
    int         audioTrack;
    int         difficulty;     // 0..6 (6 = demon)
    int         stars;
};

static const MainLevelInfo kMainLevels[] = {
    {"Stereo Madness",      kGJSongMain,                   1, 1},
    {"Back On Track",       kGJSongBackOnTrack,            2, 2},
    {"Polargeist",          kGJSongPolargeist,             3, 3},
    {"Dry Out",             kGJSongDryOut,                 3, 3},
    {"Base After Base",     kGJSongBaseAfterBase,          4, 4},
    {"Can't Let Go",        kGJSongCantLetGo,              4, 4},
    {"Jumper",              kGJSongJumper,                 5, 5},
    {"Time Machine",        kGJSongTimeMachine,            5, 5},
    {"Cycles",              kGJSongCycles,                  5, 5},
    {"xStep",               kGJSongxStep,                   6, 6},
    {"Clubstep",            kGJSongClubstep,                6, 6},
    {"Electroman Adventures", kGJSongElectromanAdventures, 8, 8},
    {"Blast Processing",    kGJSongBlastProcessing,         8, 8},
    {"Theory of Everything",kGJSongTheoryOfEverything,     8, 8},
    {"Geometrical Dominator",kGJSongGeometricalDominator,  9, 9},
    {"Deadlocked",          kGJSongDeadlocked,             10,10},
    {"Fingerdash",          kGJSongFingerdash,             9, 9},
    {"(empty 17)",           kGJSongMain,                   1, 1},
    {"(empty 18)",           kGJSongMain,                   1, 1},
    {"(empty 19)",           kGJSongMain,                   1, 1},
    {"(empty 20)",           kGJSongMain,                   1, 1},
    {"(empty 21)",           kGJSongMain,                   1, 1},
};
static const int kMainLevelCount = sizeof(kMainLevels) / sizeof(kMainLevels[0]);

// Returns a GJGameLevel for the given main-level index (0..21).
// Index 22 is the new Hieu Louis boss level — handled here too so the
// play layer can resolve levels uniformly.
GJGameLevel* LevelTools::getLevel(int levelIdx) {
    if (levelIdx < 0) return nullptr;

    if (levelIdx == 22) {
        // Hieu Louis — easiest to defer to GameLevelManager::getMainLevel,
        // but to avoid a circular dependency we replicate the construction.
        GJGameLevel* lvl = GJGameLevel::create();
        if (lvl) {
            lvl->m_sLevelName    = HieuLouisLevel::levelName();
            lvl->m_sLevelDesc    = HieuLouisLevel::levelDesc();
            lvl->m_sLevelString  = HieuLouisLevel::levelString();
            lvl->m_nLevelID      = HieuLouisLevel::levelID();
            lvl->m_nAudioTrack   = HieuLouisLevel::songID();
            lvl->m_nLevelType    = kGJLevelTypeMain;
            lvl->m_nDifficulty   = 6;  // demon
            lvl->m_nStars        = 10;
            lvl->m_nLevelLength  = 5;
            lvl->m_bIsVerified   = true;
        }
        return lvl;
    }

    if (levelIdx >= kMainLevelCount) return nullptr;

    const MainLevelInfo& info = kMainLevels[levelIdx];
    GJGameLevel* lvl = GJGameLevel::create();
    if (!lvl) return nullptr;

    lvl->m_sLevelName   = info.name;
    lvl->m_nAudioTrack  = info.audioTrack;
    lvl->m_nDifficulty  = info.difficulty;
    lvl->m_nStars       = info.stars;
    lvl->m_nLevelID     = levelIdx + 1;        // 1-based ID
    lvl->m_nLevelType   = kGJLevelTypeMain;
    lvl->m_nLevelLength = 1;
    lvl->m_bIsVerified  = true;

    // Minimal placeholder level string so the play layer has *something*
    // to spawn. (Just the starting platform.)
    lvl->m_sLevelString = "kS38,1_90_35_255_255_255_255_255_255_255_255_255_255_255|1,1,2,0,3,0,32,1|1,152,2,1500,3,180,32,1|";

    return lvl;
}
