// ============================================================
// CCControlColourPicker.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLCOLOURPICKER_H_
#define COCOS2D_EXTENSION_CCCONTROLCOLOURPICKER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlColourPicker {
public:
    virtual ~CCControlColourPicker();
    virtual ~CCControlColourPicker();
    virtual ~CCControlColourPicker();

    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void colourPicker();
    void setColorValue(cocos2d::_ccColor3B const&);
    void updateControlPicker();
    void hueSliderValueChanged(cocos2d::CCObject*, unsigned int);
    void colourSliderValueChanged(cocos2d::CCObject*, unsigned int);
    void updateHueAndControlPicker();
    void init();
    void create();

protected:
    cocos2d::_ccColor3B m_colorValue;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLCOLOURPICKER_H_
