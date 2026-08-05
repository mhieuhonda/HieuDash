#ifndef _CCINDEXPATH_H_
#define _CCINDEXPATH_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCIndexPath {
public:
    CCIndexPath();
    CCIndexPath(CCIndexPath const&);
    CCIndexPath(int, int);
    CCIndexPathWithSectionRow(int, int);
    operator=(CCIndexPath const&);
    operator==(CCIndexPath&);
    ~CCIndexPath();
};

#endif // _CCINDEXPATH_H_
