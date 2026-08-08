// ============================================================
// SongTriggerGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SONGTRIGGERGAMEOBJECT_H_
#define SONGTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class SongTriggerGameObject : public EffectGameObject {
public:
    virtual ~SongTriggerGameObject();
    virtual ~SongTriggerGameObject();
    virtual ~SongTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*) override;
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SONGTRIGGERGAMEOBJECT_H_
