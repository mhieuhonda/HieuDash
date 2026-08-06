#ifndef HIEUDASH_LEVELSELECTLAYER_H_
#define HIEUDASH_LEVELSELECTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelSelectLayer : public cocos2d::CCLayer {
public:
    LevelSelectLayer();
    void colorForPage(int);
    static LevelSelectLayer* create(int);
    int getColorValue(int, int, float);
    bool init(int);
    void keyBackClicked();
    void onBack();
    void onDownload();
    void onNext();
    void onPrev();
    static cocos2d::CCScene* scene(int);
    void scrollLayerMoved(cocos2d::CCPoint);
    ~LevelSelectLayer();
};

#endif // HIEUDASH_LEVELSELECTLAYER_H_
