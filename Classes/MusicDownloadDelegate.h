// ============================================================
// MusicDownloadDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef MUSICDOWNLOADDELEGATE_H_
#define MUSICDOWNLOADDELEGATE_H_

class MusicDownloadDelegate {
public:
    void songStateChanged();
    void downloadSFXFailed(int, GJSongError);
    void musicActionFailed(GJMusicAction);
    void downloadSongFailed(int, GJSongError);
    void loadSongInfoFailed(int, GJSongError);
    void downloadSFXFinished(int);
    void downloadSongStarted(int);
    void musicActionFinished(GJMusicAction);
    void downloadSongFinished(int);
    void loadSongInfoFinished(SongInfoObject*);

};

#endif // MUSICDOWNLOADDELEGATE_H_
