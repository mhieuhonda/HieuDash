#ifndef HIEUDASH_LEVELUPLOADDELEGATE_H_
#define HIEUDASH_LEVELUPLOADDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelUploadDelegate : public cocos2d::CCObject {
public:
    virtual ~LevelUploadDelegate() {}
    LevelUploadDelegate();
    void levelUploadFailed(GJGameLevel*);
    void levelUploadFinished(GJGameLevel*);
};

#endif // HIEUDASH_LEVELUPLOADDELEGATE_H_
