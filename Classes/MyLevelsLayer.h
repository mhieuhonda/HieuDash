#ifndef HIEUDASH_MYLEVELSLAYER_H_
#define HIEUDASH_MYLEVELSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class MyLevelsLayer : public cocos2d::CCLayer {
public:
    MyLevelsLayer();
    static MyLevelsLayer* create();
    bool init();
    void keyBackClicked();
    void onBack();
    void onNew();
    static cocos2d::CCScene* scene();
    void setupLevelBrowser();
    ~MyLevelsLayer();
};

#endif // HIEUDASH_MYLEVELSLAYER_H_
