// ============================================================
// AchievementsLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef ACHIEVEMENTSLAYER_H_
#define ACHIEVEMENTSLAYER_H_

#include "cocos2d.h"

class AchievementsLayer {
public:
    virtual ~AchievementsLayer();
    virtual ~AchievementsLayer();
    virtual ~AchievementsLayer();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void customSetup();
    void setupPageInfo(int, int, int);
    void setupLevelBrowser(cocos2d::CCArray*);
    void create();
    void keyDown(cocos2d::enumKeyCodes, double);
    void loadPage(int);

};

#endif // ACHIEVEMENTSLAYER_H_
