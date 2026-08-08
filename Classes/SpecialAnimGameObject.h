// ============================================================
// SpecialAnimGameObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SPECIALANIMGAMEOBJECT_H_
#define SPECIALANIMGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class SpecialAnimGameObject {
public:
    virtual ~SpecialAnimGameObject();
    virtual ~SpecialAnimGameObject();
    virtual ~SpecialAnimGameObject();

    void resetObject();
    void getSaveString(GJBaseGameLayer*);
    void updateMainColor(cocos2d::_ccColor3B const&);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void updateSecondaryColor(cocos2d::_ccColor3B const&);
    void updateSyncedAnimation(float, int);
    void init(char const*);
    void create(char const*);

};

#endif // SPECIALANIMGAMEOBJECT_H_
