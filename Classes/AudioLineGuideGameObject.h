
#ifndef AUDIOLINEGUIDEGAMEOBJECT_H_
#define AUDIOLINEGUIDEGAMEOBJECT_H_

#include <string>
#include <vector>

class AudioLineGuideGameObject : public GameObject {
public:
    virtual ~AudioLineGuideGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // AUDIOLINEGUIDEGAMEOBJECT_H_
