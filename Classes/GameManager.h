#ifndef HIEUDASH_GAMEMANAGER_H_
#define HIEUDASH_GAMEMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "GManager.h"

class GameManager : public GManager {
public:
    GameManager();

    // --- Scene pointers ---
    PlayLayer* m_pPlayLayer;
    LevelEditorLayer* m_pLevelEditorLayer;
    MenuLayer* m_pMenuLayer;
    Scene m_eScene;

    // --- Player icon anti-cheat seeds/rands ---
    int m_nPlayerFrameSeed;
    int m_nPlayerFrameRand;
    int m_nPlayerShipSeed;
    int m_nPlayerShipRand;
    int m_nPlayerBallSeed;
    int m_nPlayerBallRand;
    int m_nPlayerUfoSeed;
    int m_nPlayerUfoRand;
    int m_nPlayerWaveSeed;
    int m_nPlayerWaveRand;
    int m_nPlayerRobotSeed;
    int m_nPlayerRobotRand;
    int m_nPlayerSpiderSeed;
    int m_nPlayerSpiderRand;

    // --- Audio ---
    float m_fBGVolume;
    float m_fSFXVolume;

    // --- Methods ---
    void applicationDidEnterBackground();
    void applicationWillEnterForeground();
    void claimItemsResponse(std::string);
    cocos2d::_ccColor3B colorForIdx(int);
    cocos2d::_ccColor3B colorKey(int, bool);
    void completedAchievement(char const*);
    void dataLoaded(DS_Dictionary*);
    void encodeDataTo(DS_Dictionary*);
    void eventUnlockFeature(char const*);
    void fadeInMusic(char const*);
    void firstLoad();
    bool getAutoCheckpoints();
    bool getClickedEditor();
    bool getClickedGarage();
    bool getClickedName();
    bool getDidRateGame();
    bool getEditMode();
    bool getFirstSetup();
    bool getFxEnabled();
    bool getGameCenterEnabled();
    LastGameScene getLastScene();
    int getLevelKey(int, int);
    LevelSelectLayer* getLevelSelectLayer();
    bool getMainMenuActive();
    bool getMusicEnabled();
    int getNextLevel(int, int);
    PlayLayer* getPlayLayer();
    int getPlayerColor();
    int getPlayerColor2();
    int getPlayerFrame();
    std::string getPlayerName();
    std::string getPlayerUDID();
    PremiumPopup* getPremiumPopup();
    GameRateDelegate* getRateDelegate();
    int getResultForLevel(int, int);
    bool getReturnToSearch();
    bool getShowBPMMarkers();
    bool getShowSongMarkers();
    bool getShowedEditorGuide();
    bool getShowedFirstTutorial();
    bool getWasHigh();
    int highestLevelForType(int);
    int iconKey(int);
    bool init();
    bool isColorUnlocked(int, bool);
    bool isIconUnlocked(int);
    void itemPurchased(char const*);
    bool levelIsPremium(int, int);
    void openEditorGuide();
    void rateGame();
    void reactivateTutorial();
    void registerLevelResult(int, int, int);
    void reportAchievementWithID(char const*, int);
    void reportPercentageForLevel(int, int, bool);
    void resetMusic();
    void returnToLastScene(GJGameLevel*);
    void setAutoCheckpoints(bool);
    void setClickedEditor(bool);
    void setClickedGarage(bool);
    void setClickedName(bool);
    void setDidRateGame(bool);
    void setEditMode(bool);
    void setFirstSetup(bool);
    void setGameCenterEnabled(bool);
    void setLastScene(LastGameScene);
    void setLevelSelectLayer(LevelSelectLayer*);
    void setMainMenuActive(bool);
    void setPlayLayer(PlayLayer*);
    void setPlayerColor(int);
    void setPlayerColor2(int);
    void setPlayerFrame(int);
    void setPlayerName(std::string);
    void setPlayerUDID(std::string);
    void setPremiumPopup(PremiumPopup*);
    void setRateDelegate(GameRateDelegate*);
    void setReturnToSearch(bool);
    void setShowBPMMarkers(bool);
    void setShowSongMarkers(bool);
    void setShowedEditorGuide(bool);
    void setShowedFirstTutorial(bool);
    void setWasHigh(bool);
    void setup();
    GameManager* sharedState();
    bool shouldShowTutorial(int);
    void showInterstitial();
    void showMainMenuAd();
    void showTutorial();
    void syncGCAchievements();
    void toggleFX();
    void toggleMusic();
    void unlockColor(int, bool);
    void unlockIcon(int);
    void unlockedPremium();
    void updateHighest(int, int);
    void updateMusicVolume();
    ~GameManager();
};

#endif // HIEUDASH_GAMEMANAGER_H_
