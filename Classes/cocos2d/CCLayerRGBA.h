// ============================================================
// CCLayerRGBA.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCLAYERRGBA_H_
#define COCOS2D_CCLAYERRGBA_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLayerRGBA {
public:
    CCLayerRGBA();
    CCLayerRGBA();

    virtual ~CCLayerRGBA();
    virtual ~CCLayerRGBA();
    virtual ~CCLayerRGBA();

    void getOpacity();
    void setOpacity(unsigned char);
    void getDisplayedColor();
    void isOpacityModifyRGB();
    void getDisplayedOpacity();
    void setOpacityModifyRGB(bool);
    void updateDisplayedColor(cocos2d::_ccColor3B const&);
    void isCascadeColorEnabled();
    void setCascadeColorEnabled(bool);
    void updateDisplayedOpacity(unsigned char);
    void isCascadeOpacityEnabled();
    void setCascadeOpacityEnabled(bool);
    void init();
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);

protected:
    bool m_cascadeColorEnabled;
    bool m_cascadeOpacityEnabled;
    cocos2d::_ccColor3B m_color;
    cocos2d::_ccColor3B m_displayedColor;

};

} // namespace cocos2d

#endif // COCOS2D_CCLAYERRGBA_H_
