#ifndef HIEUDASH_CCTABLEVIEWDATASOURCE_H_
#define HIEUDASH_CCTABLEVIEWDATASOURCE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCTableViewDataSource : public cocos2d::CCObject {
public:
    virtual ~CCTableViewDataSource() {}
    CCTableViewDataSource();
    void ccTableViewCommitCellEditingStyleForRowAtIndexPath(CCTableView*, CCTableViewCellEditingStyle, CCIndexPath&);
    void numberOfSectionsInCCTableView(CCTableView*);
};

#endif // HIEUDASH_CCTABLEVIEWDATASOURCE_H_
