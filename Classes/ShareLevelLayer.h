#ifndef HIEUDASH_SHARELEVELLAYER_H_
#define HIEUDASH_SHARELEVELLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ShareLevelLayer : public cocos2d::CCLayer {
public:
    ShareLevelLayer();
    static ShareLevelLayer* create(GJGameLevel*);
    bool init(GJGameLevel*);
    void keyBackClicked();
    void onClose();
    void onShare();
    ~ShareLevelLayer();
};

#endif // HIEUDASH_SHARELEVELLAYER_H_
