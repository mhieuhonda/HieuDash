
#ifndef ANIMATEDGAMEOBJECT_H_
#define ANIMATEDGAMEOBJECT_H_

#include "GameObject.h"
#include "cocos2d.h"
#include <string>

class AnimatedGameObject : public GameObject {
public:
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
    void init(int) override;
    void create(int);

protected:
    cocos2d::_ccColor3B m_childColor;
    cocos2d::_ccColor3B m_objectColor;

};

#endif // ANIMATEDGAMEOBJECT_H_
