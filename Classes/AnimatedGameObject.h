// ============================================================
// AnimatedGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef ANIMATEDGAMEOBJECT_H_
#define ANIMATEDGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>

class AnimatedGameObject {
public:
    virtual ~AnimatedGameObject();
    virtual ~AnimatedGameObject();
    virtual ~AnimatedGameObject();

    void setOpacity(unsigned char);
    void resetObject();
    void getTweenTime(int, int);
    void playAnimation(int);
    void setChildColor(cocos2d::_ccColor3B const&);
    void activateObject();
    void animationForID(int, int);
    void setObjectColor(cocos2d::_ccColor3B const&);
    void deactivateObject(bool);
    void animationFinished(char const*);
    void setupAnimatedSize(int);
    void setupChildSprites();
    void displayFrameChanged(cocos2d::CCObject*, std::string);
    void updateObjectAnimation();
    void updateChildSpriteColor(cocos2d::_ccColor3B);
    void init(int);
    void create(int);

};

#endif // ANIMATEDGAMEOBJECT_H_
