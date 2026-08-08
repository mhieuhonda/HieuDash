// ============================================================
// CustomListView.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CUSTOMLISTVIEW_H_
#define CUSTOMLISTVIEW_H_

#include "cocos2d.h"

class CustomListView : public cocos2d::CCLayer {
public:
    virtual ~CustomListView();
    virtual ~CustomListView();
    virtual ~CustomListView();

    void getListCell(char const*);
    void getCellHeight(BoomListType);
    void create(cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float);
    void loadCell(TableViewCell*, int);
    void reloadAll();
    void setupList(float);

};

#endif // CUSTOMLISTVIEW_H_
