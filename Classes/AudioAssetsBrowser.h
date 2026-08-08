// ============================================================
// AudioAssetsBrowser.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef AUDIOASSETSBROWSER_H_
#define AUDIOASSETSBROWSER_H_

#include "cocos2d.h"
#include <vector>

class AudioAssetsBrowser {
public:
    virtual ~AudioAssetsBrowser();
    virtual ~AudioAssetsBrowser();
    virtual ~AudioAssetsBrowser();

    void keyBackClicked();
    void updatePageLabel();
    void musicActionFailed(GJMusicAction);
    void getSelectedCellIdx();
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void getCellDelegateType();
    void musicActionFinished(GJMusicAction);
    void trySetupAudioBrowser();
    void registerWithTouchDispatcher();
    void init(std::vector<int>&, std::vector<int>&);
    void create(std::vector<int>&, std::vector<int>&);
    void onInfo(cocos2d::CCObject*);
    void onPage(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void setupList();

};

#endif // AUDIOASSETSBROWSER_H_
