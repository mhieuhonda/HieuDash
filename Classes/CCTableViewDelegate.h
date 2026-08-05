#ifndef _CCTABLEVIEWDELEGATE_H_
#define _CCTABLEVIEWDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCTableViewDelegate {
public:
    CCTableViewDelegate();
    ccTableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    ccTableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    ccTableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    didEndTweenToIndexPath(CCIndexPath&, CCTableView*);
    willTweenToIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
};

#endif // _CCTABLEVIEWDELEGATE_H_
