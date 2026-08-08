
#ifndef DUNGEONBARSSPRITE_H_
#define DUNGEONBARSSPRITE_H_

class DungeonBarsSprite {
public:
    virtual ~DungeonBarsSprite();

    void animateOutBars();
    void init();
    void visit();
    void create();

};

#endif // DUNGEONBARSSPRITE_H_
