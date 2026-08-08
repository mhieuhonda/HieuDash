
#ifndef GAUNTLETNODE_H_
#define GAUNTLETNODE_H_

class GauntletNode {
public:
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
