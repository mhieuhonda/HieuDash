#ifndef HIEUDASH_CCCONTENTMANAGER_H_
#define HIEUDASH_CCCONTENTMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCContentManager : public cocos2d::CCObject {
public:
    CCContentManager();
    void addCCDict(char const*);
    void addDict(char const*);
    void addPath(char const*);
    void clearCache();
    bool init();
    static CCContentManager* sharedManager();
    ~CCContentManager();
};

#endif // HIEUDASH_CCCONTENTMANAGER_H_
