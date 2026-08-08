
#ifndef SELECTPREMADELAYER_H_
#define SELECTPREMADELAYER_H_

#include "cocos2d.h"

class SelectPremadeLayer {
public:
    virtual ~SelectPremadeLayer();

    void keyBackClicked();
    void onSelectPremade(cocos2d::CCObject*);
    void init();
    void create();
    void onClose(cocos2d::CCObject*);

};

#endif // SELECTPREMADELAYER_H_
