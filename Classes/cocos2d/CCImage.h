// ============================================================
// CCImage.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCIMAGE_H_
#define COCOS2D_CCIMAGE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCImage {
public:
    CCImage();
    CCImage();

    virtual ~CCImage();
    virtual ~CCImage();
    virtual ~CCImage();

    void saveToFile(char const*, bool);
    void initWithString(char const*, int, int, cocos2d::CCImage::ETextAlign, char const*, int);
    void _saveImageToJPG(char const*);
    void _saveImageToPNG(char const*, bool);
    void _initWithJpgData(void*, int);
    void _initWithPngData(void*, int);
    void _initWithRawData(void*, int, int, int, int, bool);
    void _initWithTiffData(void*, int);
    void initWithImageData(void*, int, cocos2d::CCImage::EImageFormat, int, int, int, int);
    void initWithImageFile(char const*, cocos2d::CCImage::EImageFormat);
    void initWithStringShadowStroke(char const*, int, int, cocos2d::CCImage::ETextAlign, char const*, int, float, float, float, bool, float, float, float, float, bool, float, float, float, float);
    void initWithImageFileThreadSafe(char const*, cocos2d::CCImage::EImageFormat);

};

} // namespace cocos2d

#endif // COCOS2D_CCIMAGE_H_
