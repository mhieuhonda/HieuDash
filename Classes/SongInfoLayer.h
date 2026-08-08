// ============================================================
// SongInfoLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SONGINFOLAYER_H_
#define SONGINFOLAYER_H_

#include "cocos2d.h"
#include <string>

class SongInfoLayer {
public:
    virtual ~SongInfoLayer();
    virtual ~SongInfoLayer();
    virtual ~SongInfoLayer();

    void onDownload(cocos2d::CCObject*);
    void onMenuMusic(cocos2d::CCObject*);
    void keyBackClicked();
    void onPracticeMusic(cocos2d::CCObject*);
    void showCustomMusicUnlockInfo();
    void init(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string, int);
    void onFB(cocos2d::CCObject*);
    void onNG(cocos2d::CCObject*);
    void onYT(cocos2d::CCObject*);
    void onBPM(cocos2d::CCObject*);
    void create(std::string, std::string, std::string, std::string, std::string, std::string, int, std::string, int);
    void create(int);
    void onClose(cocos2d::CCObject*);

};

#endif // SONGINFOLAYER_H_
