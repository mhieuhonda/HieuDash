// ============================================================
// KeyframeGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef KEYFRAMEGAMEOBJECT_H_
#define KEYFRAMEGAMEOBJECT_H_

#include <string>
#include <vector>

class KeyframeGameObject {
public:
    virtual ~KeyframeGameObject();
    virtual ~KeyframeGameObject();
    virtual ~KeyframeGameObject();

    void setOpacity(unsigned char);
    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateShadowObjects(GJBaseGameLayer*, EditorUI*);
    void init();
    void create();

};

#endif // KEYFRAMEGAMEOBJECT_H_
