// ============================================================
// GauntletSprite.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GAUNTLETSPRITE_H_
#define GAUNTLETSPRITE_H_

class GauntletSprite {
public:
    virtual ~GauntletSprite();
    virtual ~GauntletSprite();
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
