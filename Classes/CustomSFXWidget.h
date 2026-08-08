// ============================================================
// CustomSFXWidget.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CUSTOMSFXWIDGET_H_
#define CUSTOMSFXWIDGET_H_

#include "cocos2d.h"

class CustomSFXWidget {
public:
    virtual ~CustomSFXWidget();
    virtual ~CustomSFXWidget();
    virtual ~CustomSFXWidget();

    void onDownload(cocos2d::CCObject*);
    void onPlayback(cocos2d::CCObject*);
    void updateError(GJSongError);
    void verifySFXID(int);
    void startDownload();
    void updateSFXInfo();
    void downloadFailed();
    void hideLoadingArt();
    void showLoadingArt();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void updateLengthMod(float);
    void updateSFXObject(SFXInfoObject*);
    void onCancelDownload(cocos2d::CCObject*);
    void songStateChanged();
    void downloadSFXFailed(int, GJSongError);
    void updatePlaybackBtn();
    void updateProgressBar(int);
    void downloadSFXFinished(int);
    void startMonitorDownload();
    void updateDownloadProgress(float);
    void init(SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool);
    void create(SFXInfoObject*, CustomSFXDelegate*, bool, bool, bool, bool, bool);
    void onDelete(cocos2d::CCObject*);
    void onSelect(cocos2d::CCObject*);
    void deleteSFX();

};

#endif // CUSTOMSFXWIDGET_H_
