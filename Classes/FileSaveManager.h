#ifndef HIEUDASH_FILESAVEMANAGER_H_
#define HIEUDASH_FILESAVEMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class FileSaveManager : public cocos2d::CCObject {
public:
    FileSaveManager();
    void firstLoad();
    int getShopItems();
    int getStoreData();
    bool init();
    void loadDataFromFile(char const*);
    static FileSaveManager* sharedState();
    ~FileSaveManager();
};

#endif // HIEUDASH_FILESAVEMANAGER_H_
