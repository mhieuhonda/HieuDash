
#ifndef SETTEXTPOPUP_H_
#define SETTEXTPOPUP_H_

#include "cocos2d.h"
#include <string>

class SetTextPopup {
public:
    virtual ~SetTextPopup();

    void textChanged(CCTextInputNode*);
    void onResetValue(cocos2d::CCObject*);
    void keyBackClicked();
    void textInputClosed(CCTextInputNode*);
    void updateTextInputLabel();
    void init(std::string, std::string, int, std::string, std::string, bool, float);
    void show();
    void create(std::string, std::string, int, std::string, std::string, bool, float);
    void onClose(cocos2d::CCObject*);
    void onCancel(cocos2d::CCObject*);

};

#endif // SETTEXTPOPUP_H_
