// ============================================================
// CCLens3D.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCLENS3D_H_
#define COCOS2D_CCLENS3D_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLens3D {
public:
    virtual ~CCLens3D();
    virtual ~CCLens3D();
    virtual ~CCLens3D();

    void setPosition(cocos2d::CCPoint const&);
    void copyWithZone(cocos2d::CCZone*);
    void initWithDuration(float, cocos2d::CCSize const&, cocos2d::CCPoint const&, float);
    void create(float, cocos2d::CCSize const&, cocos2d::CCPoint const&, float);
    void update(float);

protected:
    cocos2d::CCPoint m_position;

};

} // namespace cocos2d

#endif // COCOS2D_CCLENS3D_H_
