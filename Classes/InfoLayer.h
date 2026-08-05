#ifndef HIEUDASH_INFOLAYER_H_
#define HIEUDASH_INFOLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class InfoLayer : public cocos2d::CCLayer {
public:
    InfoLayer();
    InfoLayer* create(GJGameLevel*);
    bool init(GJGameLevel*);
    void keyBackClicked();
    void onClose();
    void onMore();
    void setupLevelInfo();
    ~InfoLayer();
};

#endif // HIEUDASH_INFOLAYER_H_
