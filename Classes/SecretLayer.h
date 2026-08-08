// ============================================================
// SecretLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SECRETLAYER_H_
#define SECRETLAYER_H_

#include "cocos2d.h"
#include <string>

class SecretLayer {
public:
    virtual ~SecretLayer();
    virtual ~SecretLayer();
    virtual ~SecretLayer();

    void getMessage();
    void nodeWithTag(int);
    void textChanged(CCTextInputNode*);
    void selectAThread();
    void keyBackClicked();
    void playCoinEffect();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getBasicMessage();
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void getThreadMessage();
    void updateSearchLabel(char const*);
    void updateMessageLabel(std::string);
    void init();
    void scene();
    void create();
    void onBack(cocos2d::CCObject*);
    void onSubmit(cocos2d::CCObject*);

};

#endif // SECRETLAYER_H_
