#ifndef _GAMESTOREMANAGER_H_
#define _GAMESTOREMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameStoreManager {
public:
    GameStoreManager();
    addCount(int, char const*);
    boughtGold(int);
    claimItems(char const*);
    consumeItem(char const*);
    countForItem(char const*);
    dataLoaded(DS_Dictionary*);
    dictForFeatureID(char const*);
    displayGoldError();
    displayItemRestore(bool, bool);
    encodeDataTo(DS_Dictionary*);
    eventUnlockFeature(char const*);
    firstLoad();
    getAllItemsForCategory(char const*);
    getCategory(char const*);
    getShopCategories();
    getShopItems();
    init();
    isBillingSupported();
    isFeatureUnlocked(char const*);
    itemPurchaseFailed(char const*);
    itemPurchased(char const*);
    itemRefunded(char const*);
    onClaimItemsCompleted(cocos2d::CCNode*, void*);
    playBuySound();
    purchaseConsumable(char const*, int, int);
    purchaseFeature(char const*, int);
    purchaseItem(char const*);
    restorePurchases();
    setCount(int, char const*);
    setup();
    sharedState();
    sortCategories();
    unlockFeature(char const*);
    ~GameStoreManager();
};

#endif // _GAMESTOREMANAGER_H_
