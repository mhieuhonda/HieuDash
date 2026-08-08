// ============================================================
// CCPoolManager.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPOOLMANAGER_H_
#define COCOS2D_CCPOOLMANAGER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCPoolManager {
public:
    CCPoolManager();
    CCPoolManager();

    virtual ~CCPoolManager();
    virtual ~CCPoolManager();

    void removeObject(cocos2d::CCObject*);
    void purgePoolManager();
    void getCurReleasePool();
    void sharedPoolManager();
    void pop();
    void push();
    void finalize();
    void addObject(cocos2d::CCObject*);

};

} // namespace cocos2d

#endif // COCOS2D_CCPOOLMANAGER_H_
