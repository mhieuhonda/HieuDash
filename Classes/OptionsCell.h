// ============================================================
// OptionsCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef OPTIONSCELL_H_
#define OPTIONSCELL_H_

#include "cocos2d.h"

class OptionsCell {
public:
    OptionsCell(char const*, float, float);
    OptionsCell(char const*, float, float);

    virtual ~OptionsCell();
    virtual ~OptionsCell();
    virtual ~OptionsCell();

    void updateBGColor(int);
    void loadFromObject(OptionsObject*);
    void onToggleOption(cocos2d::CCObject*);

};

#endif // OPTIONSCELL_H_
