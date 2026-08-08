// ============================================================
// CCSpriteFrame.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSPRITEFRAME_H_
#define COCOS2D_CCSPRITEFRAME_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSpriteFrame {
public:
    virtual ~CCSpriteFrame();
    virtual ~CCSpriteFrame();
    virtual ~CCSpriteFrame();

    void getTexture();
    void setTexture(cocos2d::CCTexture2D*);
    void copyWithZone(cocos2d::CCZone*);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&);
    void setRectInPixels(cocos2d::CCRect const&);
    void createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&);
    void getOffsetInPixels();
    void setOffsetInPixels(cocos2d::CCPoint const&);
    void initWithTextureFilename(char const*, cocos2d::CCRect const&);
    void initWithTextureFilename(char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&);
    void create(char const*, cocos2d::CCRect const&);
    void create(char const*, cocos2d::CCRect const&, bool, cocos2d::CCPoint const&, cocos2d::CCSize const&);
    void setRect(cocos2d::CCRect const&);
    void getOffset();
    void setOffset(cocos2d::CCPoint const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCSPRITEFRAME_H_
