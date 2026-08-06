#ifndef HIEUDASH_UPLOADPOPUP_H_
#define HIEUDASH_UPLOADPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class UploadPopup : public cocos2d::CCLayer {
public:
    UploadPopup();
    static UploadPopup* create(GJGameLevel*);
    bool init(GJGameLevel*);
    void keyBackClicked();
    void levelUploadFailed(GJGameLevel*);
    void levelUploadFinished(GJGameLevel*);
    void onBack();
    void onClose();
    void onReturnToLevel();
    void show();
    ~UploadPopup();
};

#endif // HIEUDASH_UPLOADPOPUP_H_
