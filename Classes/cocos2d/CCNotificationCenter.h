// ============================================================
// CCNotificationCenter.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCNOTIFICATIONCENTER_H_
#define COCOS2D_CCNOTIFICATIONCENTER_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCNotificationCenter {
public:
    CCNotificationCenter();
    CCNotificationCenter();

    virtual ~CCNotificationCenter();
    virtual ~CCNotificationCenter();
    virtual ~CCNotificationCenter();

    void addObserver(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, cocos2d::CCObject*);
    void removeObserver(cocos2d::CCObject*, char const*);
    void observerExisted(cocos2d::CCObject*, char const*);
    void postNotification(char const*);
    void postNotification(char const*, cocos2d::CCObject*);
    void removeAllObservers(cocos2d::CCObject*);
    void registerScriptObserver(cocos2d::CCObject*, int, char const*);
    void purgeNotificationCenter();
    void getObserverHandlerByName(char const*);
    void sharedNotificationCenter();
    void unregisterScriptObserver(cocos2d::CCObject*, char const*);

protected:
    std::string m_observerHandlerByName;

};

} // namespace cocos2d

#endif // COCOS2D_CCNOTIFICATIONCENTER_H_
