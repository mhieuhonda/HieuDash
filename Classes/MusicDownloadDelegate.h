// ============================================================
// MusicDownloadDelegate.h — Reconstructed from libcocos2dcpp.so symbols
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
