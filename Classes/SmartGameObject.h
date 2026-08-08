// ============================================================
// SmartGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SMARTGAMEOBJECT_H_
#define SMARTGAMEOBJECT_H_

#include <string>
#include <vector>

class SmartGameObject {
public:
    virtual ~SmartGameObject();
    virtual ~SmartGameObject();
    virtual ~SmartGameObject();

    void getSaveString(GJBaseGameLayer*);
    void updateSmartFrame();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

};

#endif // SMARTGAMEOBJECT_H_
