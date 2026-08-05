#ifndef HIEUDASH_GAMESTOREMANAGER_H_
#define HIEUDASH_GAMESTOREMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GameStoreManager : public cocos2d::CCObject {
public:
    GameStoreManager();
    void addCount(int, char const*);
    void boughtGold(int);
    void claimItems(char const*);
    void consumeItem(char const*);
    void countForItem(char const*);
    void dataLoaded(DS_Dictionary*);
    void dictForFeatureID(char const*);
    void displayGoldError();
    void displayItemRestore(bool, bool);
    void encodeDataTo(DS_Dictionary*);
    void eventUnlockFeature(char const*);
    void firstLoad();
    int getAllItemsForCategory(char const*);
    int getCategory(char const*);
    int getShopCategories();
    int getShopItems();
    bool init();
    bool isBillingSupported();
    bool isFeatureUnlocked(char const*);
    void itemPurchaseFailed(char const*);
    void itemPurchased(char const*);
    void itemRefunded(char const*);
    void onClaimItemsCompleted(cocos2d::CCNode*, void*);
    void playBuySound();
    void purchaseConsumable(char const*, int, int);
    void purchaseFeature(char const*, int);
    void purchaseItem(char const*);
    void restorePurchases();
    void setCount(int, char const*);
    void setup();
    GameStoreManager* sharedState();
    void sortCategories();
    void unlockFeature(char const*);
    ~GameStoreManager();
};

#endif // HIEUDASH_GAMESTOREMANAGER_H_
