// ============================================================
// CCTiledGrid3D.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTILEDGRID3D_H_
#define COCOS2D_CCTILEDGRID3D_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTiledGrid3D {
public:
    CCTiledGrid3D();
    CCTiledGrid3D();

    virtual ~CCTiledGrid3D();
    virtual ~CCTiledGrid3D();
    virtual ~CCTiledGrid3D();

    void originalTile(cocos2d::CCPoint const&);
    void calculateVertexPoints();
    void blit();
    void tile(cocos2d::CCPoint const&);
    void reuse();
    void create(cocos2d::CCSize const&);
    void create(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool);
    void setTile(cocos2d::CCPoint const&, cocos2d::_ccQuad3 const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCTILEDGRID3D_H_
