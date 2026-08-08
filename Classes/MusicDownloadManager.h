
#ifndef MUSICDOWNLOADMANAGER_H_
#define MUSICDOWNLOADMANAGER_H_

#include "cocos2d.h"
#include <string>

class MusicDownloadManager : public cocos2d::CCNode {
public:
    static MusicDownloadManager* create();
    virtual ~MusicDownloadManager();

    void dataLoaded(DS_Dictionary*);
    void deleteSong(int);
    void firstSetup();
    void handleItND(cocos2d::CCNode*, void*);
    void isDLActive(char const*);
    void pathForSFX(int);
    void downloadSFX(int);
    void getAllSongs();
    void getDLObject(char const*);
    void getSongInfo(int, bool);
    void pathForSong(int);
    void sharedState();
    void downloadSong(int);
    void encodeDataTo(DS_Dictionary*);
    void getSFXObject(int);
    void nameForTagID(int);
    void stopDownload(int);
    void addDLToActive(char const*);
    void addDLToActive(char const*, cocos2d::CCObject*);
    void isResourceSFX(int);
    void getMusicObject(int);
    void getSongInfoKey(int);
    void isResourceSong(int);
    void responseToDict(std::string, char const*);
    void createSongsInfo(std::string, std::string);
    void getAllMusicTags(OptionsObjectDelegate*);
    void getSongPriority();
    void handleItDelayed(bool, std::string, std::string, GJHttpType);
    void isSFXDownloaded(int);
    void parseSFXLibrary();
    void clearUnusedSongs();
    void filterMusicByTag(int, cocos2d::CCArray*);
    void getAllSFXObjects(bool);
    void isSongDownloaded(int);
    void pathForSFXFolder(int);
    void songStateChanged();
    void storeMusicObject(SongInfoObject*);
    void tryLoadLibraries();
    void createArtistsInfo(std::string);
    void downloadSFXFailed(int, GJSongError);
    void getSFXDownloadKey(int);
    void getSongInfoObject(int);
    void musicActionFailed(GJMusicAction);
    void parseMusicLibrary();
    void pathForSongFolder(int);
    void ProcessHttpRequest(std::string, std::string, std::string, GJHttpType);
    void downloadCustomSong(int);
    void downloadSFXLibrary();
    void downloadSongFailed(int, GJSongError);
    void getAllMusicArtists(OptionsObjectDelegate*);
    void getAllMusicObjects(GJSongType);
    void getDownloadedSongs();
    void getSongDownloadKey(int);
    void isSFXLibraryLoaded();
    void loadSongInfoFailed(int, GJSongError);
    void removeDLFromActive(char const*);
    void storeSFXInfoObject(SFXInfoObject*);
    void downloadSFXFinished(int);
    void downloadSongStarted(int);
    void getCustomContentURL();
    void getDownloadProgress(int);
    void getMusicArtistForID(int);
    void musicActionFinished(GJMusicAction);
    void tryUpdateSFXLibrary();
    void downloadMusicLibrary();
    void downloadSongFinished(int);
    void isMusicLibraryLoaded();
    void limitDownloadedSongs();
    void loadSongInfoFinished(SongInfoObject*);
    void ProcessHttpGetRequest(std::string, std::string, void (cocos2d::CCObject::*)(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*), int, int);
    void filterMusicByArtistID(int, cocos2d::CCArray*);
    void getSFXFolderPathForID(int, bool);
    void tryUpdateMusicLibrary();
    void getSFXDownloadProgress(int);
    void onDownloadSFXCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetSongInfoCompleted(std::string, std::string);
    void addSongObjectFromString(std::string);
    void getSFXFolderObjectForID(int);
    void onDownloadSongCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void addMusicDownloadDelegate(MusicDownloadDelegate*);
    void generateCustomContentURL(std::string);
    void incrementPriorityForSong(int);
    void isRunningActionForSongID(int);
    void generateResourceAssetList();
    void removeMusicDownloadDelegate(MusicDownloadDelegate*);
    void onDownloadSFXLibraryCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onGetCustomContentURLCompleted(std::string, std::string);
    void onTryUpdateSFXLibraryCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onDownloadMusicLibraryCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void onTryUpdateMusicLibraryCompleted(cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
    void init() override;
    void showTOS(FLAlertLayerProtocol*);
    void handleIt(bool, std::string, std::string, GJHttpType);
    void clearSong(int);
    void deleteSFX(int);

protected:
    int m_allMusicTags;
    int m_musicArtistForID;
    std::string m_sFXDownloadKey;
    int m_sFXFolderObjectForID;
    int m_sFXFolderPathForID;
    std::string m_songDownloadKey;
    std::string m_songInfoKey;

};

#endif // MUSICDOWNLOADMANAGER_H_
