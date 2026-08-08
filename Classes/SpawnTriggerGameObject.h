// ============================================================
// SpawnTriggerGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SPAWNTRIGGERGAMEOBJECT_H_
#define SPAWNTRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class SpawnTriggerGameObject {
public:
    virtual ~SpawnTriggerGameObject();
    virtual ~SpawnTriggerGameObject();
    virtual ~SpawnTriggerGameObject();

    void changeRemap(int, int, bool);
    void removeRemap(int, int);
    void getSaveString(GJBaseGameLayer*);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void updateRemapKeys(std::vector<int> const&);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void getRemapWithSource(int);
    void getRemapWithTarget(int);
    void init();
    void create();
    void addRemap(int, int);

};

#endif // SPAWNTRIGGERGAMEOBJECT_H_
