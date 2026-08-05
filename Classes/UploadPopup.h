#ifndef _UPLOADPOPUP_H_
#define _UPLOADPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class UploadPopup {
public:
    UploadPopup();
    create(GJGameLevel*);
    init(GJGameLevel*);
    keyBackClicked();
    levelUploadFailed(GJGameLevel*);
    levelUploadFinished(GJGameLevel*);
    onBack();
    onClose();
    onReturnToLevel();
    show();
    ~UploadPopup();
};

#endif // _UPLOADPOPUP_H_
