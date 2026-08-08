
#ifndef BOOMLISTVIEW_H_
#define BOOMLISTVIEW_H_

#include "cocos2d.h"

class BoomListView : public cocos2d::CCLayer {
public:
    virtual ~BoomListView();

    void getListCell(char const*);
    void addObjectToList(cocos2d::CCNode*);
    void cellForRowAtIndexPath(CCIndexPath&, TableView*);
    void numberOfRowsInSection(unsigned int, TableView*);
    void didSelectRowAtIndexPath(CCIndexPath&, TableView*);
    void cellHeightForRowAtIndexPath(CCIndexPath&, TableView*);
    void numberOfSectionsInTableView(TableView*);
    void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&);
    void draw() override;
    void init(cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float) override;
    void create(cocos2d::CCArray*, TableViewCellDelegate*, float, float, int, BoomListType, float);
    void loadCell(TableViewCell*, int);
    void lockList(bool);
    void setupList(float);

};

#endif // BOOMLISTVIEW_H_
