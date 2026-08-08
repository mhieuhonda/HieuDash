// ============================================================
// CCDrawNode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCDRAWNODE_H_
#define COCOS2D_CCDRAWNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCDrawNode {
public:
    CCDrawNode();
    CCDrawNode();

    virtual ~CCDrawNode();
    virtual ~CCDrawNode();
    virtual ~CCDrawNode();

    void drawCircle(cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, unsigned int);
    void drawPolygon(cocos2d::CCPoint*, unsigned int, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, cocos2d::BorderAlignment);
    void drawSegment(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&);
    void setBlendFunc(cocos2d::_ccBlendFunc const&);
    void drawSegmentEx(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&, bool, bool);
    void enableDrawArea(cocos2d::CCRect&);
    void ensureCapacity(unsigned int);
    void disableDrawArea();
    void drawCubicBezier(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&, float);
    void is_circle_on_screen(cocos2d::CCRect const&, cocos2d::CCPoint const&, float);
    void is_segment_on_screen(cocos2d::CCRect const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&);
    void drawCubicBezierDashed(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&, float, unsigned int, unsigned int);
    void drawArchLikeHalfCircle(cocos2d::CCPoint const&, cocos2d::CCPoint const&, float, unsigned int, cocos2d::_ccColor4F const&, float);
    void drawPreciseCubicBezier(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint const&, unsigned int, cocos2d::_ccColor4F const&, float);
    void listenBackToForeground(cocos2d::CCObject*);
    void draw();
    void init();
    void clear();
    void create();
    void render();
    void drawDot(cocos2d::CCPoint const&, float, cocos2d::_ccColor4F const&);
    void drawRect(cocos2d::CCRect const&, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, cocos2d::BorderAlignment);
    void drawRect(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::_ccColor4F const&, float, cocos2d::_ccColor4F const&, cocos2d::BorderAlignment);
    void drawLines(cocos2d::CCPoint*, unsigned int, float, cocos2d::_ccColor4F const&);
    void getBlendFunc()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCDRAWNODE_H_
