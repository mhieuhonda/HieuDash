// ============================================================
// CCObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCOBJECT_H_
#define COCOS2D_CCOBJECT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCObject {
public:
    CCObject();
    CCObject();

    virtual ~CCObject();
    virtual ~CCObject();
    virtual ~CCObject();

    void autorelease();
    void acceptVisitor(cocos2d::CCDataVisitor&);
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void copy();
    void retain();
    void setTag(int);
    void update(float);
    void isEqual(cocos2d::CCObject const*);
    void release();
    void canEncode();
    void retainCount()) const;
    void isSingleReference()) const;
    void getTag()) const;

protected:
    int m_tag;

};

} // namespace cocos2d

#endif // COCOS2D_CCOBJECT_H_
