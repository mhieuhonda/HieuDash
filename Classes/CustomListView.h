#ifndef HIEUDASH_CUSTOMLISTVIEW_H_
#define HIEUDASH_CUSTOMLISTVIEW_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CustomListView : public cocos2d::CCLayer {
public:
    CustomListView();
    static CustomListView* create(cocos2d::CCArray*, float, float, int, BoomListType);
    int getListCell(char const*);
    void loadCell(CCTableViewCell*, int);
    void setupList();
    ~CustomListView();
};

#endif // HIEUDASH_CUSTOMLISTVIEW_H_
