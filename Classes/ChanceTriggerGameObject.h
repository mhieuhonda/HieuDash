// ============================================================
// ChanceTriggerGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CHANCETRIGGERGAMEOBJECT_H_
#define CHANCETRIGGERGAMEOBJECT_H_

#include "EffectGameObject.h"
#include <unordered_map>
#include <vector>

class ChanceTriggerGameObject : public EffectGameObject {
public:
    virtual ~ChanceTriggerGameObject();
    virtual ~ChanceTriggerGameObject();
    virtual ~ChanceTriggerGameObject();

    void getTargetIDs(std::vector<int>&);
    void containsTargetID(int);
    void editChanceObject(int, int);
    void revertChanceRemap();
    void remapChanceObjects(std::unordered_map<int, int>, std::equal_to<int>, std::allocator<std::pair<const int, int> > > const*);
    void init(char const*) override;

protected:
    int m_targetIDs;

};

#endif // CHANCETRIGGERGAMEOBJECT_H_
