
#ifndef SIMPLEPLAYER_H_
#define SIMPLEPLAYER_H_

#include "cocos2d.h"

class SimplePlayer {
public:
    virtual ~SimplePlayer();

    void setOpacity(unsigned char);
    void updateColors();
    void asyncLoadIcon(int, IconType);
    void hideSecondary();
    void setSecondColor(cocos2d::_ccColor3B const&);
    SimplePlayer* createRobotSprite(int);
    void updatePlayerFrame(int, IconType);
    SimplePlayer* createSpiderSprite(int);
    void iconFinishedLoading(int, IconType);
    void enableCustomGlowColor(cocos2d::_ccColor3B const&);
    void disableCustomGlowColor();
    void tryEnableCustomGlowColor(int);
    void init(int);
    void create(int);
    void hideAll();
    void setColor(cocos2d::_ccColor3B const&);
    void setColors(cocos2d::_ccColor3B const&, cocos2d::_ccColor3B const&);
    void setFrames(char const*, char const*, char const*, char const*, char const*);

protected:
    cocos2d::_ccColor3B m_color;
    cocos2d::_ccColor3B m_colors;
    cocos2d::_ccColor3B m_secondColor;

};

#endif // SIMPLEPLAYER_H_
