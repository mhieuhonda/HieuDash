#ifndef HIEUDASH_OBJECTMANAGER_H_
#define HIEUDASH_OBJECTMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ObjectManager : public cocos2d::CCObject {
public:
    ObjectManager();
    void animLoaded(char const*);
    int getDefinition(char const*);
    int getGlobalAnimCopy(char const*);
    bool init();
    void instance();
    void loadCopiedAnimations();
    void loadCopiedSets();
    void replaceAllOccurencesOfString(cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*);
    void setLoaded(char const*);
    void setup();
    ~ObjectManager();
};

#endif // HIEUDASH_OBJECTMANAGER_H_
