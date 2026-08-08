
#ifndef MESSAGESPROFILEPAGE_H_
#define MESSAGESPROFILEPAGE_H_

#include "cocos2d.h"
#include <string>

class MessagesProfilePage {
public:
    virtual ~MessagesProfilePage();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void untoggleAll();
    void onClosePopup(UploadActionPopup*);
    void setupPageInfo(std::string, char const*);
    void deleteSelected();
    void keyBackClicked();
    void onSentMessages(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onDeleteSelected(cocos2d::CCObject*);
    void updatePageArrows();
    void updateLevelsLabel();
    void loadMessagesFailed(char const*, GJErrorCode);
    void onToggleAllObjects(cocos2d::CCObject*);
    void uploadActionFailed(int, int);
    void forceReloadMessages(bool);
    void loadMessagesFinished(cocos2d::CCArray*, char const*);
    void setupCommentsBrowser(cocos2d::CCArray*);
    void uploadActionFinished(int, int);
    void registerWithTouchDispatcher();
    void init(bool);
    void create(bool);
    void onClose(cocos2d::CCObject*);
    void loadPage(int);
    void onUpdate(cocos2d::CCObject*);
    void isCorrect(char const*);

};

#endif // MESSAGESPROFILEPAGE_H_
