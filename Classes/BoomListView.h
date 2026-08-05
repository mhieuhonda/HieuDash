#ifndef _BOOMLISTVIEW_H_
#define _BOOMLISTVIEW_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class BoomListView {
public:
    BoomListView();
    ccTableViewCommitCellEditingStyleForRowAtIndexPath(CCTableView*, CCTableViewCellEditingStyle, CCIndexPath&);
    ccTableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    ccTableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    cellForRowAtIndexPath(CCIndexPath&, CCTableView*);
    cellHeightForRowAtIndexPath(CCIndexPath&, CCTableView*);
    create(cocos2d::CCArray*, float, float, int, BoomListType);
    didSelectRowAtIndexPath(CCIndexPath&, CCTableView*);
    draw();
    getListCell(char const*);
    init(cocos2d::CCArray*, float, float, int, BoomListType);
    loadCell(CCTableViewCell*, int);
    numberOfRowsInSection(unsigned int, CCTableView*);
    numberOfSectionsInCCTableView(CCTableView*);
    setupList();
    ~BoomListView();
};

#endif // _BOOMLISTVIEW_H_
