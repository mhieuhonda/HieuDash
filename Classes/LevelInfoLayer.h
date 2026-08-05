#ifndef HIEUDASH_LEVELINFOLAYER_H_
#define HIEUDASH_LEVELINFOLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelInfoLayer : public cocos2d::CCLayer {
public:
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    LevelInfoLayer();
    void confirmDelete();
    LevelInfoLayer* create(GJGameLevel*);
    void incrementLikes();
    bool init(GJGameLevel*);
    void keyBackClicked();
    void levelDownloadFailed(int);
    void levelDownloadFinished(GJGameLevel*);
    void levelUpdateFailed(int);
    void levelUpdateFinished(GJGameLevel*, UpdateResponse);
    void onBack();
    void onClone();
    void onDelete();
    void onInfo();
    void onLike();
    void onPlay();
    void onRate();
    void onUpdate();
    void rateLevelClosed();
    cocos2d::CCScene* scene(GJGameLevel*);
    void setupLevelInfo();
    void setupProgressBars();
    void showUpdateAlert(UpdateResponse);
    void updateLabelValues();
    void updateSideButtons();
    ~LevelInfoLayer();
};

#endif // HIEUDASH_LEVELINFOLAYER_H_
