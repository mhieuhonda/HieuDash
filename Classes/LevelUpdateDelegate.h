#ifndef HIEUDASH_LEVELUPDATEDELEGATE_H_
#define HIEUDASH_LEVELUPDATEDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelUpdateDelegate : public cocos2d::CCObject {
public:
    virtual ~LevelUpdateDelegate() {}
    LevelUpdateDelegate();
    void levelUpdateFailed(int);
    void levelUpdateFinished(GJGameLevel*, UpdateResponse);
};

#endif // HIEUDASH_LEVELUPDATEDELEGATE_H_
