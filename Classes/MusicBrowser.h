// ============================================================
// MusicBrowser.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef MUSICBROWSER_H_
#define MUSICBROWSER_H_

#include "cocos2d.h"
#include <string>

class MusicBrowser {
public:
    virtual ~MusicBrowser();
    virtual ~MusicBrowser();
    virtual ~MusicBrowser();

    void sliderEnded(Slider*);
    void onTagFilters(cocos2d::CCObject*);
    void onClearSearch(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onArtistFilters(cocos2d::CCObject*);
    void onUpdateLibrary(cocos2d::CCObject*);
    void updatePageLabel();
    void musicActionFailed(GJMusicAction);
    void onPlaybackControl(cocos2d::CCObject*);
    void setupMusicBrowser();
    void setupSongControls();
    void getSelectedCellIdx();
    void setTextPopupClosed(SetTextPopup*, std::string);
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void musicActionFinished(GJMusicAction);
    void trySetupMusicBrowser();
    void registerWithTouchDispatcher();
    void init(int, GJSongType);
    void create(int, GJSongType);
    void onPage(cocos2d::CCObject*);
    void update(float);
    void onClose(cocos2d::CCObject*);
    void onSearch(cocos2d::CCObject*);
    void setupList(MusicSearchResult*);

};

#endif // MUSICBROWSER_H_
