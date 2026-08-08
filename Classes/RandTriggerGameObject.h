
#ifndef RANDTRIGGERGAMEOBJECT_H_
#define RANDTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class RandTriggerGameObject {
public:
    virtual ~RandTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void getTotalChance();
    void getRandomGroupID();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    int m_randomGroupID;
    std::string m_saveString;

};

#endif // RANDTRIGGERGAMEOBJECT_H_
