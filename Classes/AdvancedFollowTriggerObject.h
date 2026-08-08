
#ifndef ADVANCEDFOLLOWTRIGGEROBJECT_H_
#define ADVANCEDFOLLOWTRIGGEROBJECT_H_

#include <string>
#include <vector>

class AdvancedFollowTriggerObject {
public:
    virtual ~AdvancedFollowTriggerObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void getAdvancedFollowID();
    void init(char const*);
    void create(char const*);

protected:
    int m_advancedFollowID;
    std::string m_saveString;

};

#endif // ADVANCEDFOLLOWTRIGGEROBJECT_H_
