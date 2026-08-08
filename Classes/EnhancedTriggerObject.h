
#ifndef ENHANCEDTRIGGEROBJECT_H_
#define ENHANCEDTRIGGEROBJECT_H_

#include <string>
#include <vector>

class EnhancedTriggerObject {
public:
    virtual ~EnhancedTriggerObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ENHANCEDTRIGGEROBJECT_H_
