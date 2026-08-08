// ============================================================
// CCRenderTexture.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCRENDERTEXTURE_H_
#define COCOS2D_CCRENDERTEXTURE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCRenderTexture {
public:
    CCRenderTexture();
    CCRenderTexture();

    virtual ~CCRenderTexture();
    virtual ~CCRenderTexture();
    virtual ~CCRenderTexture();

    void clearDepth(float);
    void newCCImage(bool);
    void saveToFile(char const*);
    void saveToFile(char const*, cocos2d::eImageFormat);
    void setAutoDraw(bool);
    void clearStencil(int);
    void setClearColor(cocos2d::_ccColor4F const&);
    void setClearDepth(float);
    void setClearFlags(unsigned int);
    void beginWithClear(float, float, float, float);
    void beginWithClear(float, float, float, float, float);
    void beginWithClear(float, float, float, float, float, int);
    void beginWithClear(float, float, float, float, float, int, unsigned int);
    void setClearStencil(float);
    void listenToBackground(cocos2d::CCObject*);
    void listenToForeground(cocos2d::CCObject*);
    void updateInternalScale(float, float);
    void initWithWidthAndHeight(int, int, cocos2d::CCTexture2DPixelFormat);
    void initWithWidthAndHeight(int, int, cocos2d::CCTexture2DPixelFormat, unsigned int);
    void end();
    void draw();
    void begin();
    void clear(float, float, float, float);
    void visit();
    void create(int, int);
    void create(int, int, cocos2d::CCTexture2DPixelFormat);
    void create(int, int, cocos2d::CCTexture2DPixelFormat, unsigned int);
    void getSprite();
    void setSprite(cocos2d::CCSprite*);
    void isAutoDraw()) const;
    void getClearColor()) const;
    void getClearDepth()) const;
    void getClearFlags()) const;
    void getClearStencil()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCRENDERTEXTURE_H_
