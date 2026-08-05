#ifndef _OBJECTMANAGER_H_
#define _OBJECTMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ObjectManager {
public:
    ObjectManager();
    animLoaded(char const*);
    getDefinition(char const*);
    getGlobalAnimCopy(char const*);
    init();
    instance();
    loadCopiedAnimations();
    loadCopiedSets();
    replaceAllOccurencesOfString(cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*);
    setLoaded(char const*);
    setup();
    ~ObjectManager();
};

#endif // _OBJECTMANAGER_H_
