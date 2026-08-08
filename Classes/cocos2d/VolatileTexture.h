// ============================================================
// VolatileTexture.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_VOLATILETEXTURE_H_
#define COCOS2D_VOLATILETEXTURE_H_

#include "cocos2d.h"

namespace cocos2d {

class VolatileTexture {
public:
    VolatileTexture(cocos2d::CCTexture2D*);
    VolatileTexture(cocos2d::CCTexture2D*);

    virtual ~VolatileTexture();
    virtual ~VolatileTexture();

    void addCCImage(cocos2d::CCTexture2D*, cocos2d::CCImage*);
    void removeTexture(cocos2d::CCTexture2D*);
    void addDataTexture(cocos2d::CCTexture2D*, void*, cocos2d::CCTexture2DPixelFormat, cocos2d::CCSize const&);
    void addImageTexture(cocos2d::CCTexture2D*, char const*, cocos2d::CCImage::EImageFormat);
    void addStringTexture(cocos2d::CCTexture2D*, char const*, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment, char const*, float);
    void setTexParameters(cocos2d::CCTexture2D*, cocos2d::_ccTexParams*);
    void reloadAllTextures();
    void findVolotileTexture(cocos2d::CCTexture2D*);

};

} // namespace cocos2d

#endif // COCOS2D_VOLATILETEXTURE_H_
