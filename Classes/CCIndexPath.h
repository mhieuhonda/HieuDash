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
    // v0.7 fix: MSVC C4430 - operators MUST have explicit return types
    // (GCC -fpermissive silently infers int, which is forbidden in C++.)
    CCIndexPath& operator=(CCIndexPath const&);
    bool operator==(CCIndexPath&);
    ~CCIndexPath();
};

#endif // HIEUDASH_CCINDEXPATH_H_
