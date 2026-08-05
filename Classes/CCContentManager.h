#ifndef _CCCONTENTMANAGER_H_
#define _CCCONTENTMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCContentManager {
public:
    CCContentManager();
    addCCDict(char const*);
    addDict(char const*);
    addPath(char const*);
    clearCache();
    init();
    sharedManager();
    ~CCContentManager();
};

#endif // _CCCONTENTMANAGER_H_
