
#ifndef UPLOADACTIONPOPUP_H_
#define UPLOADACTIONPOPUP_H_

#include "cocos2d.h"
#include <string>

class UploadActionPopup {
public:
    virtual ~UploadActionPopup();

    void closePopup();
    void keyBackClicked();
    void showFailMessage(std::string);
    void showSuccessMessage(std::string);
    void init(UploadPopupDelegate*, std::string);
    void create(UploadPopupDelegate*, std::string);
    void onClose(cocos2d::CCObject*);

};

#endif // UPLOADACTIONPOPUP_H_
