// ============================================================
// ColorAction2.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COLORACTION2_H_
#define COLORACTION2_H_

#include "cocos2d.h"

class ColorAction2 {
public:
    ColorAction2(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float);
    ColorAction2(cocos2d::_ccColor3B, cocos2d::_ccColor3B, float, double, bool, int, float, float);

    void resetAction();
    void updateCustomColor(cocos2d::_ccColor3B, cocos2d::_ccColor3B);
    void step(float);

};

#endif // COLORACTION2_H_
