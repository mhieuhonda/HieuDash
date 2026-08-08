
#ifndef OBJECTMANAGER_H_
#define OBJECTMANAGER_H_

#include "cocos2d.h"

class ObjectManager : public GManager {
public:
    virtual ~ObjectManager();

    void animLoaded(char const*);
    void getDefinition(char const*);
    void loadCopiedSets();
    void getGlobalAnimCopy(char const*);
    void purgeObjectManager();
    void loadCopiedAnimations();
    void replaceAllOccurencesOfString(cocos2d::CCString*, cocos2d::CCString*, cocos2d::CCDictionary*);
    bool init();
    void setup();
    void instance();
    void setLoaded(char const*);

};

#endif // OBJECTMANAGER_H_
