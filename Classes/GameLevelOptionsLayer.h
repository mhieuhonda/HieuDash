
#ifndef GAMELEVELOPTIONSLAYER_H_
#define GAMELEVELOPTIONSLAYER_H_

class GameLevelOptionsLayer {
public:
    virtual ~GameLevelOptionsLayer();

    void setupOptions();
    void init(GJGameLevel*);
    void create(GJGameLevel*);
    void didToggle(int);

};

#endif // GAMELEVELOPTIONSLAYER_H_
