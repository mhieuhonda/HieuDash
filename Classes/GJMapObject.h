
#ifndef GJMAPOBJECT_H_
#define GJMAPOBJECT_H_

#include "cocos2d.h"

class GJMapObject {
public:
    virtual ~GJMapObject();

    void playerJump();
    void monsterIdle();
    void monsterJump();
    void moveMonster(cocos2d::CCPoint, float);
    void moveMonster();
    void moveFinished();
    void touchMonster();
    void updateShadow(float, float, cocos2d::CCPoint);
    GJMapObject* createMonster(int);
    void setObjectOrigin(cocos2d::CCPoint, float);
    void startPlayerJumpLoop();
    void startMonsterJumpLoop();
    void init(cocos2d::CCNode*);
    void create(cocos2d::CCNode*);

};

#endif // GJMAPOBJECT_H_
