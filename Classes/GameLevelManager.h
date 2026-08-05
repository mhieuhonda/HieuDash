#ifndef HIEUDASH_GAMELEVELMANAGER_H_
#define HIEUDASH_GAMELEVELMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameLevelManager : public cocos2d::CCObject {
public:
    GameLevelManager();

    // --- Level dictionaries ---
    cocos2d::CCDictionary* m_pSavedLevels;
    cocos2d::CCDictionary* m_pMainLevels;
    cocos2d::CCDictionary* m_pOnlineLevelsDict;

    // --- Delegate pointers ---
    LevelManagerDelegate* m_pDelegate;
    LevelDownloadDelegate* m_pDlDelegate;
    LevelUploadDelegate* m_pUpDelegate;
    LevelUpdateDelegate* m_pUpdateDelegate;

    // --- Methods ---
    void addDLToActive(char const*);
    void createAndGetLevels(std::string);
    void createNewLevel();
    void dataLoaded(DS_Dictionary*);
    void deleteLevel(GJGameLevel*);
    void downloadLevel(int);
    void encodeDataTo(DS_Dictionary*);
    void firstSetup();
    int getDelegate();
    int getDiffKey(int);
    int getDiffVal(int);
    int getDifficultyStr(bool, bool, bool, bool, bool, bool);
    int getDlDelegate();
    int getLastSearchKey();
    int getLenKey(int);
    int getLenVal(int);
    int getLengthStr(bool, bool, bool, bool);
    int getLevelKey(int);
    int getLikeKey(int);
    int getLocalLevel(int);
    int getLocalLevels();
    int getMainLevel(int);
    int getOnlineLevels(GJSearchObject*);
    int getPageInfo(char const*);
    int getRateKey(int);
    int getSavedLevel(int);
    int getSavedLevels();
    int getSearchScene(char const*);
    int getStoredOnlineLevels(char const*);
    int getUpDelegate();
    int getUpdateDelegate();
    void gotoLevelPage(GJGameLevel*);
    void hasDownloadedLevel(int);
    void hasLikedLevel(int);
    void hasRatedLevel(int);
    bool init();
    bool isDLActive(char const*);
    bool isTimeValid(char const*, float);
    bool isUpdateValid(int);
    void likeLevel(int);
    void makeTimeStamp(char const*);
    void markLevelAsDownloaded(int);
    void markLevelAsLiked(int);
    void markLevelAsRated(int);
    void onDownloadLevelCompleted(cocos2d::CCNode*, void*);
    void onGetOnlineLevelsCompleted(cocos2d::CCNode*, void*);
    void onLikeLevelCompleted(cocos2d::CCNode*, void*);
    void onRateLevelCompleted(cocos2d::CCNode*, void*);
    void onUpdateLevelCompleted(cocos2d::CCNode*, void*);
    void onUpdateUserNameCompleted(cocos2d::CCNode*, void*);
    void onUploadLevelCompleted(cocos2d::CCNode*, void*);
    void rateLevel(int, int);
    void removeDLFromActive(char const*);
    void removeDelimiterChars(std::string);
    void resetAllTimers();
    void responseToDict(std::string);
    void saveLevel(GJGameLevel*);
    void setDelegate(LevelManagerDelegate*);
    void setDiffVal(int, bool);
    void setDlDelegate(LevelDownloadDelegate*);
    void setLastSearchKey(std::string);
    void setLenVal(int, bool);
    void setUpDelegate(LevelUploadDelegate*);
    void setUpdateDelegate(LevelUpdateDelegate*);
    GameLevelManager* sharedState();
    void storeSearchResult(cocos2d::CCArray*, std::string, char const*);
    void storeUserNames(std::string);
    void updateLevel(GJGameLevel*);
    void updateUserName();
    void uploadLevel(GJGameLevel*);
    void userNameForID(char const*);
    ~GameLevelManager();
};

#endif // HIEUDASH_GAMELEVELMANAGER_H_
