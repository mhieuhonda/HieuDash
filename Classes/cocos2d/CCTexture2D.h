// ============================================================
// CCTexture2D.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTEXTURE2D_H_
#define COCOS2D_CCTEXTURE2D_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCTexture2D {
public:
    CCTexture2D();
    CCTexture2D();

    virtual ~CCTexture2D();
    virtual ~CCTexture2D();
    virtual ~CCTexture2D();

    void drawInRect(cocos2d::CCRect const&);
    void hasMipmaps();
    void description();
    void drawAtPoint(cocos2d::CCPoint const&);
    void releaseData(void*);
    void initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int, unsigned int, cocos2d::CCSize const&);
    void getPixelsHigh();
    void getPixelsWide();
    void initWithImage(cocos2d::CCImage*);
    void generateMipmap();
    void getContentSize();
    void getPixelFormat();
    void initWithString(char const*, cocos2d::_ccFontDefinition*);
    void initWithString(char const*, char const*, float);
    void initWithString(char const*, char const*, float, cocos2d::CCSize const&, cocos2d::CCTextAlignment, cocos2d::CCVerticalTextAlignment);
    void initWithETCFile(char const*);
    void initWithPVRFile(char const*);
    void stringForFormat();
    void getShaderProgram();
    void releaseGLTexture();
    void setShaderProgram(cocos2d::CCGLProgram*);
    void setTexParameters(cocos2d::_ccTexParams*);
    void bitsPerPixelForFormat(cocos2d::CCTexture2DPixelFormat);
    void bitsPerPixelForFormat();
    void hasPremultipliedAlpha();
    void setAliasTexParameters();
    void getContentSizeInPixels();
    void defaultAlphaPixelFormat();
    void setAntiAliasTexParameters();
    void setDefaultAlphaPixelFormat(cocos2d::CCTexture2DPixelFormat);
    void PVRImagesHavePremultipliedAlpha(bool);
    void initPremultipliedATextureWithImage(cocos2d::CCImage*, unsigned int, unsigned int);
    void getMaxS();
    void getMaxT();
    void getName();
    void setMaxS(float);
    void setMaxT(float);
    void keepData(void*, unsigned int);

protected:
    std::string m_name;

};

} // namespace cocos2d

#endif // COCOS2D_CCTEXTURE2D_H_
