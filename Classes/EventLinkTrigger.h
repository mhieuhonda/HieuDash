// ============================================================
// EventLinkTrigger.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef EVENTLINKTRIGGER_H_
#define EVENTLINKTRIGGER_H_

#include <string>
#include <vector>

class EventLinkTrigger {
public:
    virtual ~EventLinkTrigger();
    virtual ~EventLinkTrigger();
    virtual ~EventLinkTrigger();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

};

#endif // EVENTLINKTRIGGER_H_
