
#ifndef GRADIENTTRIGGEROBJECT_H_
#define GRADIENTTRIGGEROBJECT_H_

#include <string>
#include <vector>

class GradientTriggerObject {
public:
    virtual ~GradientTriggerObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // GRADIENTTRIGGEROBJECT_H_
