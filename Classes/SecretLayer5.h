
#ifndef SECRETLAYER5_H_
#define SECRETLAYER5_H_

#include "cocos2d.h"
#include <string>

class SecretLayer5 : public cocos2d::CCLayer {
public:
    virtual ~SecretLayer5();

    void getMessage();
    void playWinSFX();
    void showDialog(int);
    void animateHead();
    void nodeWithTag(int);
    void textChanged(CCTextInputNode*);
    void dialogClosed(DialogLayer*);
    void fadeInMessage();
    void hideTextInput();
    void showTextInput();
    void fadeOutMessage();
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void showFirstDialog();
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void incrementChatIdx();
    void claimOnlineReward();
    void showFailAnimation();
    void updateSearchLabel(char const*);
    void finishLoadingState();
    void updateMessageLabel(std::string);
    void fadeInSubmitMessage();
    void handleSecretResponse();
    void showSuccessAnimation();
    void updateTweenActionInt(float, int);
    void onlineRewardStatusFailed();
    void onlineRewardStatusFinished(std::string);
    bool init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onSubmit(cocos2d::CCObject*);
    void unlockUI();

};

#endif // SECRETLAYER5_H_
