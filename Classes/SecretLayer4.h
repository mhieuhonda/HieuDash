// ============================================================
// SecretLayer4.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SECRETLAYER4_H_
#define SECRETLAYER4_H_

#include "cocos2d.h"
#include <string>

class SecretLayer4 {
public:
    virtual ~SecretLayer4();
    virtual ~SecretLayer4();
    virtual ~SecretLayer4();

    void getMessage();
    void showDialog(int);
    void nodeWithTag(int);
    void textChanged(CCTextInputNode*);
    void dialogClosed(DialogLayer*);
    void selectAThread();
    void keyBackClicked();
    void playCoinEffect();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getBasicMessage();
    void getErrorMessage();
    void showFirstDialog();
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void getThreadMessage();
    void updateSearchLabel(char const*);
    void updateMessageLabel(std::string);
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onExit();
    void onSubmit(cocos2d::CCObject*);
    void onChest01(cocos2d::CCObject*);

};

#endif // SECRETLAYER4_H_
