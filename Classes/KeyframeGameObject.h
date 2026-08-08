
#ifndef KEYFRAMEGAMEOBJECT_H_
#define KEYFRAMEGAMEOBJECT_H_

#include <string>
#include <vector>

class KeyframeGameObject {
public:
    virtual ~KeyframeGameObject();

    void setOpacity(unsigned char);
    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateShadowObjects(GJBaseGameLayer*, EditorUI*);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // KEYFRAMEGAMEOBJECT_H_
