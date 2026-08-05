#ifndef _LEVELINFOLAYER_H_
#define _LEVELINFOLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelInfoLayer {
public:
    FLAlert_Clicked(FLAlertLayer*, bool);
    LevelInfoLayer();
    confirmDelete();
    create(GJGameLevel*);
    incrementLikes();
    init(GJGameLevel*);
    keyBackClicked();
    levelDownloadFailed(int);
    levelDownloadFinished(GJGameLevel*);
    levelUpdateFailed(int);
    levelUpdateFinished(GJGameLevel*, UpdateResponse);
    onBack();
    onClone();
    onDelete();
    onInfo();
    onLike();
    onPlay();
    onRate();
    onUpdate();
    rateLevelClosed();
    scene(GJGameLevel*);
    setupLevelInfo();
    setupProgressBars();
    showUpdateAlert(UpdateResponse);
    updateLabelValues();
    updateSideButtons();
    ~LevelInfoLayer();
};

#endif // _LEVELINFOLAYER_H_
