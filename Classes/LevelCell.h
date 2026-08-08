
#ifndef LEVELCELL_H_
#define LEVELCELL_H_

#include "cocos2d.h"

class LevelCell : public cocos2d::CCNode {
public:
    LevelCell(char const*, float, float);
    LevelCell(char const*, float, float);

    virtual ~LevelCell();

    void updateToggle();
    void loadFromLevel(GJGameLevel*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void updateCellMode(int);
    void loadLocalLevelCell();
    void loadCustomLevelCell();
    void draw() override;
    bool init() override;
    void create(float, float);
    void onClick(cocos2d::CCObject*);
    void onToggle(cocos2d::CCObject*);

};

#endif // LEVELCELL_H_
