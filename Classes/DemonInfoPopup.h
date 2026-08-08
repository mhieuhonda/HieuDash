
#ifndef DEMONINFOPOPUP_H_
#define DEMONINFOPOPUP_H_

#include "cocos2d.h"
#include <string>

class DemonInfoPopup {
public:
    virtual ~DemonInfoPopup();

    void keyBackClicked();
    DemonInfoPopup* createFromString(std::string);
    void init(int, int, int, int, int, int, int, int, int, int, int, int);
    void create(int, int, int, int, int, int, int, int, int, int, int, int);
    void onClose(cocos2d::CCObject*);

};

#endif // DEMONINFOPOPUP_H_
