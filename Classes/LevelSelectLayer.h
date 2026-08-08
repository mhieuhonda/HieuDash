// ============================================================
// LevelSelectLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELSELECTLAYER_H_
#define LEVELSELECTLAYER_H_

#include "cocos2d.h"

class LevelSelectLayer : public cocos2d::CCLayer {
public:
    virtual ~LevelSelectLayer();
    virtual ~LevelSelectLayer();
    virtual ~LevelSelectLayer();

    void onDownload(cocos2d::CCObject*);
    void colorForPage(int);
    void getColorValue(int, int, float);
    void keyBackClicked() override;
    void scrollLayerMoved(cocos2d::CCPoint);
    void updatePageWithObject(cocos2d::CCObject*, cocos2d::CCObject*);
    void init(int) override;
    void scene(int);
    void create(int);
    void onBack(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void onNext(cocos2d::CCObject*);
    void onPlay(cocos2d::CCObject*);
    void onPrev(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void tryShowAd();

protected:
    cocos2d::_ccColor3B m_colorValue;

};

#endif // LEVELSELECTLAYER_H_
