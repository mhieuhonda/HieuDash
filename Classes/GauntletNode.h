// ============================================================
// GauntletNode.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GAUNTLETNODE_H_
#define GAUNTLETNODE_H_

class GauntletNode {
public:
    virtual ~GauntletNode();
    virtual ~GauntletNode();
    virtual ~GauntletNode();

    void nameForType(GauntletType);
    void frameForType(GauntletType);
    void generateNode();
    void onClaimReward();
    void showUnlockAnimation();
    void init(GJMapPack*);
    void create(GJMapPack*);
    void onUnlock();

};

#endif // GAUNTLETNODE_H_
