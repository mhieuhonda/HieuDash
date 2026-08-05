#ifndef _GMANAGER_H_
#define _GMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GManager {
public:
    GManager();
    dataLoaded(DS_Dictionary*);
    encodeDataTo(DS_Dictionary*);
    firstLoad();
    init();
    load();
    loadDataFromFile(char const*);
    save();
    saveData(DS_Dictionary*, char const*);
    saveGMTo(char const*);
    setup();
    ~GManager();
};

#endif // _GMANAGER_H_
