// ============================================================
// EndTriggerGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ENDTRIGGERGAMEOBJECT_H_
#define ENDTRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <string>
#include <vector>

class EndTriggerGameObject : public EffectGameObject {
public:
    virtual ~EndTriggerGameObject();
    virtual ~EndTriggerGameObject();
    virtual ~EndTriggerGameObject();

    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void init() override;
    void create();

protected:
    std::string m_saveString;

};

#endif // ENDTRIGGERGAMEOBJECT_H_
