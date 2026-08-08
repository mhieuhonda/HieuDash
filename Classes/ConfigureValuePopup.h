
#ifndef CONFIGUREVALUEPOPUP_H_
#define CONFIGUREVALUEPOPUP_H_

#include "cocos2d.h"
#include <string>

class ConfigureValuePopup {
public:
    virtual ~ConfigureValuePopup();

    void textChanged(CCTextInputNode*);
    void sliderChanged(cocos2d::CCObject*);
    void keyBackClicked();
    void textInputClosed(CCTextInputNode*);
    void addInfoAlertButton(std::string, std::string);
    void updateTextInputLabel();
    void init(ConfigureValuePopupDelegate*, float, float, float, std::string, std::string, int);
    void create(ConfigureValuePopupDelegate*, float, float, float, std::string, std::string, int);
    void onArrow(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // CONFIGUREVALUEPOPUP_H_
