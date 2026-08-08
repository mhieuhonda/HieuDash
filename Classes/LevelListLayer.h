// ============================================================
// LevelListLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELLISTLAYER_H_
#define LEVELLISTLAYER_H_

#include "cocos2d.h"
#include <string>

class LevelListLayer : public cocos2d::CCLayer {
public:
    virtual ~LevelListLayer();
    virtual ~LevelListLayer();
    virtual ~LevelListLayer();

    void onFavorite(cocos2d::CCObject*);
    void onListInfo(cocos2d::CCObject*);
    void ownerDelete();
    void textChanged(CCTextInputNode*);
    void confirmClone(cocos2d::CCObject*);
    void onSelectIcon(cocos2d::CCObject*);
    void confirmDelete(cocos2d::CCObject*);
    void onClaimReward(cocos2d::CCObject*);
    void onDescription(cocos2d::CCObject*);
    void onViewProfile(cocos2d::CCObject*);
    void updateEditMode();
    void updateStatsArt();
    void verifyListName();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void iconSelectClosed(SelectListIconLayer*);
    void loadLevelsFailed(char const*, int);
    void onToggleEditMode(cocos2d::CCObject*);
    void setIDPopupClosed(SetIDPopup*, int);
    void updateResultArray(cocos2d::CCArray*);
    void updateSideButtons();
    void confirmOwnerDelete(cocos2d::CCObject*);
    void loadLevelsFinished(cocos2d::CCArray*, char const*, int);
    void onRefreshLevelList(cocos2d::CCObject*);
    void shareCommentClosed(std::string, ShareCommentLayer*);
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void levelListDeleteFailed(int);
    void levelListDeleteFinished(int);
    void init(GJLevelList*) override;
    void scene(GJLevelList*);
    void create(GJLevelList*);
    void onBack(cocos2d::CCObject*);
    void onExit() override;
    void onInfo(cocos2d::CCObject*);
    void onLike(cocos2d::CCObject*);
    void onEnter() override;
    void onShare(cocos2d::CCObject*);
    void onDelete();
    void cloneList();
    void likedItem(LikeItemType, int, bool);

protected:
    int m_iDPopupClosed;

};

#endif // LEVELLISTLAYER_H_
