// ============================================================
// NCSInfoLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef NCSINFOLAYER_H_
#define NCSINFOLAYER_H_

#include "cocos2d.h"

class NCSInfoLayer {
public:
    virtual ~NCSInfoLayer();
    virtual ~NCSInfoLayer();
    virtual ~NCSInfoLayer();

    void onNCSUsage(cocos2d::CCObject*);
    void keyBackClicked();
    void init(CustomSongLayer*);
    void onNCS(cocos2d::CCObject*);
    void create(CustomSongLayer*);
    void onClose(cocos2d::CCObject*);
    void onNCSIO(cocos2d::CCObject*);
    void onLibrary(cocos2d::CCObject*);

};

#endif // NCSINFOLAYER_H_
