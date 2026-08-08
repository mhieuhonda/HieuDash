// ============================================================
// GJMGLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJMGLAYER_H_
#define GJMGLAYER_H_

#include "cocos2d.h"

class GJMGLayer {
public:
    virtual ~GJMGLayer();
    virtual ~GJMGLayer();
    virtual ~GJMGLayer();

    void showGround();
    void scaleGround(float);
    void toggleVisible01(bool);
    void toggleVisible02(bool);
    void updateGroundPos(cocos2d::CCPoint);
    void updateMG01Blend(bool);
    void updateMG02Blend(bool);
    void deactivateGround();
    void loadGroundSprites(int, bool);
    void updateGroundColor(cocos2d::_ccColor3B, bool);
    void updateGroundWidth(bool);
    void updateGroundOpacity(unsigned char, bool);
    void defaultYOffsetForBG2(int);
    void draw();
    void init(int);
    void create(int);

};

#endif // GJMGLAYER_H_
