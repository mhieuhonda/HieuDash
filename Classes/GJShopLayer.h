
#ifndef GJSHOPLAYER_H_
#define GJSHOPLAYER_H_

#include "cocos2d.h"

class GJShopLayer {
public:
    virtual ~GJShopLayer();

    void onPlushies(cocos2d::CCObject*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void dialogClosed(DialogLayer*);
    void onSelectItem(cocos2d::CCObject*);
    void keyBackClicked();
    void didPurchaseItem(GJStoreItem*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void exitVideoAdItems();
    void showReactMessage();
    void onCommunityCredits(cocos2d::CCObject*);
    void rewardedVideoFinished();
    void showCantAffordMessage(GJStoreItem*);
    void updateCurrencyCounter();
    void registerWithTouchDispatcher();
    void init(ShopType);
    void scene(ShopType);
    void create(ShopType);
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onVideoAd(cocos2d::CCObject*);

};

#endif // GJSHOPLAYER_H_
