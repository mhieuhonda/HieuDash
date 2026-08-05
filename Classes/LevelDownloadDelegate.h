#ifndef HIEUDASH_LEVELDOWNLOADDELEGATE_H_
#define HIEUDASH_LEVELDOWNLOADDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelDownloadDelegate : public cocos2d::CCObject {
public:
    virtual ~LevelDownloadDelegate() {}
    LevelDownloadDelegate();
    void levelDownloadFailed(int);
    void levelDownloadFinished(GJGameLevel*);
};

#endif // HIEUDASH_LEVELDOWNLOADDELEGATE_H_
