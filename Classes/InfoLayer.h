
#ifndef INFOLAYER_H_
#define INFOLAYER_H_

#include "cocos2d.h"
#include <string>

class InfoLayer {
public:
    virtual ~InfoLayer();

    void onNextPage(cocos2d::CCObject*);
    void onOriginal(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void onLevelInfo(cocos2d::CCObject*);
    void getAccountID();
    void reloadWindow();
    void confirmReport(cocos2d::CCObject*);
    void onCopyLevelID(cocos2d::CCObject*);
    void onGetComments(cocos2d::CCObject*);
    void setupPageInfo(std::string, char const*);
    void keyBackClicked();
    void setupLevelInfo();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getSpriteButton(char const*, void (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenu*, float, cocos2d::CCPoint);
    void onRefreshComments(cocos2d::CCObject*);
    void toggleCommentMode(cocos2d::CCObject*);
    void updateLevelsLabel();
    void loadCommentsFailed(char const*);
    void toggleExtendedMode(cocos2d::CCObject*);
    void commentUploadFailed(int, CommentError);
    void loadCommentsFinished(cocos2d::CCArray*, char const*);
    void setupCommentsBrowser(cocos2d::CCArray*);
    void commentUploadFinished(int);
    void toggleSmallCommentMode(cocos2d::CCObject*);
    void updateUserScoreFinished();
    void updateCommentModeButtons();
    void registerWithTouchDispatcher();
    void init(GJGameLevel*, GJUserScore*, GJLevelList*);
    void show();
    void getID();
    void create(GJGameLevel*, GJUserScore*, GJLevelList*);
    void onMore(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void loadPage(int, bool);
    void getRealID();
    void isCorrect(char const*);
    void onComment(cocos2d::CCObject*);
    void onSimilar(cocos2d::CCObject*);

protected:
    int m_accountID;
    int m_iD;
    int m_realID;

};

#endif // INFOLAYER_H_
