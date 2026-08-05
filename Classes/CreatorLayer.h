#ifndef HIEUDASH_CREATORLAYER_H_
#define HIEUDASH_CREATORLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CreatorLayer : public cocos2d::CCLayer {
public:
    CreatorLayer();
    CreatorLayer* create();
    bool init();
    void keyBackClicked();
    void onBack();
    void onFeaturedLevels();
    void onMyLevels();
    void onOnlineLevels();
    void onSavedLevels();
    cocos2d::CCScene* scene();
    ~CreatorLayer();
};

#endif // HIEUDASH_CREATORLAYER_H_
