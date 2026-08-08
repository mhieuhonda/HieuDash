// ============================================================
// CCArray.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCARRAY_H_
#define COCOS2D_CCARRAY_H_

#include "cocos2d.h"

namespace cocos2d {

class CCArray {
public:
    CCArray(unsigned int);
    CCArray();
    CCArray(unsigned int);
    CCArray();

    virtual ~CCArray();
    virtual ~CCArray();
    virtual ~CCArray();

    void lastObject();
    void addObjectNew(cocos2d::CCObject*);
    void copyWithZone(cocos2d::CCZone*);
    void insertObject(cocos2d::CCObject*, unsigned int);
    void randomObject();
    void removeObject(cocos2d::CCObject*, bool);
    void acceptVisitor(cocos2d::CCDataVisitor&);
    void initWithArray(cocos2d::CCArray*);
    void objectAtIndex(unsigned int);
    void stringAtIndex(unsigned int);
    void exchangeObject(cocos2d::CCObject*, cocos2d::CCObject*);
    void initWithObject(cocos2d::CCObject*);
    void isEqualToArray(cocos2d::CCArray*);
    void reverseObjects();
    void createWithArray(cocos2d::CCArray*);
    void initWithObjects(cocos2d::CCObject*, ...);
    void createWithObject(cocos2d::CCObject*);
    void fastRemoveObject(cocos2d::CCObject*);
    void initWithCapacity(unsigned int);
    void removeAllObjects();
    void removeLastObject(bool);
    void createWithCapacity(unsigned int);
    void recreateNewIndexes();
    void addObjectsFromArray(cocos2d::CCArray*);
    void removeObjectAtIndex(unsigned int, bool);
    void removeObjectsInArray(cocos2d::CCArray*);
    void replaceObjectAtIndex(unsigned int, cocos2d::CCObject*, bool);
    void exchangeObjectAtIndex(unsigned int, unsigned int);
    void reduceMemoryFootprint();
    void fastRemoveObjectAtIndex(unsigned int);
    void createWithContentsOfFile(char const*);
    void removeObjectAtIndexChild(unsigned int, bool);
    void fastRemoveObjectAtIndexNew(unsigned int);
    void fastRemoveObjectAtIndexChild(unsigned int);
    void createWithContentsOfFileThreadSafe(char const*);
    void init();
    void create(cocos2d::CCObject*, ...);
    void create();
    void addObject(cocos2d::CCObject*);
    void indexOfObject(cocos2d::CCObject*)) const;
    void containsObject(cocos2d::CCObject*)) const;
    void count()) const;
    void capacity()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCARRAY_H_
