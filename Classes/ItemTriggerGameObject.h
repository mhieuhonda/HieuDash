// ============================================================
// ItemTriggerGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ITEMTRIGGERGAMEOBJECT_H_
#define ITEMTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class ItemTriggerGameObject {
public:
    virtual ~ItemTriggerGameObject();
    virtual ~ItemTriggerGameObject();
    virtual ~ItemTriggerGameObject();

    void customSetup();
    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // ITEMTRIGGERGAMEOBJECT_H_
