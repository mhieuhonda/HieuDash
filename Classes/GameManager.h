#ifndef _GAMEMANAGER_H_
#define _GAMEMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameManager {
public:
    GameManager();
    applicationDidEnterBackground();
    applicationWillEnterForeground();
    claimItemsResponse(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    colorForIdx(int);
    colorKey(int, bool);
    completedAchievement(char const*);
    dataLoaded(DS_Dictionary*);
    encodeDataTo(DS_Dictionary*);
    eventUnlockFeature(char const*);
    fadeInMusic(char const*);
    firstLoad();
    getAutoCheckpoints();
    getClickedEditor();
    getClickedGarage();
    getClickedName();
    getDidRateGame();
    getEditMode();
    getFirstSetup();
    getFxEnabled();
    getGameCenterEnabled();
    getLastScene();
    getLevelKey(int, int);
    getLevelSelectLayer();
    getMainMenuActive();
    getMusicEnabled();
    getNextLevel(int, int);
    getPlayLayer();
    getPlayerColor();
    getPlayerColor2();
    getPlayerFrame();
    getPlayerName();
    getPlayerUDID();
    getPremiumPopup();
    getRateDelegate();
    getResultForLevel(int, int);
    getReturnToSearch();
    getShowBPMMarkers();
    getShowSongMarkers();
    getShowedEditorGuide();
    getShowedFirstTutorial();
    getWasHigh();
    highestLevelForType(int);
    iconKey(int);
    init();
    isColorUnlocked(int, bool);
    isIconUnlocked(int);
    itemPurchased(char const*);
    levelIsPremium(int, int);
    openEditorGuide();
    rateGame();
    reactivateTutorial();
    registerLevelResult(int, int, int);
    reportAchievementWithID(char const*, int);
    reportPercentageForLevel(int, int, bool);
    resetMusic();
    returnToLastScene(GJGameLevel*);
    setAutoCheckpoints(bool);
    setClickedEditor(bool);
    setClickedGarage(bool);
    setClickedName(bool);
    setDidRateGame(bool);
    setEditMode(bool);
    setFirstSetup(bool);
    setGameCenterEnabled(bool);
    setLastScene(LastGameScene);
    setLevelSelectLayer(LevelSelectLayer*);
    setMainMenuActive(bool);
    setPlayLayer(PlayLayer*);
    setPlayerColor(int);
    setPlayerColor2(int);
    setPlayerFrame(int);
    setPlayerName(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setPlayerUDID(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setPremiumPopup(PremiumPopup*);
    setRateDelegate(GameRateDelegate*);
    setReturnToSearch(bool);
    setShowBPMMarkers(bool);
    setShowSongMarkers(bool);
    setShowedEditorGuide(bool);
    setShowedFirstTutorial(bool);
    setWasHigh(bool);
    setup();
    sharedState();
    shouldShowTutorial(int);
    showInterstitial();
    showMainMenuAd();
    showTutorial();
    syncGCAchievements();
    toggleFX();
    toggleMusic();
    unlockColor(int, bool);
    unlockIcon(int);
    unlockedPremium();
    updateHighest(int, int);
    updateMusicVolume();
    ~GameManager();
};

#endif // _GAMEMANAGER_H_
