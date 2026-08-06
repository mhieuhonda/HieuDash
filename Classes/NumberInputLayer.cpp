#include "NumberInputLayer.h"
#include "TextInputDelegate.h"

NumberInputLayer::NumberInputLayer()
    : m_fValue(0.0f)
    , m_fMinValue(0.0f)
    , m_fMaxValue(100.0f)
    , m_fStep(1.0f)
    , m_pDelegate(nullptr) {}

NumberInputLayer* NumberInputLayer::create(float val, float minV, float maxV, float step, std::string label, TextInputDelegate* delegate) {
    NumberInputLayer* ret = new NumberInputLayer();
    if (ret && ret->init(val, minV, maxV, step, label, delegate)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool NumberInputLayer::init(float val, float minV, float maxV, float step, std::string label, TextInputDelegate* delegate) {
    m_fValue = val; m_fMinValue = minV; m_fMaxValue = maxV; m_fStep = step; m_sLabel = label; m_pDelegate = delegate;
    return true;
}

void NumberInputLayer::onPlus(cocos2d::CCObject* sender) { m_fValue = cocos2d::clampf(m_fValue + m_fStep, m_fMinValue, m_fMaxValue); updateLabel(); }
void NumberInputLayer::onMinus(cocos2d::CCObject* sender) { m_fValue = cocos2d::clampf(m_fValue - m_fStep, m_fMinValue, m_fMaxValue); updateLabel(); }
void NumberInputLayer::onOK(cocos2d::CCObject* sender) {}
void NumberInputLayer::updateLabel() {}
float NumberInputLayer::getValue() { return m_fValue; }

NumberInputLayer::~NumberInputLayer() {}
