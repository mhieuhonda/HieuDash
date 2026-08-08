// ============================================================
// CCScheduler.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCSCHEDULER_H_
#define COCOS2D_CCSCHEDULER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCScheduler {
public:
    CCScheduler();
    CCScheduler();

    virtual ~CCScheduler();
    virtual ~CCScheduler();
    virtual ~CCScheduler();

    void priorityIn(cocos2d::_listEntry**, cocos2d::CCObject*, int, bool);
    void pauseTarget(cocos2d::CCObject*);
    void resumeTarget(cocos2d::CCObject*);
    void resumeTargets(cocos2d::CCSet*);
    void unscheduleAll();
    void isTargetPaused(cocos2d::CCObject*);
    void pauseAllTargets();
    void scheduleSelector(void (cocos2d::CCObject::*)(float), cocos2d::CCObject*, float, bool);
    void scheduleSelector(void (cocos2d::CCObject::*)(float), cocos2d::CCObject*, float, unsigned int, float, bool);
    void removeHashElement(cocos2d::_hashSelectorEntry*);
    void scheduleScriptFunc(unsigned int, float, bool);
    void unscheduleSelector(void (cocos2d::CCObject::*)(float), cocos2d::CCObject*);
    void removeUpdateFromHash(cocos2d::_listEntry*);
    void unscheduleScriptEntry(unsigned int);
    void unscheduleAllForTarget(cocos2d::CCObject*);
    void scheduleUpdateForTarget(cocos2d::CCObject*, int, bool);
    void unscheduleUpdateForTarget(cocos2d::CCObject const*);
    void unscheduleAllWithMinPriority(int);
    void pauseAllTargetsWithMinPriority(int);
    void update(float);
    void appendIn(cocos2d::_listEntry**, cocos2d::CCObject*, bool);

};

} // namespace cocos2d

#endif // COCOS2D_CCSCHEDULER_H_
