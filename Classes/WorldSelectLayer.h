
#ifndef WORLDSELECTLAYER_H_
#define WORLDSELECTLAYER_H_

#include "cocos2d.h"

class WorldSelectLayer {
public:
    virtual ~WorldSelectLayer();

    void setupWorlds();
    void colorForPage(int);
    void onFreeLevels(cocos2d::CCObject*);
    void updateArrows();
    void getColorValue(int, int, float);
    void keyBackClicked();
    void unblockButtons();
    void scrollLayerMoved(cocos2d::CCPoint);
    void showCompleteDialog();
    void animateInActiveIsland();
    void scrollLayerScrolledToPage(BoomScrollLayer*, int);
    void scrollLayerWillScrollToPage(BoomScrollLayer*, int);
    void init(int);
    void scene(int);
    void create(int);
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onNext(cocos2d::CCObject*);
    void onPrev(cocos2d::CCObject*);
    void goToPage(int, bool);
    void onGarage(cocos2d::CCObject*);
    void tryShowAd();

protected:
    cocos2d::_ccColor3B m_colorValue;

};

#endif // WORLDSELECTLAYER_H_
