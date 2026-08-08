
#ifndef GJMESSAGEPOPUP_H_
#define GJMESSAGEPOPUP_H_

#include "cocos2d.h"

class GJMessagePopup {
public:
    virtual ~GJMessagePopup();

    void onClosePopup(UploadActionPopup*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void loadFromGJMessage(GJUserMessage*);
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void downloadMessageFailed(int);
    void downloadMessageFinished(GJUserMessage*);
    void init(GJUserMessage*);
    void create(GJUserMessage*);
    void onBlock(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onReply(cocos2d::CCObject*);
    void onRemove(cocos2d::CCObject*);
    void blockUser();

};

#endif // GJMESSAGEPOPUP_H_
