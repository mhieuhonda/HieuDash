
#ifndef SELECTLISTICONLAYER_H_
#define SELECTLISTICONLAYER_H_

#include "cocos2d.h"

class SelectListIconLayer {
public:
    virtual ~SelectListIconLayer();

    void keyBackClicked();
    void init(int);
    void create(int);
    void onClose(cocos2d::CCObject*);
    void onSelect(cocos2d::CCObject*);

};

#endif // SELECTLISTICONLAYER_H_
