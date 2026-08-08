// ============================================================
// FindBPMLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FINDBPMLAYER_H_
#define FINDBPMLAYER_H_

#include "cocos2d.h"

class FindBPMLayer {
public:
    virtual ~FindBPMLayer();
    virtual ~FindBPMLayer();
    virtual ~FindBPMLayer();

    void calculateBPM();
    void registerTouch();
    void recordingDidStop();
    void init(int);
    void create(int);
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onRecord(cocos2d::CCObject*);
    void playMusic();

};

#endif // FINDBPMLAYER_H_
