// ============================================================
// TutorialLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TUTORIALLAYER_H_
#define TUTORIALLAYER_H_

#include "cocos2d.h"

class TutorialLayer {
public:
    virtual ~TutorialLayer();
    virtual ~TutorialLayer();
    virtual ~TutorialLayer();

    void keyBackClicked();
    void removeTutorialTexture();
    void init();
    void create();
    void onNext(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void loadPage(int);

};

#endif // TUTORIALLAYER_H_
