
#ifndef DUNGEONBARSSPRITE_H_
#define DUNGEONBARSSPRITE_H_

class DungeonBarsSprite : public cocos2d::CCSprite {
public:
    virtual ~DungeonBarsSprite();

    void animateOutBars();
    bool init();
    void visit();
    void create();

};

#endif // DUNGEONBARSSPRITE_H_
