
#ifndef SETUPAUDIOLINEGUIDEPOPUP_H_
#define SETUPAUDIOLINEGUIDEPOPUP_H_

#include "cocos2d.h"

class SetupAudioLineGuidePopup {
public:
    virtual ~SetupAudioLineGuidePopup();

    void selectSettingClosed(SelectSettingLayer*);
    void init(AudioLineGuideGameObject*, cocos2d::CCArray*);
    void create(AudioLineGuideGameObject*, cocos2d::CCArray*);
    void onSpeed(cocos2d::CCObject*);

};

#endif // SETUPAUDIOLINEGUIDEPOPUP_H_
