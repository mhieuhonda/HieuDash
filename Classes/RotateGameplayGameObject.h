
#ifndef ROTATEGAMEPLAYGAMEOBJECT_H_
#define ROTATEGAMEPLAYGAMEOBJECT_H_

#include <string>
#include <vector>

class RotateGameplayGameObject {
public:
    virtual ~RotateGameplayGameObject();

    void getSaveString(GJBaseGameLayer*);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateStartValues();
    void updateGameplayRotation();
    void init();
    void create();

protected:
    std::string m_saveString;

};

#endif // ROTATEGAMEPLAYGAMEOBJECT_H_
