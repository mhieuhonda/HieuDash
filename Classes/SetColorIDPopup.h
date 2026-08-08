
#ifndef SETCOLORIDPOPUP_H_
#define SETCOLORIDPOPUP_H_

#include "cocos2d.h"

class SetColorIDPopup {
public:
    virtual ~SetColorIDPopup();

    void colorSelectClosed(GJSpecialColorSelect*, int);
    void onSelectSpecialColor(cocos2d::CCObject*);
    void init(int);
    void create(int);

};

#endif // SETCOLORIDPOPUP_H_
