#ifndef _CCTABLEVIEWDATASOURCE_H_
#define _CCTABLEVIEWDATASOURCE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCTableViewDataSource {
public:
    CCTableViewDataSource();
    ccTableViewCommitCellEditingStyleForRowAtIndexPath(CCTableView*, CCTableViewCellEditingStyle, CCIndexPath&);
    numberOfSectionsInCCTableView(CCTableView*);
};

#endif // _CCTABLEVIEWDATASOURCE_H_
