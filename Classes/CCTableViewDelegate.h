#ifndef HIEUDASH_CCTABLEVIEWDELEGATE_H_
#define HIEUDASH_CCTABLEVIEWDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCTableViewDelegate : public cocos2d::CCObject {
public:
    virtual ~CCTableViewDelegate() {}
    CCTableViewDelegate();
    void ccTableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    void ccTableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    void ccTableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    void didEndTweenToIndexPath(CCIndexPath&, CCTableView*);
    void willTweenToIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
};

#endif // HIEUDASH_CCTABLEVIEWDELEGATE_H_
