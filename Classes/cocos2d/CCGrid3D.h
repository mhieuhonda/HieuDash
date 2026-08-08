// ============================================================
// CCGrid3D.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCGRID3D_H_
#define COCOS2D_CCGRID3D_H_

#include "cocos2d.h"

namespace cocos2d {

class CCGrid3D {
public:
    CCGrid3D();
    CCGrid3D();

    virtual ~CCGrid3D();
    virtual ~CCGrid3D();
    virtual ~CCGrid3D();

    void originalVertex(cocos2d::CCPoint const&);
    void calculateVertexPoints();
    void blit();
    void reuse();
    void create(cocos2d::CCSize const&);
    void create(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool);
    void vertex(cocos2d::CCPoint const&);
    void setVertex(cocos2d::CCPoint const&, cocos2d::_ccVertex3F const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCGRID3D_H_
