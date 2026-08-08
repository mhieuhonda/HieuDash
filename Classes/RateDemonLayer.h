// ============================================================
// RateDemonLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef RATEDEMONLAYER_H_
#define RATEDEMONLAYER_H_

#include "cocos2d.h"

class RateDemonLayer {
public:
    virtual ~RateDemonLayer();
    virtual ~RateDemonLayer();
    virtual ~RateDemonLayer();

    void onClosePopup(UploadActionPopup*);
    void selectRating(cocos2d::CCObject*);
    void keyBackClicked();
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void init(int);
    void create(int);
    void onRate(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);

};

#endif // RATEDEMONLAYER_H_
