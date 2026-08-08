
#ifndef GJPATHSPRITE_H_
#define GJPATHSPRITE_H_

class GJPathSprite {
public:
    virtual ~GJPathSprite();

    void updateState();
    void addRankLabel(int);
    void addShardSprite();
    void changeToLockedArt();
    void init(int);
    void create(int);

};

#endif // GJPATHSPRITE_H_
