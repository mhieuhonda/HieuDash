
#ifndef ACCOUNTREGISTERLAYER_H_
#define ACCOUNTREGISTERLAYER_H_

#include "cocos2d.h"
#include <string>

class AccountRegisterLayer {
public:
    virtual ~AccountRegisterLayer();

    void resetLabel(int);
    void validEmail(std::string);
    void resetLabels();
    void textChanged(CCTextInputNode*);
    void updateLabel(AccountError);
    void disableNodes();
    void hideLoadingUI();
    void showLoadingUI();
    void validPassword(std::string);
    void allowTextInput(CCTextInputNode*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void createTextInput(cocos2d::CCPoint, cocos2d::CCSize, std::string, int);
    void createTextLabel(cocos2d::CCPoint, std::string, cocos2d::CCSize);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void createTextBackground(cocos2d::CCPoint, cocos2d::CCSize);
    void registerAccountFailed(AccountError);
    void textInputShouldOffset(CCTextInputNode*, float);
    void registerAccountFinished();
    void registerWithTouchDispatcher();
    void init();
    void create();
    void onClose(cocos2d::CCObject*);
    void onSubmit(cocos2d::CCObject*);
    void toggleUI(bool);
    void validUser(std::string);

};

#endif // ACCOUNTREGISTERLAYER_H_
