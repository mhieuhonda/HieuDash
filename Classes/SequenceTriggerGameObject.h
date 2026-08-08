
#ifndef SEQUENCETRIGGERGAMEOBJECT_H_
#define SEQUENCETRIGGERGAMEOBJECT_H_

#include <string>
#include <vector>

class SequenceTriggerGameObject : public GameObject {
public:
    virtual ~SequenceTriggerGameObject();

    void resetObject();
    void deleteTarget(int);
    std::string getSaveString(GJBaseGameLayer*);
    void reorderTarget(int, bool);
    void triggerObject(GJBaseGameLayer*, int, std::vector<int> const*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateSequenceTotalCount();
    bool init();
    void create();
    void addCount(int, int);
    void addTarget(int, int);

protected:
    std::string m_saveString;

};

#endif // SEQUENCETRIGGERGAMEOBJECT_H_
