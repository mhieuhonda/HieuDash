// ============================================================
// SetupSongTriggerPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPSONGTRIGGERPOPUP_H_
#define SETUPSONGTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupSongTriggerPopup {
public:
    virtual ~SetupSongTriggerPopup();
    virtual ~SetupSongTriggerPopup();
    virtual ~SetupSongTriggerPopup();

    void onPlayback(SongInfoObject*);
    void pageChanged();
    void updateLength();
    void valueDidChange(int, float);
    void onResetSongTime(cocos2d::CCObject*);
    void onSavePlaybackPos(cocos2d::CCObject*);
    void updateApplyPrepare(bool);
    void updateSongTimeSlider();
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPSONGTRIGGERPOPUP_H_
