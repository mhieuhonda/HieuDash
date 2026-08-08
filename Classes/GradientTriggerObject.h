
#ifndef GRADIENTTRIGGEROBJECT_H_
#define GRADIENTTRIGGEROBJECT_H_

#include <string>
#include <vector>

class GradientTriggerObject : public cocos2d::CCNode {
public:
    virtual ~GradientTriggerObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // GRADIENTTRIGGEROBJECT_H_
