
#ifndef SECRETLAYER2_H_
#define SECRETLAYER2_H_

#include "cocos2d.h"
#include <string>

class SecretLayer2 {
public:
    virtual ~SecretLayer2();

    void getMessage();
    void nodeWithTag(int);
    void textChanged(CCTextInputNode*);
    void dialogClosed(DialogLayer*);
    void onSecretLevel(cocos2d::CCObject*);
    void selectAThread();
    void keyBackClicked();
    void playCoinEffect();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getBasicMessage();
    void getErrorMessage();
    void showSecretLevel();
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void getThreadMessage();
    void updateSearchLabel(char const*);
    void showCompletedLevel();
    void updateMessageLabel(std::string);
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onDoor(cocos2d::CCObject*);
    void onExit();
    void onSubmit(cocos2d::CCObject*);

};

#endif // SECRETLAYER2_H_
