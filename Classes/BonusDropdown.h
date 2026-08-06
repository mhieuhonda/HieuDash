#ifndef HIEUDASH_BONUSDROPDOWN_H_
#define HIEUDASH_BONUSDROPDOWN_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class BonusDropdown : public cocos2d::CCLayer {
public:
    BonusDropdown();
    static BonusDropdown* create(std::string, int);
    int getTargetScene();
    bool init(std::string, int);
    void setTargetScene(cocos2d::CCNode*);
    void show();
    ~BonusDropdown();
};

#endif // HIEUDASH_BONUSDROPDOWN_H_
