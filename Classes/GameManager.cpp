#include "GameManager.h"
#include "GameSoundManager.h"
#include "GameStatsManager.h"
#include "CocosDenshion.h"
#include "cocos2d.h"
#include <cstring>

USING_NS_CC;

// Singleton storage — created lazily on first call to sharedState().
static GameManager* s_pSharedGameManager = nullptr;

// ============================================================================
//  v0.5 — Working singleton + minimal state for GameManager.
//  The original binary persisted player progress via DS_Dictionary, but
//  for runtime correctness we only need the singleton to exist and to
//  expose sensible defaults for music/SFX/icon selection.
// ============================================================================

GameManager::GameManager() {
    m_pPlayLayer        = nullptr;
    m_pLevelEditorLayer = nullptr;
    m_pMenuLayer        = nullptr;
    m_eScene            = kSceneNone;
    m_fBGVolume         = 1.0f;
    m_fSFXVolume        = 1.0f;
    m_nPlayerFrame      = 1;  // default cube icon
}

GameManager* GameManager::sharedState() {
    if (!s_pSharedGameManager) {
        s_pSharedGameManager = new GameManager();
        s_pSharedGameManager->init();
        s_pSharedGameManager->setup();
    }
    return s_pSharedGameManager;
}

bool GameManager::init() {
    // Default player profile.
    m_sPlayerName = "Player";
    m_bMusicEnabled  = true;
    m_bFxEnabled     = true;
    m_bFirstSetup    = true;
    return true;
}

void GameManager::setup() {
    // Trigger dependent singletons so they are constructed before any
    // scene tries to use them.
    GameStatsManager::sharedState();
    GameSoundManager::sharedManager();
}

void GameManager::applicationDidEnterBackground() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::applicationWillEnterForeground() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::claimItemsResponse(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

cocos2d::_ccColor3B GameManager::colorForIdx(int) {
    // TODO: implement (recovered from binary, body unknown)
    return cocos2d::ccc3(255, 255, 255);
}

cocos2d::_ccColor3B GameManager::colorKey(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
    return cocos2d::ccc3(255, 255, 255);
}

void GameManager::completedAchievement(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::dataLoaded(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::encodeDataTo(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::eventUnlockFeature(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::fadeInMusic(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::firstLoad() {
    m_bFirstSetup = false;
}

bool GameManager::getAutoCheckpoints() {
    return m_bAutoCheckpoints;
}

bool GameManager::getClickedEditor() {
    return m_bClickedEditor;
}

bool GameManager::getClickedGarage() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getClickedName() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getDidRateGame() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getEditMode() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getFirstSetup() {
    return m_bFirstSetup;
}

void GameManager::setFirstSetup(bool v) {
    m_bFirstSetup = v;
}

bool GameManager::getMusicEnabled() {
    return m_bMusicEnabled;
}

bool GameManager::getFxEnabled() {
    return m_bFxEnabled;
}

bool GameManager::getGameCenterEnabled() {
    return m_bGameCenterEnabled;
}

LastGameScene GameManager::getLastScene() {
    return kLastGameSceneMenu;
}

int GameManager::getLevelKey(int, int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

LevelSelectLayer* GameManager::getLevelSelectLayer() {
    return m_pLevelSelectLayer;
}

bool GameManager::getMainMenuActive() {
    return m_bMainMenuActive;
}

int GameManager::getNextLevel(int, int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

PlayLayer* GameManager::getPlayLayer() {
    // TODO: implement (recovered from binary, body unknown)
    return nullptr;
}

int GameManager::getPlayerColor() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameManager::getPlayerColor2() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameManager::getPlayerFrame() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

std::string GameManager::getPlayerName() {
    // TODO: implement (recovered from binary, body unknown)
    return "";
}

std::string GameManager::getPlayerUDID() {
    // TODO: implement (recovered from binary, body unknown)
    return "";
}

PremiumPopup* GameManager::getPremiumPopup() {
    // TODO: implement (recovered from binary, body unknown)
    return nullptr;
}

GameRateDelegate* GameManager::getRateDelegate() {
    // TODO: implement (recovered from binary, body unknown)
    return nullptr;
}

int GameManager::getResultForLevel(int, int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

bool GameManager::getReturnToSearch() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getShowBPMMarkers() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getShowSongMarkers() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getShowedEditorGuide() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getShowedFirstTutorial() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::getWasHigh() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

int GameManager::highestLevelForType(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameManager::iconKey(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

bool GameManager::isColorUnlocked(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameManager::isIconUnlocked(int) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

void GameManager::itemPurchased(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

bool GameManager::levelIsPremium(int, int) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

void GameManager::openEditorGuide() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::rateGame() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::reactivateTutorial() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::registerLevelResult(int, int, int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::reportAchievementWithID(char const*, int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::reportPercentageForLevel(int, int, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::resetMusic() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::returnToLastScene(GJGameLevel*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setAutoCheckpoints(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setClickedEditor(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setClickedGarage(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setClickedName(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setDidRateGame(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setEditMode(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setGameCenterEnabled(bool v) {
    m_bGameCenterEnabled = v;
}

void GameManager::setLastScene(LastGameScene) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setLevelSelectLayer(LevelSelectLayer*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setMainMenuActive(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPlayLayer(PlayLayer*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPlayerColor(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPlayerColor2(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPlayerFrame(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPlayerName(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPlayerUDID(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setPremiumPopup(PremiumPopup*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setRateDelegate(GameRateDelegate*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setReturnToSearch(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setShowBPMMarkers(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setShowSongMarkers(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setShowedEditorGuide(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setShowedFirstTutorial(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::setWasHigh(bool) {
    // TODO: implement (recovered from binary, body unknown)
}

bool GameManager::shouldShowTutorial(int) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

void GameManager::showInterstitial() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::showMainMenuAd() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::showTutorial() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::syncGCAchievements() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::toggleFX() {
    m_bFxEnabled = !m_bFxEnabled;
}

void GameManager::toggleMusic() {
    m_bMusicEnabled = !m_bMusicEnabled;
    CocosDenshion::SimpleAudioEngine* audio =
        CocosDenshion::SimpleAudioEngine::sharedEngine();
    if (audio) {
        if (m_bMusicEnabled) audio->resumeBackgroundMusic();
        else                  audio->pauseBackgroundMusic();
    }
}

void GameManager::unlockColor(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::unlockIcon(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::unlockedPremium() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::updateHighest(int, int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameManager::updateMusicVolume() {
    // TODO: implement (recovered from binary, body unknown)
}

GameManager::~GameManager() {
    // TODO: implement (recovered from binary, body unknown)
}
