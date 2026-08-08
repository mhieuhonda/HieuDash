// ============================================================
// AudioLineGuideGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef AUDIOLINEGUIDEGAMEOBJECT_H_
#define AUDIOLINEGUIDEGAMEOBJECT_H_

#include <string>
#include <vector>

class AudioLineGuideGameObject {
public:
    virtual ~AudioLineGuideGameObject();
    virtual ~AudioLineGuideGameObject();
    virtual ~AudioLineGuideGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // AUDIOLINEGUIDEGAMEOBJECT_H_
