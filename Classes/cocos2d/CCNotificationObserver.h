// ============================================================
// CCNotificationObserver.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCNOTIFICATIONOBSERVER_H_
#define COCOS2D_CCNOTIFICATIONOBSERVER_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCNotificationObserver {
public:
    CCNotificationObserver(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, cocos2d::CCObject*);
    CCNotificationObserver(cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, cocos2d::CCObject*);

    virtual ~CCNotificationObserver();
    virtual ~CCNotificationObserver();
    virtual ~CCNotificationObserver();

    void getHandler();
    void setHandler(int);
    void getSelector();
    void performSelector(cocos2d::CCObject*);
    void getName();
    void getObject();
    void getTarget();

protected:
    std::string m_name;

};

} // namespace cocos2d

#endif // COCOS2D_CCNOTIFICATIONOBSERVER_H_
