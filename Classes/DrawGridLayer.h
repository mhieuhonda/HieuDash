#ifndef HIEUDASH_DRAWGRIDLAYER_H_
#define HIEUDASH_DRAWGRIDLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class DrawGridLayer : public cocos2d::CCLayer {
public:
    DrawGridLayer();
    void addToEffects(GameObject*);
    DrawGridLayer* create(cocos2d::CCNode*);
    void draw();
    bool init(cocos2d::CCNode*);
    void loadBPM(float);
    void loadMarkers(std::string);
    void loadTimeMarkers(std::string);
    void removeFromEffects(GameObject*);
    ~DrawGridLayer();
};

#endif // HIEUDASH_DRAWGRIDLAYER_H_
