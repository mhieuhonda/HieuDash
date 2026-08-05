#ifndef _GAMELEVELMANAGER_H_
#define _GAMELEVELMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameLevelManager {
public:
    GameLevelManager();
    addDLToActive(char const*);
    createAndGetLevels(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    createNewLevel();
    dataLoaded(DS_Dictionary*);
    deleteLevel(GJGameLevel*);
    downloadLevel(int);
    encodeDataTo(DS_Dictionary*);
    firstSetup();
    getDelegate();
    getDiffKey(int);
    getDiffVal(int);
    getDifficultyStr(bool, bool, bool, bool, bool, bool);
    getDlDelegate();
    getLastSearchKey();
    getLenKey(int);
    getLenVal(int);
    getLengthStr(bool, bool, bool, bool);
    getLevelKey(int);
    getLikeKey(int);
    getLocalLevel(int);
    getLocalLevels();
    getMainLevel(int);
    getOnlineLevels(GJSearchObject*);
    getPageInfo(char const*);
    getRateKey(int);
    getSavedLevel(int);
    getSavedLevels();
    getSearchScene(char const*);
    getStoredOnlineLevels(char const*);
    getUpDelegate();
    getUpdateDelegate();
    gotoLevelPage(GJGameLevel*);
    hasDownloadedLevel(int);
    hasLikedLevel(int);
    hasRatedLevel(int);
    init();
    isDLActive(char const*);
    isTimeValid(char const*, float);
    isUpdateValid(int);
    likeLevel(int);
    makeTimeStamp(char const*);
    markLevelAsDownloaded(int);
    markLevelAsLiked(int);
    markLevelAsRated(int);
    onDownloadLevelCompleted(cocos2d::CCNode*, void*);
    onGetOnlineLevelsCompleted(cocos2d::CCNode*, void*);
    onLikeLevelCompleted(cocos2d::CCNode*, void*);
    onRateLevelCompleted(cocos2d::CCNode*, void*);
    onUpdateLevelCompleted(cocos2d::CCNode*, void*);
    onUpdateUserNameCompleted(cocos2d::CCNode*, void*);
    onUploadLevelCompleted(cocos2d::CCNode*, void*);
    rateLevel(int, int);
    removeDLFromActive(char const*);
    removeDelimiterChars(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    resetAllTimers();
    responseToDict(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    saveLevel(GJGameLevel*);
    setDelegate(LevelManagerDelegate*);
    setDiffVal(int, bool);
    setDlDelegate(LevelDownloadDelegate*);
    setLastSearchKey(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setLenVal(int, bool);
    setUpDelegate(LevelUploadDelegate*);
    setUpdateDelegate(LevelUpdateDelegate*);
    sharedState();
    storeSearchResult(cocos2d::CCArray*, std::basic_string<char, std::char_traits<char>, std::allocator<char> >, char const*);
    storeUserNames(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    updateLevel(GJGameLevel*);
    updateUserName();
    uploadLevel(GJGameLevel*);
    userNameForID(char const*);
    ~GameLevelManager();
};

#endif // _GAMELEVELMANAGER_H_
