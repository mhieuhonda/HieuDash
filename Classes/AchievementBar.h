
#ifndef ACHIEVEMENTBAR_H_
#define ACHIEVEMENTBAR_H_

#include "cocos2d.h"

class AchievementBar : public cocos2d::CCNode {
public:
    virtual ~AchievementBar();

    void setOpacity(unsigned char);
    void init(char const*, char const*, char const*, bool) override;
    void show();
    void create(char const*, char const*, char const*, bool);

};

#endif // ACHIEVEMENTBAR_H_
