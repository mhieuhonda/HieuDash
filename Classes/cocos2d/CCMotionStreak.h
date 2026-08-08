// ============================================================
// CCMotionStreak.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCMOTIONSTREAK_H_
#define COCOS2D_CCMOTIONSTREAK_H_

#include "cocos2d.h"

namespace cocos2d {

class CCMotionStreak {
public:
    CCMotionStreak();
    CCMotionStreak();

    virtual ~CCMotionStreak();
    virtual ~CCMotionStreak();
    virtual ~CCMotionStreak();

    void getOpacity();
    void getTexture();
    void setOpacity(unsigned char);
    void setTexture(cocos2d::CCTexture2D*);
    void stopStroke();
    void updateFade(float);
    void setPosition(cocos2d::CCPoint const&);
    void getBlendFunc();
    void initWithFade(float, float, float, cocos2d::_ccColor3B const&, char const*);
    void initWithFade(float, float, float, cocos2d::_ccColor3B const&, cocos2d::CCTexture2D*);
    void resumeStroke();
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void tintWithColor(cocos2d::_ccColor3B);
    void enableRepeatMode(float);
    void isOpacityModifyRGB();
    void setOpacityModifyRGB(bool);
    void draw();
    void reset();
    void create(float, float, float, cocos2d::_ccColor3B const&, char const*);
    void create(float, float, float, cocos2d::_ccColor3B const&, cocos2d::CCTexture2D*);
    void update(float);
    void setStroke(float);

};

} // namespace cocos2d

#endif // COCOS2D_CCMOTIONSTREAK_H_
