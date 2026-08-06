#include "GameLevelManager.h"
#include "GJGameLevel.h"
#include "LevelTools.h"
#include "HieuLouisLevel.h"
#include "cocos2d.h"

USING_NS_CC;

// Singleton storage — created lazily on first call to sharedState().
static GameLevelManager* s_pSharedGLM = nullptr;

GameLevelManager::GameLevelManager() {
    m_pSavedLevels    = CCDictionary::create();
    m_pMainLevels     = CCDictionary::create();
    m_pOnlineLevelsDict = CCDictionary::create();
    CC_SAFE_RETAIN(m_pSavedLevels);
    CC_SAFE_RETAIN(m_pMainLevels);
    CC_SAFE_RETAIN(m_pOnlineLevelsDict);
}

void GameLevelManager::addDLToActive(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::createAndGetLevels(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::createNewLevel() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::dataLoaded(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::deleteLevel(GJGameLevel*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::downloadLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::encodeDataTo(DS_Dictionary*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::firstSetup() {
    // TODO: implement (recovered from binary, body unknown)
}

int GameLevelManager::getDelegate() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getDiffKey(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getDiffVal(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getDifficultyStr(bool, bool, bool, bool, bool, bool) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getDlDelegate() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLastSearchKey() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLenKey(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLenVal(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLengthStr(bool, bool, bool, bool) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLevelKey(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLikeKey(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLocalLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getLocalLevels() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

// Returns the GJGameLevel for the given main-level index.
// Indices 0..21 correspond to the original GD 1.0 main levels; index 22
// is the new "Hieu Louis" boss level added in v0.5.
GJGameLevel* GameLevelManager::getMainLevel(int levelIdx, bool p2) {
    CC_UNUSED_PARAM(p2);

    if (!m_pMainLevels) {
        m_pMainLevels = CCDictionary::create();
        CC_SAFE_RETAIN(m_pMainLevels);
    }

    // Cache hit?
    CCObject* cached = m_pMainLevels->objectForKey(levelIdx);
    if (cached) return static_cast<GJGameLevel*>(cached);

    GJGameLevel* lvl = nullptr;
    if (levelIdx >= 0 && levelIdx < 22) {
        // Defer to LevelTools for the original 22 levels.
        lvl = LevelTools::getLevel(levelIdx);
    } else if (levelIdx == 22) {
        // --- Hieu Louis (v0.5) ---
        lvl = GJGameLevel::create();
        if (lvl) {
            lvl->m_sLevelName    = HieuLouisLevel::levelName();
            lvl->m_sLevelDesc    = HieuLouisLevel::levelDesc();
            lvl->m_sLevelString  = HieuLouisLevel::levelString();
            lvl->m_nLevelID      = HieuLouisLevel::levelID();
            lvl->m_nAudioTrack   = HieuLouisLevel::songID();
            lvl->m_nLevelType    = kGJLevelTypeMain;
            lvl->m_nDifficulty   = 6;            // demon
            lvl->m_nStars        = 10;           // 10 stars = extreme demon
            lvl->m_nLevelLength  = 5;            // "long"
            lvl->m_nLevelVersion = 1;
            lvl->m_nGameVersion  = 1;
            lvl->m_bIsEditable   = false;
            lvl->m_bIsUploaded   = false;
            lvl->m_bIsVerified   = true;
        }
    }

    if (lvl) {
        m_pMainLevels->setObject(lvl, levelIdx);
    }
    return lvl;
}

// Original 1-arg stub kept for ABI compatibility with v0.3 binaries.
int GameLevelManager::getMainLevel(int levelIdx) {
    GJGameLevel* lvl = getMainLevel(levelIdx, false);
    return lvl ? lvl->getLevelID() : 0;
}

int GameLevelManager::getOnlineLevels(GJSearchObject*) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getPageInfo(char const*) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getRateKey(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getSavedLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getSavedLevels() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getSearchScene(char const*) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getStoredOnlineLevels(char const*) {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getUpDelegate() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

int GameLevelManager::getUpdateDelegate() {
    // TODO: implement (recovered from binary, body unknown)
    return 0;
}

void GameLevelManager::gotoLevelPage(GJGameLevel*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::hasDownloadedLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::hasLikedLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::hasRatedLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
}

bool GameLevelManager::init() {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameLevelManager::isDLActive(char const*) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameLevelManager::isTimeValid(char const*, float) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

bool GameLevelManager::isUpdateValid(int) {
    // TODO: implement (recovered from binary, body unknown)
    return false;
}

void GameLevelManager::likeLevel(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::makeTimeStamp(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::markLevelAsDownloaded(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::markLevelAsLiked(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::markLevelAsRated(int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onDownloadLevelCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onGetOnlineLevelsCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onLikeLevelCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onRateLevelCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onUpdateLevelCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onUpdateUserNameCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::onUploadLevelCompleted(cocos2d::CCNode*, void*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::rateLevel(int, int) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::removeDLFromActive(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::removeDelimiterChars(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::resetAllTimers() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::responseToDict(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::saveLevel(GJGameLevel*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setDelegate(LevelManagerDelegate*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setDiffVal(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setDlDelegate(LevelDownloadDelegate*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setLastSearchKey(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setLenVal(int, bool) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setUpDelegate(LevelUploadDelegate*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::setUpdateDelegate(LevelUpdateDelegate*) {
    // TODO: implement (recovered from binary, body unknown)
}

GameLevelManager* GameLevelManager::sharedState() {
    if (!s_pSharedGLM) {
        s_pSharedGLM = new GameLevelManager();
    }
    return s_pSharedGLM;
}

void GameLevelManager::storeSearchResult(cocos2d::CCArray*, std::string, char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::storeUserNames(std::string) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::updateLevel(GJGameLevel*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::updateUserName() {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::uploadLevel(GJGameLevel*) {
    // TODO: implement (recovered from binary, body unknown)
}

void GameLevelManager::userNameForID(char const*) {
    // TODO: implement (recovered from binary, body unknown)
}

GameLevelManager::~GameLevelManager() {
    // TODO: implement (recovered from binary, body unknown)
}
