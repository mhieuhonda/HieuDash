
#ifndef GJACTIONMANAGER_H_
#define GJACTIONMANAGER_H_

#include "cocos2d.h"

class GJActionManager {
public:
    virtual ~GJActionManager();

    void getInternalAction(int);
    void runInternalAction(cocos2d::CCAction*, cocos2d::CCNode*);
    void stopInternalAction(int);
    void updateInternalActions(float, bool);
    void stopAllInternalActions();
    void init();
    void create();

};

#endif // GJACTIONMANAGER_H_
