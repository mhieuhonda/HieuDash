// ============================================================
// CCComponent.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCCOMPONENT_H_
#define COCOS2D_CCCOMPONENT_H_

#include "cocos2d.h"

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

};

} // namespace cocos2d

#endif // COCOS2D_CCCOMPONENT_H_
