
#ifndef KEYFRAMEGAMEOBJECT_H_
#define KEYFRAMEGAMEOBJECT_H_

#include <string>
#include <vector>

class KeyframeGameObject : public GameObject {
public:
    virtual ~KeyframeGameObject();

    void setOpacity(unsigned char);
    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateShadowObjects(GJBaseGameLayer*, EditorUI*);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // KEYFRAMEGAMEOBJECT_H_
