// ============================================================
// CCScale9Sprite.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCSCALE9SPRITE_H_
#define COCOS2D_EXTENSION_CCSCALE9SPRITE_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCScale9Sprite {
public:
    CCScale9Sprite();
    CCScale9Sprite();

    virtual ~CCScale9Sprite();
    virtual ~CCScale9Sprite();
    virtual ~CCScale9Sprite();

    void getOpacity();
    void setOpacity(unsigned char);
    void getInsetTop();
    void setInsetTop(float);
    void getCapInsets();
    void getInsetLeft();
    void initWithFile(cocos2d::CCRect, char const*);
    void initWithFile(char const*);
    void initWithFile(char const*, cocos2d::CCRect);
    void initWithFile(char const*, cocos2d::CCRect, cocos2d::CCRect);
    void setCapInsets(cocos2d::CCRect);
    void setInsetLeft(float);
    void getInsetRight();
    void setInsetRight(float);
    void getInsetBottom();
    void setContentSize(cocos2d::CCSize const&);
    void setInsetBottom(float);
    void setSpriteFrame(cocos2d::CCSpriteFrame*);
    void updateCapInset();
    void updatePositions();
    void getPreferredSize();
    void setBlendAdditive(bool);
    void setPreferredSize(cocos2d::CCSize);
    void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, cocos2d::CCRect);
    void initWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect);
    void isOpacityModifyRGB();
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*, cocos2d::CCRect);
    void setOpacityModifyRGB(bool);
    void updateWithBatchNode(cocos2d::CCSpriteBatchNode*, cocos2d::CCRect, bool, cocos2d::CCRect);
    void updateDisplayedColor(cocos2d::_ccColor3B const&);
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*, cocos2d::CCRect);
    void updateDisplayedOpacity(unsigned char);
    void initWithSpriteFrameName(char const*);
    void initWithSpriteFrameName(char const*, cocos2d::CCRect);
    void createWithSpriteFrameName(char const*);
    void createWithSpriteFrameName(char const*, cocos2d::CCRect);
    void resizableSpriteWithCapInsets(cocos2d::CCRect);
    void init();
    void visit();
    void create(cocos2d::CCRect, char const*);
    void create(char const*);
    void create(char const*, cocos2d::CCRect);
    void create(char const*, cocos2d::CCRect, cocos2d::CCRect);
    void create();
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCSCALE9SPRITE_H_
