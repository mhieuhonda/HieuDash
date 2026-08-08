
#ifndef RANDTRIGGERGAMEOBJECT_H_
#define RANDTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class RandTriggerGameObject : public GameObject {
public:
    virtual ~RandTriggerGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void getTotalChance();
    void getRandomGroupID();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    int m_randomGroupID;
    std::string m_saveString;

};

#endif // RANDTRIGGERGAMEOBJECT_H_
