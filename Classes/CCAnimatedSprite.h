
#ifndef CCANIMATEDSPRITE_H_
#define CCANIMATEDSPRITE_H_

#include "cocos2d.h"
#include <string>

class CCAnimatedSprite {
public:
    virtual ~CCAnimatedSprite();

    void setOpacity(unsigned char);
    void initWithType(char const*, cocos2d::CCTexture2D*, bool);
    void runAnimation(std::string);
    void switchToMode(spriteMode);
    void cleanupSprite();
    void createWithType(char const*, cocos2d::CCTexture2D*, bool);
    void tweenToAnimation(std::string, float);
    void animationFinished(char const*);
    void willPlayAnimation();
    void animationFinishedO(cocos2d::CCObject*);
    void runAnimationForced(std::string);
    void tweenToAnimationFinished();
    void loadType(char const*, cocos2d::CCTexture2D*, bool);
    void setColor(cocos2d::_ccColor3B const&);
    void stopTween();

protected:
    cocos2d::_ccColor3B m_color;

};

#endif // CCANIMATEDSPRITE_H_
