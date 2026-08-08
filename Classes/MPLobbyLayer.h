
#ifndef MPLOBBYLAYER_H_
#define MPLOBBYLAYER_H_

#include "cocos2d.h"

class MPLobbyLayer {
public:
    virtual ~MPLobbyLayer();

    void postComment();
    void textChanged(CCTextInputNode*);
    void updateLobby(float);
    void onClosePopup(UploadActionPopup*);
    void tryExitLobby();
    void onUpdateLobby();
    void keyBackClicked();
    void updateComments();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void joinLobbyFailed(int, GJMPErrorCode);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void joinLobbyFinished(int);
    void didUploadMPComment(int);
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void init(int);
    void keyUp(cocos2d::enumKeyCodes, double);
    void scene(int);
    void create(int);
    void onBack(cocos2d::CCObject*);
    void onBtn1(cocos2d::CCObject*);
    void onBtn2(cocos2d::CCObject*);
    void onBtn3(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onComment(cocos2d::CCObject*);

};

#endif // MPLOBBYLAYER_H_
