
#ifndef GAUNTLETSPRITE_H_
#define GAUNTLETSPRITE_H_

class GauntletSprite {
public:
    virtual ~GauntletSprite();

    void colorForType(GauntletType);
    void addLockedSprite();
    void addNormalSprite();
    void luminanceForType(GauntletType);
    void toggleLockedSprite(bool);
    void init(GauntletType, bool);
    void create(GauntletType, bool);

};

#endif // GAUNTLETSPRITE_H_
