// ============================================================
// CCLayerGradient.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCLAYERGRADIENT_H_
#define COCOS2D_CCLAYERGRADIENT_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLayerGradient {
public:
    virtual ~CCLayerGradient();
    virtual ~CCLayerGradient();
    virtual ~CCLayerGradient();

    void getEndColor();
    void setEndColor(cocos2d::_ccColor3B const&);
    void updateColor();
    void getEndOpacity();
    void getStartColor();
    void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&);
    void initWithColor(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&);
    void setEndOpacity(unsigned char);
    void setStartColor(cocos2d::_ccColor3B const&);
    void getStartOpacity();
    void setStartOpacity(unsigned char);
    void isCompressedInterpolation();
    void setCompressedInterpolation(bool);
    void init();
    void visit();
    void create(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&);
    void create(cocos2d::_ccColor4B const&, cocos2d::_ccColor4B const&, cocos2d::CCPoint const&);
    void create();
    void getVector();
    void setValues(cocos2d::_ccColor3B const&, unsigned char, cocos2d::_ccColor3B const&, unsigned char, cocos2d::CCPoint const&);
    void setVector(cocos2d::CCPoint const&);

protected:
    cocos2d::_ccColor3B m_endColor;
    cocos2d::_ccColor3B m_startColor;

};

} // namespace cocos2d

#endif // COCOS2D_CCLAYERGRADIENT_H_
