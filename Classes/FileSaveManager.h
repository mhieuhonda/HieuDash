#ifndef _FILESAVEMANAGER_H_
#define _FILESAVEMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class FileSaveManager {
public:
    FileSaveManager();
    firstLoad();
    getShopItems();
    getStoreData();
    init();
    loadDataFromFile(char const*);
    sharedState();
    ~FileSaveManager();
};

#endif // _FILESAVEMANAGER_H_
