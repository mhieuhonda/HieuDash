
#ifndef EVENTLINKTRIGGER_H_
#define EVENTLINKTRIGGER_H_

#include <string>
#include <vector>

class EventLinkTrigger {
public:
    virtual ~EventLinkTrigger();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // EVENTLINKTRIGGER_H_
