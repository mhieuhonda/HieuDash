// ============================================================
// ProfilePage.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PROFILEPAGE_H_
#define PROFILEPAGE_H_

#include "cocos2d.h"
#include <string>

class ProfilePage : public cocos2d::CCLayer {
public:
    virtual ~ProfilePage();
    virtual ~ProfilePage();
    virtual ~ProfilePage();

    void onCopyName(cocos2d::CCObject*);
    void onMessages(cocos2d::CCObject*);
    void onMyLevels(cocos2d::CCObject*);
    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void onRequests(cocos2d::CCObject*);
    void onSettings(cocos2d::CCObject*);
    void onStatInfo(cocos2d::CCObject*);
    void toggleShip(cocos2d::CCObject*);
    void onBlockUser(cocos2d::CCObject*);
    void onClosePopup(UploadActionPopup*);
    void onSocialPage(cocos2d::CCObject*);
    void isOnWatchlist(int);
    void onSendMessage(cocos2d::CCObject*);
    void setupComments();
    void setupPageInfo(std::string, char const*);
    void keyBackClicked() override;
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void userInfoChanged(GJUserScore*);
    void onCommentHistory(cocos2d::CCObject*);
    void updatePageArrows();
    void getUserInfoFailed(int);
    void updateLevelsLabel();
    void loadCommentsFailed(char const*);
    void showNoAccountError();
    void uploadActionFailed(int, int);
    void commentDeleteFailed(int, int);
    void commentUploadFailed(int, CommentError);
    void getUserInfoFinished(GJUserScore*);
    void loadCommentsFinished(cocos2d::CCArray*, char const*);
    void loadPageFromUserInfo(GJUserScore*);
    void setupCommentsBrowser(cocos2d::CCArray*);
    void uploadActionFinished(int, int);
    void commentUploadFinished(int);
    void updateUserScoreFailed();
    void updateUserScoreFinished();
    void toggleMainPageVisibility(bool);
    void registerWithTouchDispatcher() override;
    void init(int, bool) override;
    void show();
    void create(int, bool);
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void loadPage(int);
    void onFollow(cocos2d::CCObject*);
    void onFriend(cocos2d::CCObject*);
    void onUpdate(cocos2d::CCObject*);
    void blockUser();
    void isCorrect(char const*);
    void onComment(cocos2d::CCObject*);
    void onFriends(cocos2d::CCObject*);
    void onMyLists(cocos2d::CCObject*);

};

#endif // PROFILEPAGE_H_
