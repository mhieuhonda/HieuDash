
#ifndef UPLOADPOPUP_H_
#define UPLOADPOPUP_H_

#include "cocos2d.h"

class UploadPopup {
public:
    virtual ~UploadPopup();

    void keyBackClicked();
    void onReturnToLevel(cocos2d::CCObject*);
    void levelUploadFailed(GJGameLevel*);
    void levelUploadFinished(GJGameLevel*);
    void init(GJGameLevel*);
    void show();
    void create(GJGameLevel*);
    void onBack(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // UPLOADPOPUP_H_
