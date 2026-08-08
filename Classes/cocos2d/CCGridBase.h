// ============================================================
// CCGridBase.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCGRIDBASE_H_
#define COCOS2D_CCGRIDBASE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCGridBase {
public:
    virtual ~CCGridBase();
    virtual ~CCGridBase();
    virtual ~CCGridBase();

    void beforeDraw();
    void initWithSize(cocos2d::CCSize const&);
    void initWithSize(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool);
    void set2DProjection();
    void setTextureFlipped(bool);
    void calculateVertexPoints();
    void blit();
    void reuse();
    void create(cocos2d::CCSize const&);
    void create(cocos2d::CCSize const&, cocos2d::CCTexture2D*, bool);
    void afterDraw(cocos2d::CCNode*);
    void setActive(bool);

};

} // namespace cocos2d

#endif // COCOS2D_CCGRIDBASE_H_
