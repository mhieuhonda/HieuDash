// ============================================================
// CCSet.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSET_H_
#define COCOS2D_CCSET_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSet {
public:
    CCSet(cocos2d::CCSet const&);
    CCSet();
    CCSet(cocos2d::CCSet const&);
    CCSet();

    virtual ~CCSet();
    virtual ~CCSet();
    virtual ~CCSet();

    void mutableCopy();
    void removeObject(cocos2d::CCObject*);
    void acceptVisitor(cocos2d::CCDataVisitor&);
    void containsObject(cocos2d::CCObject*);
    void removeAllObjects();
    void end();
    void copy();
    void begin();
    void count();
    void create();
    void addObject(cocos2d::CCObject*);
    void anyObject();

};

} // namespace cocos2d

#endif // COCOS2D_CCSET_H_
