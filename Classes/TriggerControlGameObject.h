// ============================================================
// TriggerControlGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TRIGGERCONTROLGAMEOBJECT_H_
#define TRIGGERCONTROLGAMEOBJECT_H_

#include <string>
#include <vector>

class TriggerControlGameObject {
public:
    virtual ~TriggerControlGameObject();
    virtual ~TriggerControlGameObject();
    virtual ~TriggerControlGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateTriggerControlFrame();
    void init(char const*);
    void create(char const*);

};

#endif // TRIGGERCONTROLGAMEOBJECT_H_
