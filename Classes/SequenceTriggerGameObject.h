// ============================================================
// SequenceTriggerGameObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SEQUENCETRIGGERGAMEOBJECT_H_
#define SEQUENCETRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class SequenceTriggerGameObject {
public:
    virtual ~SequenceTriggerGameObject();
    virtual ~SequenceTriggerGameObject();
    virtual ~SequenceTriggerGameObject();

    void resetObject();
    void deleteTarget(int);
    void getSaveString(GJBaseGameLayer*);
    void reorderTarget(int, bool);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateSequenceTotalCount();
    void init();
    void create();
    void addCount(int, int);
    void addTarget(int, int);

protected:
    std::string m_saveString;

};

#endif // SEQUENCETRIGGERGAMEOBJECT_H_
