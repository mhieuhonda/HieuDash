// ============================================================
// RandTriggerGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef RANDTRIGGERGAMEOBJECT_H_
#define RANDTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class RandTriggerGameObject {
public:
    virtual ~RandTriggerGameObject();
    virtual ~RandTriggerGameObject();
    virtual ~RandTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void getTotalChance();
    void getRandomGroupID();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

};

#endif // RANDTRIGGERGAMEOBJECT_H_
