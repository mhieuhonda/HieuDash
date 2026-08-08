
#ifndef FREQUESTPROFILEPAGE_H_
#define FREQUESTPROFILEPAGE_H_

#include "cocos2d.h"
#include <string>

class FRequestProfilePage {
public:
    virtual ~FRequestProfilePage();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void untoggleAll();
    void onClosePopup(UploadActionPopup*);
    void setupPageInfo(std::string, char const*);
    void deleteSelected();
    void keyBackClicked();
    void onSentRequests(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onDeleteSelected(cocos2d::CCObject*);
    void updatePageArrows();
    void updateLevelsLabel();
    void onToggleAllObjects(cocos2d::CCObject*);
    void uploadActionFailed(int, int);
    void forceReloadRequests(bool);
    void loadFRequestsFailed(char const*, GJErrorCode);
    void setupCommentsBrowser(cocos2d::CCArray*);
    void uploadActionFinished(int, int);
    void loadFRequestsFinished(cocos2d::CCArray*, char const*);
    void registerWithTouchDispatcher();
    void init(bool);
    void create(bool);
    void onClose(cocos2d::CCObject*);
    void loadPage(int);
    void onUpdate(cocos2d::CCObject*);
    bool isCorrect(char const*);

};

#endif // FREQUESTPROFILEPAGE_H_
