
#ifndef SPECIALANIMGAMEOBJECT_H_
#define SPECIALANIMGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class SpecialAnimGameObject {
public:
    virtual ~SpecialAnimGameObject();

    void resetObject();
    std::string getSaveString(GJBaseGameLayer*);
    void updateMainColor(cocos2d::_ccColor3B const&);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateSecondaryColor(cocos2d::_ccColor3B const&);
    void updateSyncedAnimation(float, int);
    void init(char const*);
    void create(char const*);

protected:
    std::string m_saveString;

};

#endif // SPECIALANIMGAMEOBJECT_H_
