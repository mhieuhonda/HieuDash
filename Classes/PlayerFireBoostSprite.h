
#ifndef PLAYERFIREBOOSTSPRITE_H_
#define PLAYERFIREBOOSTSPRITE_H_

class PlayerFireBoostSprite {
public:
    virtual ~PlayerFireBoostSprite();

    void animateFireIn();
    void animateFireOut();
    void loopFireAnimation();
    void init();
    void create();

};

#endif // PLAYERFIREBOOSTSPRITE_H_
