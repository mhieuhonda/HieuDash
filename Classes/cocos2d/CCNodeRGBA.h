// ============================================================
// CCNodeRGBA.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCNODERGBA_H_
#define COCOS2D_CCNODERGBA_H_

#include "cocos2d.h"

namespace cocos2d {

class CCNodeRGBA {
public:
    CCNodeRGBA();
    CCNodeRGBA();

    virtual ~CCNodeRGBA();
    virtual ~CCNodeRGBA();
    virtual ~CCNodeRGBA();

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
    void create();
    void getColor();
    void setColor(cocos2d::_ccColor3B const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCNODERGBA_H_
