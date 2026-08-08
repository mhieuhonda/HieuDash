
#ifndef SFXBROWSER_H_
#define SFXBROWSER_H_

#include "cocos2d.h"
#include <string>

class SFXBrowser {
public:
    virtual ~SFXBrowser();

    void onExitFolder(cocos2d::CCObject*);
    void onClearSearch(cocos2d::CCObject*);
    void keyBackClicked();
    void onUpdateLibrary(cocos2d::CCObject*);
    void setupSFXBrowser();
    void updatePageLabel();
    void sortSelectClosed(SelectSFXSortLayer*);
    void musicActionFailed(GJMusicAction);
    void getSelectedCellIdx();
    void setTextPopupClosed(SetTextPopup*, std::string);
    void trySetupSFXBrowser();
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void musicActionFinished(GJMusicAction);
    void onToggleCompactMode(cocos2d::CCObject*);
    void shouldSnapToSelected();
    void registerWithTouchDispatcher();
    void init(int);
    void create(int);
    void onPage(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onSearch(cocos2d::CCObject*);
    void onCredits(cocos2d::CCObject*);
    void onSorting(cocos2d::CCObject*);
    void setupList(SFXSearchResult*);

};

#endif // SFXBROWSER_H_
