// ============================================================
// RotateGameplayGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ROTATEGAMEPLAYGAMEOBJECT_H_
#define ROTATEGAMEPLAYGAMEOBJECT_H_

#include <string>
#include <vector>

class RotateGameplayGameObject {
public:
    virtual ~RotateGameplayGameObject();
    virtual ~RotateGameplayGameObject();
    virtual ~RotateGameplayGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateStartValues();
    void updateGameplayRotation();
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // ROTATEGAMEPLAYGAMEOBJECT_H_
