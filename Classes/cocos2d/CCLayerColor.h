// ============================================================
// CCLayerColor.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCLAYERCOLOR_H_
#define COCOS2D_CCLAYERCOLOR_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLayerColor {
public:
    CCLayerColor();
    CCLayerColor();

    virtual ~CCLayerColor();
    virtual ~CCLayerColor();
    virtual ~CCLayerColor();

    void setOpacity(unsigned char);
    void changeWidth(float);
    void setVertices(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint);
    void updateColor();
    void changeHeight(float);
    void getBlendFunc();
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void addToVertices(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint);
    void initWithColor(cocos2d::_ccColor4B const&);
    void initWithColor(cocos2d::_ccColor4B const&, float, float);
    void setContentSize(cocos2d::CCSize const&);
    void changeWidthAndHeight(float, float);
    void draw();
    void init();
    void create(cocos2d::_ccColor4B const&);
    void create(cocos2d::_ccColor4B const&, float, float);
    void create();
    void setColor(cocos2d::_ccColor3B const&);

protected:
    cocos2d::_ccColor3B m_color;

};

} // namespace cocos2d

#endif // COCOS2D_CCLAYERCOLOR_H_
