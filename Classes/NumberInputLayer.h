#ifndef HIEUDASH_NUMBERINPUTLAYER_H_
#define HIEUDASH_NUMBERINPUTLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Numeric input popup

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class NumberInputLayer : public FLAlertLayer {
public:
    NumberInputLayer();

    float m_fValue;
    float m_fMinValue;
    float m_fMaxValue;
    float m_fStep;
    std::string m_sLabel;
    TextInputDelegate* m_pDelegate;

    static NumberInputLayer* create(float, float, float, float, std::string, TextInputDelegate*);
    bool init(float, float, float, float, std::string, TextInputDelegate*);
    void onPlus(cocos2d::CCObject*);
    void onMinus(cocos2d::CCObject*);
    void onOK(cocos2d::CCObject*);
    void updateLabel();
    float getValue();

    ~NumberInputLayer();
};

#endif // HIEUDASH_NUMBERINPUTLAYER_H_
