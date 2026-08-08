// ============================================================
// CCDictionary.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCDICTIONARY_H_
#define COCOS2D_CCDICTIONARY_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCDictionary {
public:
    CCDictionary();
    CCDictionary();

    virtual ~CCDictionary();
    virtual ~CCDictionary();
    virtual ~CCDictionary();

    void charForKey(std::string const&);
    void getFirstKey();
    void valueForKey(std::string const&);
    void valueForKey(long);
    void writeToFile(char const*);
    void copyWithZone(cocos2d::CCZone*);
    void objectForKey(std::string const&);
    void objectForKey(long);
    void randomObject();
    void acceptVisitor(cocos2d::CCDataVisitor&);
    void setObjectUnSafe(cocos2d::CCObject*, std::string const&);
    void setObjectUnSafe(cocos2d::CCObject*, long);
    void allKeysForObject(cocos2d::CCObject*);
    void removeAllObjects();
    void removeObjectForKey(std::string const&);
    void removeObjectForKey(long);
    void createWithDictionary(cocos2d::CCDictionary*);
    void removeObjectsForKeys(cocos2d::CCArray*);
    void removeObjectForElememt(cocos2d::CCDictElement*);
    void createWithContentsOfFile(char const*);
    void createWithContentsOfFileThreadSafe(char const*);
    void count();
    void create();
    void allKeys();
    void setObject(cocos2d::CCObject*, std::string const&);
    void setObject(cocos2d::CCObject*, long);

};

} // namespace cocos2d

#endif // COCOS2D_CCDICTIONARY_H_
