
#ifndef LEVELLISTCELL_H_
#define LEVELLISTCELL_H_

#include "cocos2d.h"

class LevelListCell {
public:
    LevelListCell(char const*, float, float);
    LevelListCell(char const*, float, float);

    virtual ~LevelListCell();

    void onListInfo(cocos2d::CCObject*);
    void loadFromList(GJLevelList*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void draw();
    void init();
    void create(float, float);
    void onClick(cocos2d::CCObject*);

};

#endif // LEVELLISTCELL_H_
