// ============================================================
// SongOptionsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SONGOPTIONSLAYER_H_
#define SONGOPTIONSLAYER_H_

#include "cocos2d.h"

class SongOptionsLayer {
public:
    virtual ~SongOptionsLayer();
    virtual ~SongOptionsLayer();
    virtual ~SongOptionsLayer();

    void onPlayback(cocos2d::CCObject*);
    void keyBackClicked();
    void onSongPersistent(cocos2d::CCObject*);
    void updatePlaybackBtn();
    void init(CustomSongDelegate*);
    void create(CustomSongDelegate*);
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onFadeIn(cocos2d::CCObject*);
    void onFadeOut(cocos2d::CCObject*);

};

#endif // SONGOPTIONSLAYER_H_
