
#ifndef ACCOUNTLOGINLAYER_H_
#define ACCOUNTLOGINLAYER_H_

#include "cocos2d.h"
#include <string>

class AccountLoginLayer {
public:
    virtual ~AccountLoginLayer();

    void resetLabel(int);
    void resetLabels();
    void textChanged(CCTextInputNode*);
    void updateLabel(AccountError);
    void disableNodes();
    void onForgotUser(cocos2d::CCObject*);
    void hideLoadingUI();
    void showLoadingUI();
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void createTextInput(cocos2d::CCPoint, cocos2d::CCSize, char const*, int);
    void createTextLabel(cocos2d::CCPoint, char const*, cocos2d::CCSize);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void onForgotPassword(cocos2d::CCObject*);
    void loginAccountFailed(AccountError);
    void createTextBackground(cocos2d::CCPoint, char const*, cocos2d::CCSize);
    void loginAccountFinished(int, int);
    void registerWithTouchDispatcher();
    void init(std::string);
    void create(std::string);
    void onClose(cocos2d::CCObject*);
    void onSubmit(cocos2d::CCObject*);
    void toggleUI(bool);

};

#endif // ACCOUNTLOGINLAYER_H_
