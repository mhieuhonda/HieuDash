// ============================================================
// CustomSongWidget.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CUSTOMSONGWIDGET_H_
#define CUSTOMSONGWIDGET_H_

#include "cocos2d.h"
#include <string>

class CustomSongWidget {
public:
    virtual ~CustomSongWidget();
    virtual ~CustomSongWidget();
    virtual ~CustomSongWidget();

    void deleteSong();
    void onDownload(cocos2d::CCObject*);
    void onPlayback(cocos2d::CCObject*);
    void updateError(GJSongError);
    void verifySongID(int);
    void onGetSongInfo(cocos2d::CCObject*);
    void startDownload();
    void downloadFailed();
    void updateSongInfo();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void addExtraVisuals(bool, bool);
    void updateLengthMod(float);
    void onCancelDownload(cocos2d::CCObject*);
    void songStateChanged();
    void updateSongObject(SongInfoObject*);
    void downloadSFXFailed(int, GJSongError);
    void musicActionFailed(GJMusicAction);
    void updatePlaybackBtn();
    void updateProgressBar(int);
    void downloadSongFailed(int, GJSongError);
    void loadSongInfoFailed(int, GJSongError);
    void toggleUpdateButton(bool);
    void downloadAssetFailed(int, GJAssetType, GJSongError);
    void downloadSFXFinished(int);
    void downloadSongStarted(int);
    void musicActionFinished(GJMusicAction);
    void positionInfoObjects();
    void downloadSongFinished(int);
    void loadSongInfoFinished(SongInfoObject*);
    void startMonitorDownload();
    void updateMultiAssetInfo(bool);
    void downloadAssetFinished(int, GJAssetType);
    void getSongInfoIfUnloaded();
    void processNextMultiAsset();
    void updateWithMultiAssets(std::string, std::string, int);
    void updateDownloadProgress(float);
    void startMultiAssetDownload();
    void init(SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int);
    void create(SongInfoObject*, CustomSongDelegate*, bool, bool, bool, bool, bool, bool, int);
    void onInfo(cocos2d::CCObject*);
    void onMore(cocos2d::CCObject*);
    void onDelete(cocos2d::CCObject*);
    void onSelect(cocos2d::CCObject*);
    void showError(bool);

};

#endif // CUSTOMSONGWIDGET_H_
