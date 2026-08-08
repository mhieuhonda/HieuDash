
#ifndef EDITLEVELLAYER_H_
#define EDITLEVELLAYER_H_

#include "cocos2d.h"

class EditLevelLayer {
public:
    virtual ~EditLevelLayer();

    void onLevelInfo(cocos2d::CCObject*);
    void onMoveToTop();
    void onSetFolder(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void confirmClone(cocos2d::CCObject*);
    void onClosePopup(UploadActionPopup*);
    void onGuidelines(cocos2d::CCObject*);
    void confirmDelete(cocos2d::CCObject*);
    void keyBackClicked();
    void onLevelOptions(cocos2d::CCObject*);
    void setupLevelInfo();
    void updateDescText(char const*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void closeTextInputs();
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void verifyLevelName();
    void confirmMoveToTop(cocos2d::CCObject*);
    void setIDPopupClosed(SetIDPopup*, int);
    void onLevelLeaderboard(cocos2d::CCObject*);
    void uploadActionFailed(int, int);
    void onUpdateDescription(cocos2d::CCObject*);
    void uploadActionFinished(int, int);
    void init(GJGameLevel*);
    void scene(GJGameLevel*);
    void create(GJGameLevel*);
    void onBack(cocos2d::CCObject*);
    void onEdit(cocos2d::CCObject*);
    void onHelp(cocos2d::CCObject*);
    void onPlay(cocos2d::CCObject*);
    void onTest(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onClone();
    void onShare(cocos2d::CCObject*);
    void onDelete();
    void playStep2();
    void playStep3();

protected:
    int m_iDPopupClosed;

};

#endif // EDITLEVELLAYER_H_
