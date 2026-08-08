
#ifndef KEYFRAMEANIMTRIGGEROBJECT_H_
#define KEYFRAMEANIMTRIGGEROBJECT_H_

#include <string>
#include <vector>

class KeyframeAnimTriggerObject : public cocos2d::CCNode {
public:
    virtual ~KeyframeAnimTriggerObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // KEYFRAMEANIMTRIGGEROBJECT_H_
