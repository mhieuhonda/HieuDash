
#ifndef LISTCELL_H_
#define LISTCELL_H_

#include "cocos2d.h"

class ListCell : public cocos2d::CCNode {
public:
    ListCell(char const*, float, float);
    ListCell(char const*, float, float);

    virtual ~ListCell();

    void updateBGColor(int);
    void loadFromObject(cocos2d::CCObject*, int, int, int);
    void draw();
    bool init();

};

#endif // LISTCELL_H_
