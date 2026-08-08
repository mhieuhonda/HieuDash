
#ifndef ADVANCEDFOLLOWEDITOBJECT_H_
#define ADVANCEDFOLLOWEDITOBJECT_H_

#include <string>
#include <vector>

class AdvancedFollowEditObject {
public:
    virtual ~AdvancedFollowEditObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ADVANCEDFOLLOWEDITOBJECT_H_
