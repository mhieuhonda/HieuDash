// ============================================================
// CCAtlasNode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCATLASNODE_H_
#define COCOS2D_CCATLASNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCAtlasNode {
public:
    CCAtlasNode();
    CCAtlasNode();

    virtual ~CCAtlasNode();
    virtual ~CCAtlasNode();
    virtual ~CCAtlasNode();

    void getTexture();
    void setOpacity(unsigned char);
    void setTexture(cocos2d::CCTexture2D*);
    void getBlendFunc();
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void getQuadsToDraw();
    void setQuadsToDraw(unsigned int);
    void getTextureAtlas();
    void initWithTexture(cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int);
    void setTextureAtlas(cocos2d::CCTextureAtlas*);
    void updateBlendFunc();
    void initWithTileFile(char const*, unsigned int, unsigned int, unsigned int);
    void calculateMaxItems();
    void updateAtlasValues();
    void isOpacityModifyRGB();
    void setOpacityModifyRGB(bool);
    void updateOpacityModifyRGB();
    void setIgnoreContentScaleFactor(bool);
    void draw();
    void create(char const*, unsigned int, unsigned int, unsigned int);
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCATLASNODE_H_
