// ============================================================
// CCProgressTimer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPROGRESSTIMER_H_
#define COCOS2D_CCPROGRESSTIMER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCProgressTimer {
public:
    CCProgressTimer();
    CCProgressTimer();

    virtual ~CCProgressTimer();
    virtual ~CCProgressTimer();
    virtual ~CCProgressTimer();

    void setOpacity(unsigned char);
    void getMidpoint();
    void setMidpoint(cocos2d::CCPoint);
    void updateColor();
    void updateRadial();
    void setPercentage(float);
    void initWithSprite(cocos2d::CCSprite*);
    void setAnchorPoint(cocos2d::CCPoint);
    void updateProgress();
    void boundaryTexCoord(char);
    void setReverseProgress(bool);
    void vertexFromAlphaPoint(cocos2d::CCPoint);
    void textureCoordFromAlphaPoint(cocos2d::CCPoint);
    void draw();
    void create(cocos2d::CCSprite*);
    void setType(cocos2d::CCProgressTimerType);
    void setColor(cocos2d::_ccColor3B const&);
    void setSprite(cocos2d::CCSprite*);
    void updateBar();
    void getOpacity()) const;
    void getColor()) const;

protected:
    cocos2d::_ccColor3B m_color;

};

} // namespace cocos2d

#endif // COCOS2D_CCPROGRESSTIMER_H_
