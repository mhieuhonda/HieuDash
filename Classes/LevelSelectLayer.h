#ifndef HIEUDASH_LEVELSELECTLAYER_H_
#define HIEUDASH_LEVELSELECTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelSelectLayer : public cocos2d::CCLayer {
public:
    int m_nLevel;

    LevelSelectLayer();
    cocos2d::ccColor3B colorForPage(int);
    static LevelSelectLayer* create(int);
    int getColorValue(int, int, float);
    bool init(int);
    void keyBackClicked();
    // v0.7 fix: menu_selector callbacks must use SEL_MenuHandler signature
    // (void (T::*)(CCObject*)) for MSVC /permissive- compatibility.
    void onBack(cocos2d::CCObject* sender = nullptr);
    void onDownload(cocos2d::CCObject* sender = nullptr);
    void onNext(cocos2d::CCObject* sender = nullptr);
    void onPrev(cocos2d::CCObject* sender = nullptr);
    static cocos2d::CCScene* scene(int);
    void scrollLayerMoved(cocos2d::CCPoint);
    ~LevelSelectLayer();
};

#endif // HIEUDASH_LEVELSELECTLAYER_H_
