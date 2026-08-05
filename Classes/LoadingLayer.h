#ifndef HIEUDASH_LOADINGLAYER_H_
#define HIEUDASH_LOADINGLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LoadingLayer : public cocos2d::CCLayer {
public:
    LoadingLayer();
    int getLoadingString();
    bool init();
    void loadAssets();
    void loadingFinished();
    void node();
    cocos2d::CCScene* scene();
    void updateProgress(int);
    ~LoadingLayer();
};

#endif // HIEUDASH_LOADINGLAYER_H_
