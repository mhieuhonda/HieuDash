// ============================================================
// CCSprite.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSPRITE_H_
#define COCOS2D_CCSPRITE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSprite {
public:
    CCSprite();
    CCSprite();

    virtual ~CCSprite();
    virtual ~CCSprite();
    virtual ~CCSprite();

    void getTexture();
    void setOpacity(unsigned char);
    void setTexture(cocos2d::CCTexture2D*);
    void setVertexZ(float);
    void setVisible(bool);
    void removeChild(cocos2d::CCNode*, bool);
    void setPosition(cocos2d::CCPoint const&);
    void setRotation(float);
    void updateColor();
    void displayFrame();
    void getBatchNode();
    void getBlendFunc();
    void initWithFile(char const*);
    void initWithFile(char const*, cocos2d::CCRect const&);
    void reorderChild(cocos2d::CCNode*, int);
    void setBatchNode(cocos2d::CCSpriteBatchNode*);
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void setRotationX(float);
    void setRotationY(float);
    void setChildColor(cocos2d::_ccColor3B const&);
    void setVertexRect(cocos2d::CCRect const&);
    void setAnchorPoint(cocos2d::CCPoint const&);
    void setTextureRect(cocos2d::CCRect const&);
    void setTextureRect(cocos2d::CCRect const&, bool, cocos2d::CCSize const&);
    void initWithTexture(cocos2d::CCTexture2D*);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
    void setChildOpacity(unsigned char);
    void setDisplayFrame(cocos2d::CCSpriteFrame*);
    void sortAllChildren();
    void updateBlendFunc();
    void updateTransform();
    void isFrameDisplayed(cocos2d::CCSpriteFrame*);
    void setTextureCoords(cocos2d::CCRect const&);
    void createWithTexture(cocos2d::CCTexture2D*);
    void createWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&);
    void isOpacityModifyRGB();
    void refreshTextureRect();
    void initWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void setDirtyRecursively(bool);
    void setOpacityModifyRGB(bool);
    void updateDisplayedColor(cocos2d::_ccColor3B const&);
    void createWithSpriteFrame(cocos2d::CCSpriteFrame*);
    void updateDisplayedOpacity(unsigned char);
    void initWithSpriteFrameName(char const*);
    void createWithSpriteFrameName(char const*);
    void ignoreAnchorPointForPosition(bool);
    void removeAllChildrenWithCleanup(bool);
    void setReorderChildDirtyRecursively();
    void setDisplayFrameWithAnimationName(char const*, int);
    void draw();
    void init();
    void create(char const*);
    void create(char const*, cocos2d::CCRect const&);
    void create();
    void isDirty();
    void isFlipX();
    void isFlipY();
    void addChild(cocos2d::CCNode*);
    void addChild(cocos2d::CCNode*, int);
    void addChild(cocos2d::CCNode*, int, int);
    void setColor(cocos2d::_ccColor3B const&);
    void setDirty(bool);
    void setFlipX(bool);
    void setFlipY(bool);
    void setScale(float);
    void setSkewX(float);
    void setSkewY(float);
    void setScaleX(float);
    void setScaleY(float);

};

} // namespace cocos2d

#endif // COCOS2D_CCSPRITE_H_
