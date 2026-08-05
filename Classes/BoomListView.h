#ifndef HIEUDASH_BOOMLISTVIEW_H_
#define HIEUDASH_BOOMLISTVIEW_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class BoomListView : public cocos2d::CCLayer {
public:
    BoomListView();
    void ccTableViewCommitCellEditingStyleForRowAtIndexPath(CCTableView*, CCTableViewCellEditingStyle, CCIndexPath&);
    void ccTableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    void ccTableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, CCTableViewCell*, CCTableView*);
    void cellForRowAtIndexPath(CCIndexPath&, CCTableView*);
    void cellHeightForRowAtIndexPath(CCIndexPath&, CCTableView*);
    BoomListView* create(cocos2d::CCArray*, float, float, int, BoomListType);
    void didSelectRowAtIndexPath(CCIndexPath&, CCTableView*);
    void draw();
    int getListCell(char const*);
    bool init(cocos2d::CCArray*, float, float, int, BoomListType);
    void loadCell(CCTableViewCell*, int);
    void numberOfRowsInSection(unsigned int, CCTableView*);
    void numberOfSectionsInCCTableView(CCTableView*);
    void setupList();
    ~BoomListView();
};

#endif // HIEUDASH_BOOMLISTVIEW_H_
