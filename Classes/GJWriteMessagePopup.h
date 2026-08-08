
#ifndef GJWRITEMESSAGEPOPUP_H_
#define GJWRITEMESSAGEPOPUP_H_

#include "cocos2d.h"
#include <string>

class GJWriteMessagePopup {
public:
    virtual ~GJWriteMessagePopup();

    void updateBody(std::string);
    void updateText(std::string, int);
    void onClearBody(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void onClosePopup(UploadActionPopup*);
    void updateSubject(std::string);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void closeMessagePopup(bool);
    void uploadMessageFailed(int);
    void updateCharCountLabel(int);
    void textInputShouldOffset(CCTextInputNode*, float);
    void uploadMessageFinished(int);
    void registerWithTouchDispatcher();
    void init(int, int);
    void create(int, int);
    void onSend(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // GJWRITEMESSAGEPOPUP_H_
