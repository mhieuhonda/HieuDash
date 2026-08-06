#ifndef HIEUDASH_FLALERTLAYER_H_
#define HIEUDASH_FLALERTLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class FLAlertLayer : public cocos2d::CCLayer {
public:
    FLAlertLayer();
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    FLAlertLayer* create(FLAlertLayerProtocol*, char const*, char const*, char const*, char const*);
    FLAlertLayer* create(FLAlertLayerProtocol*, char const*, char const*, char const*, char const*, float);
    int getInternalLayer();
    int getPParent();
    int getReverseKeyBack();
    int getTargetScene();
    bool init(FLAlertLayerProtocol*, char const*, char const*, char const*, char const*, float);
    void keyBackClicked();
    void onBtn1();
    void onBtn2();
    void registerWithTouchDispatcher();
    void setPParent(FLAlertLayerProtocol*);
    void setReverseKeyBack(bool);
    void setTargetScene(cocos2d::CCNode*);
    void show();
    ~FLAlertLayer();
};

#endif // HIEUDASH_FLALERTLAYER_H_
