
#ifndef PLAYERFIREBOOSTSPRITE_H_
#define PLAYERFIREBOOSTSPRITE_H_

class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    virtual ~PlayerFireBoostSprite();

    void animateFireIn();
    void animateFireOut();
    void loopFireAnimation();
    bool init();
    void create();

};

#endif // PLAYERFIREBOOSTSPRITE_H_
