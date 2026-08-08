
#ifndef DEMONFILTERSELECTLAYER_H_
#define DEMONFILTERSELECTLAYER_H_

#include "cocos2d.h"

class DemonFilterSelectLayer {
public:
    virtual ~DemonFilterSelectLayer();

    void selectRating(cocos2d::CCObject*);
    void keyBackClicked();
    void init();
    void create();
    void onClose(cocos2d::CCObject*);

};

#endif // DEMONFILTERSELECTLAYER_H_
