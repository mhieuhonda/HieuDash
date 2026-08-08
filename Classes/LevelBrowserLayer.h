
#ifndef LEVELBROWSERLAYER_H_
#define LEVELBROWSERLAYER_H_

#include "cocos2d.h"
#include <string>

class LevelBrowserLayer : public cocos2d::CCLayer {
public:
    virtual ~LevelBrowserLayer();

    void onGoToPage(cocos2d::CCObject*);
    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void onDeleteAll(cocos2d::CCObject*);
    void onFavorites(cocos2d::CCObject*);
    void onLocalMode(cocos2d::CCObject*);
    void onSavedMode(cocos2d::CCObject*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void onGoToFolder(cocos2d::CCObject*);
    void createNewList(cocos2d::CCObject*);
    void onClearSearch(cocos2d::CCObject*);
    void setupPageInfo(std::string, char const*);
    void createNewLevel(cocos2d::CCObject*);
    void deleteSelected();
    void getSearchTitle();
    void keyBackClicked() override;
    void onGoToLastPage(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void setSearchObject(GJSearchObject*);
    void updatePageLabel();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) override;
    void loadLevelsFailed(char const*, int);
    void onDeleteSelected(cocos2d::CCObject*);
    void onMyOnlineLevels(cocos2d::CCObject*);
    void reloadAllObjects();
    void setIDPopupClosed(SetIDPopup*, int);
    void setupLevelBrowser(cocos2d::CCArray*);
    void updateLevelsLabel();
    void updateResultArray(cocos2d::CCArray*);
    void loadLevelsFinished(cocos2d::CCArray*, char const*, int);
    void onToggleAllObjects(cocos2d::CCObject*);
    void setTextPopupClosed(SetTextPopup*, std::string);
    void shareCommentClosed(std::string, ShareCommentLayer*);
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void onRemoveAllFavorites(cocos2d::CCObject*);
    void createNewSmartTemplate(cocos2d::CCObject*);
    void getItemsMatchingSearch(cocos2d::CCArray*, std::string, GJSearchObject*);
    void onEnterTransitionDidFinish();
    void registerWithTouchDispatcher() override;
    void init(GJSearchObject*) override;
    void show();
    void onNew(cocos2d::CCObject*);
    void scene(GJSearchObject*);
    void create(GJSearchObject*);
    void onBack(cocos2d::CCObject*);
    void onHelp(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onEnter() override;
    void onSaved(cocos2d::CCObject*);
    void loadPage(GJSearchObject*);
    void onSearch(cocos2d::CCObject*);
    void exitLayer(cocos2d::CCObject*);
    void isCorrect(char const*);
    void onRefresh(cocos2d::CCObject*);

protected:
    int m_iDPopupClosed;

};

#endif // LEVELBROWSERLAYER_H_
