#ifndef HIEUDASH_GMANAGER_H_
#define HIEUDASH_GMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GManager : public cocos2d::CCObject {
public:
    GManager();
    void dataLoaded(DS_Dictionary*);
    void encodeDataTo(DS_Dictionary*);
    void firstLoad();
    bool init();
    void load();
    void loadDataFromFile(char const*);
    void save();
    void saveData(DS_Dictionary*, char const*);
    void saveGMTo(char const*);
    void setup();
    ~GManager();
};

#endif // HIEUDASH_GMANAGER_H_
