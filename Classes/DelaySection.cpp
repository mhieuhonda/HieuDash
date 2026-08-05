#include "DelaySection.h"

DelaySection::DelaySection()
    : m_fWidth(0.0f)
    , m_fHeight(0.0f)
    , m_fDelay(0.0f)
    , m_nFontIndex(0)
    , m_obColor(cocos2d::ccc3(255, 255, 255))
    , m_fScale(1.0f) {}

DelaySection* DelaySection::create() {
    DelaySection* ret = new DelaySection();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool DelaySection::init() { return true; }
std::string DelaySection::getText() { return m_sText; }
float DelaySection::getWidth() { return m_fWidth; }
float DelaySection::getDelay() { return m_fDelay; }

DelaySection::~DelaySection() {}
