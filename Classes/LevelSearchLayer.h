// ============================================================
// LevelSearchLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef LEVELSEARCHLAYER_H_
#define LEVELSEARCHLAYER_H_

#include "cocos2d.h"
#include <string>

class LevelSearchLayer {
public:
    virtual ~LevelSearchLayer();
    virtual ~LevelSearchLayer();
    virtual ~LevelSearchLayer();

    void getDiffKey(int);
    void getTimeKey(int);
    void onFollowed(cocos2d::CCObject*);
    void onTrending(cocos2d::CCObject*);
    void toggleStar(cocos2d::CCObject*);
    void toggleTime(cocos2d::CCObject*);
    void onMostLikes(cocos2d::CCObject*);
    void onStarAward(cocos2d::CCObject*);
    void onSuggested(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void clearFilters();
    void onMostRecent(cocos2d::CCObject*);
    void onSearchMode(cocos2d::CCObject*);
    void onSearchUser(cocos2d::CCObject*);
    void onLatestStars(cocos2d::CCObject*);
    void onMoreOptions(cocos2d::CCObject*);
    void toggleTimeNum(int, bool);
    void getLevelLenKey();
    void keyBackClicked();
    void onSpecialDemon(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getSearchObject(SearchType, std::string);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void getSearchDiffKey();
    void onMostDownloaded(cocos2d::CCObject*);
    void onPasteClipboard(cocos2d::CCObject*);
    void toggleDifficulty(cocos2d::CCObject*);
    void onClearFreeSearch(cocos2d::CCObject*);
    void updateSearchLabel(char const*);
    void confirmClearFilters(cocos2d::CCObject*);
    void toggleDifficultyNum(int, bool);
    void demonFilterSelectClosed(int);
    void init(int);
    void scene(int);
    void create(int);
    void onBack(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onMagic(cocos2d::CCObject*);
    void onSearch(cocos2d::CCObject*);
    void checkDiff(int);
    void checkTime(int);
    void onFriends(cocos2d::CCObject*);

};

#endif // LEVELSEARCHLAYER_H_
