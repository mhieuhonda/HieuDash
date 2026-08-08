
#ifndef ARTTRIGGERGAMEOBJECT_H_
#define ARTTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class ArtTriggerGameObject {
public:
    virtual ~ArtTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ARTTRIGGERGAMEOBJECT_H_
