#ifndef HIEUDASH_SAVEDLEVELSLAYER_H_
#define HIEUDASH_SAVEDLEVELSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SavedLevelsLayer : public cocos2d::CCLayer {
public:
    SavedLevelsLayer();
    static SavedLevelsLayer* create();
    bool init();
    void keyBackClicked();
    void onBack();
    static cocos2d::CCScene* scene();
    void setupLevelBrowser();
    ~SavedLevelsLayer();
};

#endif // HIEUDASH_SAVEDLEVELSLAYER_H_
