#ifndef _STORETOOLBOX_H_
#define _STORETOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class StoreToolbox {
public:
    doICheck();
    isBillingSupported();
    purchaseItem(char const*);
    restorePurchases();
    setupStore();
};

#endif // _STORETOOLBOX_H_
