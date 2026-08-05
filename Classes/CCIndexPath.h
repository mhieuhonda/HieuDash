#ifndef HIEUDASH_CCINDEXPATH_H_
#define HIEUDASH_CCINDEXPATH_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCIndexPath : public cocos2d::CCObject {
public:
    CCIndexPath();
    CCIndexPath(CCIndexPath const&);
    CCIndexPath(int, int);
    void CCIndexPathWithSectionRow(int, int);
    operator=(CCIndexPath const&);
    operator==(CCIndexPath&);
    ~CCIndexPath();
};

#endif // HIEUDASH_CCINDEXPATH_H_
