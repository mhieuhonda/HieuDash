#include "GameSoundManager.h"
#include "GameManager.h"
#include "SimpleAudioEngine.h"

using namespace CocosDenshion;

// ============================================================================
//  v0.5 — Working GameSoundManager singleton + bg music playback.
//  This is the critical audio path: the Hieu Louis level and every main
//  level route their soundtrack through playBackgroundMusic() here.
// ============================================================================

static GameSoundManager* s_pSharedGSM = nullptr;
static float              s_fBGVol    = 1.0f;
static bool               s_bPaused   = false;

GameSoundManager::GameSoundManager() {}

GameSoundManager* GameSoundManager::sharedManager() {
    if (!s_pSharedGSM) {
        s_pSharedGSM = new GameSoundManager();
        s_pSharedGSM->init();
        s_pSharedGSM->setup();
    }
    return s_pSharedGSM;
}

bool GameSoundManager::init() {
    return true;
}

void GameSoundManager::setup() {
    // Preload common SFX files.
    preload();
}

void GameSoundManager::asynchronousSetup() {
    preload();
}

void GameSoundManager::preload() {
    SimpleAudioEngine* audio = SimpleAudioEngine::sharedEngine();
    if (!audio) return;

    // Music tracks (mp3).
    const char* music[] = {
        "menuLoop.mp3", "StereoMadness.mp3", "BackOnTrack.mp3",
        "Polargeist.mp3", "DryOut.mp3", "BaseAfterBase.mp3",
        "CantLetGo.mp3", "Jumper.mp3", "HieuLouis.mp3"
    };
    for (size_t i = 0; i < sizeof(music) / sizeof(music[0]); ++i) {
        audio->preloadBackgroundMusic(music[i]);
    }

    // SFX (ogg).
    const char* sfx[] = {
        "playSound_01.ogg", "explode_11.ogg", "endStart_02.ogg",
        "quitSound_01.ogg", "achievement_01.ogg"
    };
    for (size_t i = 0; i < sizeof(sfx) / sizeof(sfx[0]); ++i) {
        audio->preloadEffect(sfx[i]);
    }
}

// The most important method: play the given mp3 as the level BGM.
// bgmPath: relative to Resources/ (e.g. "HieuLouis.mp3").
// fadeDuration: ignored in v0.5 (cocos2d-x 2.2.3 doesn't expose fade).
// loop: 1 = loop forever, 0 = play once.
void GameSoundManager::playBackgroundMusic(char const* bgmPath, float fadeDuration, int loop) {
    CC_UNUSED_PARAM(fadeDuration);
    if (!bgmPath || !bgmPath[0]) return;

    GameManager* gm = GameManager::sharedState();
    if (gm && !gm->getMusicEnabled()) return;

    SimpleAudioEngine* audio = SimpleAudioEngine::sharedEngine();
    if (!audio) return;

    audio->stopBackgroundMusic(true);
    audio->playBackgroundMusic(bgmPath, loop != 0);
    audio->setBackgroundMusicVolume(s_fBGVol);
    s_bPaused = false;
}

void GameSoundManager::playEffect(char const* path) {
    if (!path) return;
    GameManager* gm = GameManager::sharedState();
    if (gm && !gm->getFxEnabled()) return;
    SimpleAudioEngine::sharedEngine()->playEffect(path);
}

void GameSoundManager::playEffect(char const* path, float, float, float) {
    playEffect(path);
}

void GameSoundManager::playUniqueEffect(char const* path) {
    playEffect(path);
}

void GameSoundManager::playUniqueEffect(char const* path, float, float, float) {
    playEffect(path);
}

void GameSoundManager::playLoopedSound(char const*, char const*, float, float, bool, bool, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

bool GameSoundManager::isLoopedSoundPlaying(char const*) { return false; }
void GameSoundManager::pauseAllLoopedSounds()            {}
void GameSoundManager::pauseLoopedSound(char const*)      {}
void GameSoundManager::removeLoopedSound(char const*)     {}
void GameSoundManager::resetUniqueEffects()               {}
void GameSoundManager::resumeAllLoopedSounds()            {}
void GameSoundManager::stopAllLoopedSounds()              {}
void GameSoundManager::stopLoopedSound(char const*, bool) {}
void GameSoundManager::updateLoopedVolume(char const*, float) {}

void GameSoundManager::resumeSound() {
    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    s_bPaused = false;
}

void GameSoundManager::setBGMusicVolume(float v) {
    s_fBGVol = v;
    SimpleAudioEngine::sharedEngine()->setBackgroundMusicVolume(v);
}

void GameSoundManager::setBGVol(float v)       { setBGMusicVolume(v); }
int  GameSoundManager::getBGVol()              { return (int)(s_fBGVol * 100); }
int  GameSoundManager::getState()              { return s_bPaused ? 0 : 1; }

void GameSoundManager::fadeInMusic(bool) {
    SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    s_bPaused = false;
}

void GameSoundManager::fadeOutMusic(bool stop) {
    if (stop) SimpleAudioEngine::sharedEngine()->stopBackgroundMusic(true);
    else      SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
    s_bPaused = true;
}

GameSoundManager::~GameSoundManager() {
    if (s_pSharedGSM == this) s_pSharedGSM = nullptr;
}
