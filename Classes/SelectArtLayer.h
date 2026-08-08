// ============================================================
// SelectArtLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SELECTARTLAYER_H_
#define SELECTARTLAYER_H_

#include "cocos2d.h"

class SelectArtLayer {
public:
    virtual ~SelectArtLayer();
    virtual ~SelectArtLayer();
    virtual ~SelectArtLayer();

    void keyBackClicked();
    void onSelectCustom(cocos2d::CCObject*);
    void updateSelectedCustom(int);
    void init(SelectArtType, int);
    void create(SelectArtType, int);
    void onClose(cocos2d::CCObject*);
    void selectArt(cocos2d::CCObject*);

};

#endif // SELECTARTLAYER_H_
