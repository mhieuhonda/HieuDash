// ============================================================
// CCTwirl.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTWIRL_H_
#define COCOS2D_CCTWIRL_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTwirl {
public:
    virtual ~CCTwirl();
    virtual ~CCTwirl();
    virtual ~CCTwirl();

    void setPosition(cocos2d::CCPoint const&);
    void copyWithZone(cocos2d::CCZone*);
    void initWithDuration(float, cocos2d::CCSize const&, cocos2d::CCPoint, unsigned int, float);
    void create(float, cocos2d::CCSize const&, cocos2d::CCPoint, unsigned int, float);
    void update(float);

protected:
    cocos2d::CCPoint m_position;

};

} // namespace cocos2d

#endif // COCOS2D_CCTWIRL_H_
