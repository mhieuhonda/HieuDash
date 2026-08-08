// ============================================================
// SFXTriggerGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SFXTRIGGERGAMEOBJECT_H_
#define SFXTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class SFXTriggerGameObject : public EffectGameObject {
public:
    virtual ~SFXTriggerGameObject();
    virtual ~SFXTriggerGameObject();
    virtual ~SFXTriggerGameObject();

    void getSFXRefID();
    void getSaveString(GJBaseGameLayer*);
    void getUniqueSFXID();
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init(char const*) override;
    void create(char const*);

protected:
    int m_sFXRefID;
    std::string m_saveString;
    int m_uniqueSFXID;

};

#endif // SFXTRIGGERGAMEOBJECT_H_
