// ============================================================
// RingObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef RINGOBJECT_H_
#define RINGOBJECT_H_

#include <string>
#include <vector>

class RingObject {
public:
    virtual ~RingObject();
    virtual ~RingObject();
    virtual ~RingObject();

    void resetObject();
    void setRotation(float);
    void spawnCircle();
    void getSaveString(GJBaseGameLayer*);
    void powerOnObject(int);
    void triggerActivated(float);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void shouldDrawEditorHitbox();
    void init(char const*);
    void create(char const*);
    void setScale(float);
    void setRScale(float);

protected:
    float m_rScale;
    std::string m_saveString;
    float m_scale;

};

#endif // RINGOBJECT_H_
