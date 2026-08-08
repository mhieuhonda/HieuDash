// ============================================================
// CCComponent.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCCOMPONENT_H_
#define COCOS2D_CCCOMPONENT_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCComponent {
public:
    CCComponent();
    CCComponent();

    virtual ~CCComponent();
    virtual ~CCComponent();
    virtual ~CCComponent();

    void setEnabled(bool);
    void init();
    void create();
    void onExit();
    void update(float);
    void onEnter();
    void setName(char const*);
    void setOwner(cocos2d::CCNode*);
    void serialize(void*);
    void getName()) const;
    void getOwner()) const;
    void isEnabled()) const;

protected:
    bool m_enabled;
    std::string m_name;

};

} // namespace cocos2d

#endif // COCOS2D_CCCOMPONENT_H_
