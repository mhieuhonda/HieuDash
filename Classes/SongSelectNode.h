
#ifndef SONGSELECTNODE_H_
#define SONGSELECTNODE_H_

#include "cocos2d.h"
#include <string>

class SongSelectNode {
public:
    virtual ~SongSelectNode();

    void onSongMode(cocos2d::CCObject*);
    void onSongMode(int);
    void selectSong(int);
    void audioPrevious(cocos2d::CCObject*);
    void songIDChanged(int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void getActiveSongID();
    void getSongFileName();
    void getLevelSettings();
    void onOpenCustomSong(cocos2d::CCObject*);
    void updateAudioLabel();
    void showCustomSongSelect();
    void customSongLayerClosed();
    void updateWidgetVisibility();
    void init(int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool);
    void create(int, bool, LevelSettingsObject*, SongSelectType, cocos2d::CCPoint, cocos2d::CCNode*, cocos2d::CCMenu*, bool);
    void audioNext(cocos2d::CCObject*);

protected:
    int m_activeSongID;
    std::string m_songFileName;

};

#endif // SONGSELECTNODE_H_
