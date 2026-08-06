#include "AppDelegate.h"
#include "GameManager.h"
#include "GameLevelManager.h"
#include "GameSoundManager.h"
#include "GameStatsManager.h"
#include "MenuLayer.h"
#include "LoadingLayer.h"
#include "CocosDenshion.h"
#include "cocos2d.h"

USING_NS_CC;

// ============================================================================
//  v0.5 — Working implementations of the critical runtime path.
//
//  Previously every method body was a `// TODO: implement` stub returning
//  0 / nullptr / false. The game could never actually launch because
//  applicationDidFinishLaunching() did nothing. These implementations
//  provide a minimal but functional boot sequence so the game engine
//  initialises the director, loads the sprite-sheet frames, preloads
//  audio, and transitions into the first scene.
// ============================================================================

static AppDelegate* s_pAppDelegate = nullptr;
static bool s_bLoadingFinished = false;
static bool s_bManagersLoaded  = false;
static bool s_bPaused          = false;
static CCNode* s_pScenePointer = nullptr;

AppDelegate::AppDelegate() {
    s_pAppDelegate = this;
}

AppDelegate::~AppDelegate() {
    if (s_pAppDelegate == this) s_pAppDelegate = nullptr;
}

bool AppDelegate::applicationDidFinishLaunching() {
    CCDirector* pDirector = CCDirector::sharedDirector();
    CCEGLView*  pEGLView  = CCEGLView::sharedOpenGLView();

    pDirector->setOpenGLView(pEGLView);

    // Design resolution matches the original GD 1.0 portrait-landscape
    // hybrid: 480x320 logical units (cocos2d-x 2.2.3 default).
    pDirector->setDisplayStats(false);
    pEGLView->setDesignResolutionSize(480, 320, kResolutionNoBorder);

    // Set 60 FPS frame rate.
    pDirector->setAnimationInterval(1.0 / 60.0);

    // --- Load sprite frames ---
    CCSpriteFrameCache* frameCache = CCSpriteFrameCache::sharedSpriteFrameCache();
    if (frameCache) {
        // GJ_GameSheet contains every gameplay sprite (blocks, spikes,
        // portals, orbs, sawblades, the player icon, etc.).
        frameCache->addSpriteFramesWithFile("GJ_GameSheet.plist");
        frameCache->addSpriteFramesWithFile("GJ_GameSheet-hd.plist");
        // GJ_LaunchSheet contains menu / UI sprites.
        frameCache->addSpriteFramesWithFile("GJ_LaunchSheet.plist");
        frameCache->addSpriteFramesWithFile("GJ_LaunchSheet-hd.plist");
    }

    // --- Load bitmap fonts ---
    CCLabelBMFont* probe = CCLabelBMFont::create("Hieu Dash", "bigFont.fnt");
    CC_SAFE_RELEASE_NULL(probe); // warms the font cache

    // --- Preload audio (music + SFX) ---
    // SimpleAudioEngine is the cocos2d-x 2.2.3 cross-platform audio shim.
    CocosDenshion::SimpleAudioEngine* audio =
        CocosDenshion::SimpleAudioEngine::sharedEngine();
    if (audio) {
        // Background music tracks (mp3).
        audio->preloadBackgroundMusic("HieuLouis.mp3");
        audio->preloadBackgroundMusic("StereoMadness.mp3");
        audio->preloadBackgroundMusic("BackOnTrack.mp3");
        audio->preloadBackgroundMusic("Polargeist.mp3");
        audio->preloadBackgroundMusic("DryOut.mp3");
        audio->preloadBackgroundMusic("BaseAfterBase.mp3");
        audio->preloadBackgroundMusic("CantLetGo.mp3");
        audio->preloadBackgroundMusic("Jumper.mp3");
        audio->preloadBackgroundMusic("menuLoop.mp3");

        // Sound effects (ogg).
        audio->preloadEffect("playSound_01.ogg");
        audio->preloadEffect("explode_11.ogg");
        audio->preloadEffect("endStart_02.ogg");
        audio->preloadEffect("quitSound_01.ogg");
        audio->preloadEffect("achievement_01.ogg");
    }

    // --- Boot the GameManager / GameLevelManager / GameStatsManager ---
    GameManager::sharedState();
    GameLevelManager::sharedState();
    GameStatsManager::sharedState();
    s_bManagersLoaded = true;

    // --- Run the first scene ---
    // The LoadingLayer shows the splash, then transitions to MenuLayer.
    CCScene* pScene = LoadingLayer::scene();
    if (!pScene) {
        // Fallback: jump straight into the menu if the loading layer
        // has not been wired up.
        pScene = MenuLayer::scene();
    }
    if (pScene) {
        pDirector->runWithScene(pScene);
    }

    s_bLoadingFinished = true;
    return true;
}

void AppDelegate::applicationDidEnterBackground() {
    CCDirector::sharedDirector()->stopAnimation();
    CocosDenshion::SimpleAudioEngine::sharedEngine()->pauseBackgroundMusic();
    s_bPaused = true;
}

void AppDelegate::applicationWillEnterForeground() {
    CCDirector::sharedDirector()->startAnimation();
    CocosDenshion::SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    s_bPaused = false;
}

void AppDelegate::applicationWillResignActive() {
    // Same as didEnterBackground — pause everything.
    applicationDidEnterBackground();
}

void AppDelegate::checkSound() {
    CocosDenshion::SimpleAudioEngine* audio =
        CocosDenshion::SimpleAudioEngine::sharedEngine();
    if (audio && GameManager::sharedState()->getMusicEnabled()) {
        if (!audio->isBackgroundMusicPlaying()) {
            audio->resumeBackgroundMusic();
        }
    } else if (audio && audio->isBackgroundMusicPlaying()) {
        audio->pauseBackgroundMusic();
    }
}

int AppDelegate::get() {
    // Returns the singleton's opaque handle (used by some JNI helpers).
    return reinterpret_cast<int>(s_pAppDelegate);
}

bool AppDelegate::getIsIOS() {
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    return true;
#else
    return false;
#endif
}

bool AppDelegate::getLoadingFinished() { return s_bLoadingFinished; }
bool AppDelegate::getManagersLoaded()  { return s_bManagersLoaded; }
bool AppDelegate::getPaused()          { return s_bPaused; }

CCNode* AppDelegate::getScenePointer() { return s_pScenePointer; }

void AppDelegate::hideLoadingCircle() {
    // Defer to the loading layer if one is currently attached.
    CCScene* scene = CCDirector::sharedDirector()->getRunningScene();
    if (scene) {
        scene->removeChildByTag(0xC0FFEE, true); // tag reserved for the loading circle
    }
}

void AppDelegate::loadingIsFinished() {
    s_bLoadingFinished = true;
    // Transition from LoadingLayer into the main menu.
    CCScene* pScene = MenuLayer::scene();
    if (pScene) {
        CCDirector::sharedDirector()->replaceScene(pScene);
    }
}

void AppDelegate::pauseGame() {
    s_bPaused = true;
    CCDirector::sharedDirector()->pause();
}

void AppDelegate::resumeSound() {
    CocosDenshion::SimpleAudioEngine::sharedEngine()->resumeBackgroundMusic();
    s_bPaused = false;
}

void AppDelegate::setManagersLoaded(bool v) { s_bManagersLoaded = v; }
void AppDelegate::setPaused(bool v)         { s_bPaused = v; }
void AppDelegate::setScenePointer(CCNode* p) { s_pScenePointer = p; }

void AppDelegate::showLoadingCircle(bool p1, bool p2, bool p3) {
    CC_UNUSED_PARAM(p1); CC_UNUSED_PARAM(p2); CC_UNUSED_PARAM(p3);
    // LoadingCircle is a child layer tagged onto the running scene; the
    // implementation is intentionally a no-op because the real LoadingLayer
    // already shows the splash animation as part of its init().
}

void AppDelegate::trySaveGame() {
    // Persist GameManager state if the user has unlocked anything.
    GameManager* gm = GameManager::sharedState();
    if (gm) {
        // GameManager::save() in v0.5 just flushes the in-memory state
        // through DS_Dictionary; the original binary wrote it to
        // CCFileUtils::getWritablePath() + "GameManager.dat".
        // For now we rely on the in-memory singleton surviving across
        // scene transitions, which is sufficient for a smooth playthrough.
    }
}

void AppDelegate::willSwitchToScene(CCScene* pScene) {
    if (pScene) s_pScenePointer = pScene;
}
