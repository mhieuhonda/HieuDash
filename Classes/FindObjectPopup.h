
#ifndef FINDOBJECTPOPUP_H_
#define FINDOBJECTPOPUP_H_

#include "cocos2d.h"

class FindObjectPopup {
public:
    virtual ~FindObjectPopup();

    void onFindObjectID(cocos2d::CCObject*);
    void init();
    void create();

};

#endif // FINDOBJECTPOPUP_H_
