// ============================================================
// LevelInfoLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELINFOLAYER_H_
#define LEVELINFOLAYER_H_

#include "cocos2d.h"

class LevelInfoLayer : public cocos2d::CCLayer {
public:
    virtual ~LevelInfoLayer();
    virtual ~LevelInfoLayer();
    virtual ~LevelInfoLayer();

    void onFavorite(cocos2d::CCObject*);
    void onAddToList(cocos2d::CCObject*);
    void onLevelInfo(cocos2d::CCObject*);
    void onRateDemon(cocos2d::CCObject*);
    void onRateStars(cocos2d::CCObject*);
    void onSetFolder(cocos2d::CCObject*);
    void confirmClone(cocos2d::CCObject*);
    void onPlayReplay(cocos2d::CCObject*);
    void confirmDelete(cocos2d::CCObject*);
    void downloadLevel();
    void loadLevelStep();
    void onOwnerDelete(cocos2d::CCObject*);
    void onViewProfile(cocos2d::CCObject*);
    void tryCloneLevel(cocos2d::CCObject*);
    void incrementLikes();
    void keyBackClicked() override;
    void onLevelOptions(cocos2d::CCObject*);
    void onRateStarsMod(cocos2d::CCObject*);
    void setupLevelInfo();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void rateLevelClosed();
    void showSongWarning();
    void showUpdateAlert(UpdateResponse);
    void confirmMoveToTop(cocos2d::CCObject*);
    void setIDPopupClosed(SetIDPopup*, int);
    void incrementDislikes();
    void levelDeleteFailed(int);
    void levelUpdateFailed(int);
    void numberInputClosed(NumberInputLayer*);
    void setupProgressBars();
    void updateLabelValues();
    void updateSideButtons();
    void confirmOwnerDelete(cocos2d::CCObject*);
    void onLevelLeaderboard(cocos2d::CCObject*);
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void confirmMoveToBottom(cocos2d::CCObject*);
    void levelDeleteFinished(int);
    void levelDownloadFailed(int);
    void levelUpdateFinished(GJGameLevel*, UpdateResponse);
    void shouldDownloadLevel();
    void setupPlatformerStats();
    void levelDownloadFinished(GJGameLevel*);
    void onEnterTransitionDidFinish();
    void init(GJGameLevel*, bool) override;
    void scene(GJGameLevel*, bool);
    void create(GJGameLevel*, bool);
    void onBack(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void onLike(cocos2d::CCObject*);
    void onPlay(cocos2d::CCObject*);
    void onRate(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onClone(cocos2d::CCObject*);
    void onDelete(cocos2d::CCObject*);
    void onGarage(cocos2d::CCObject*);
    void onUpdate(cocos2d::CCObject*);
    void likedItem(LikeItemType, int, bool);
    void playStep2();
    void playStep3();
    void playStep4();
    void tryShowAd();

protected:
    int m_iDPopupClosed;

};

#endif // LEVELINFOLAYER_H_
