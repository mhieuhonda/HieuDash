
#ifndef ROTATEGAMEPLAYGAMEOBJECT_H_
#define ROTATEGAMEPLAYGAMEOBJECT_H_

#include <string>
#include <vector>

class RotateGameplayGameObject : public GameObject {
public:
    virtual ~RotateGameplayGameObject();

    std::string getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateStartValues();
    void updateGameplayRotation();
    bool init();
    void create();

protected:
    std::string m_saveString;

};

#endif // ROTATEGAMEPLAYGAMEOBJECT_H_
