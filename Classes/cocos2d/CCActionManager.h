// ============================================================
// CCActionManager.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCACTIONMANAGER_H_
#define COCOS2D_CCACTIONMANAGER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCActionManager {
public:
    CCActionManager();
    CCActionManager();

    virtual ~CCActionManager();
    virtual ~CCActionManager();
    virtual ~CCActionManager();

    void pauseTarget(cocos2d::CCObject*);
    void removeAction(cocos2d::CCAction*);
    void resumeTarget(cocos2d::CCObject*);
    void resumeTargets(cocos2d::CCSet*);
    void getActionByTag(unsigned int, cocos2d::CCObject*);
    void removeAllActions();
    void deleteHashElement(cocos2d::_hashElement*);
    void removeActionByTag(unsigned int, cocos2d::CCObject*);
    void removeActionAtIndex(unsigned int, cocos2d::_hashElement*);
    void pauseAllRunningActions();
    void actionAllocWithHashElement(cocos2d::_hashElement*);
    void removeAllActionsFromTarget(cocos2d::CCObject*);
    void numberOfRunningActionsInTarget(cocos2d::CCObject*);
    void update(float);
    void addAction(cocos2d::CCAction*, cocos2d::CCNode*, bool);

};

} // namespace cocos2d

#endif // COCOS2D_CCACTIONMANAGER_H_
