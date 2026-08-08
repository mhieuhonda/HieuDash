
#ifndef TOSPOPUP_H_
#define TOSPOPUP_H_

#include "cocos2d.h"

class TOSPopup : public FLAlertLayer {
public:
    virtual ~TOSPopup();

    void keyBackClicked();
    bool init();
    void onTOS(cocos2d::CCObject*);
    void create();
    void onClose(cocos2d::CCObject*);
    void onPrivacy(cocos2d::CCObject*);

};

#endif // TOSPOPUP_H_
