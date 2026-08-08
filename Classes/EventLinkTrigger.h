
#ifndef EVENTLINKTRIGGER_H_
#define EVENTLINKTRIGGER_H_

#include <string>
#include <vector>

class EventLinkTrigger : public cocos2d::CCNode {
public:
    virtual ~EventLinkTrigger();

    std::string getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // EVENTLINKTRIGGER_H_
