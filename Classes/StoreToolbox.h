#ifndef HIEUDASH_STORETOOLBOX_H_
#define HIEUDASH_STORETOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class StoreToolbox {
public:
    void doICheck();
    bool isBillingSupported();
    void purchaseItem(char const*);
    void restorePurchases();
    void setupStore();
};

#endif // HIEUDASH_STORETOOLBOX_H_
