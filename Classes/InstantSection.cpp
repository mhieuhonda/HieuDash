#include "InstantSection.h"

InstantSection::InstantSection()
    : m_fWidth(0.0f)
    , m_fHeight(0.0f)
    , m_nFontIndex(0)
    , m_obColor(cocos2d::ccc3(255, 255, 255))
    , m_fScale(1.0f) {}

InstantSection* InstantSection::create() {
    InstantSection* ret = new InstantSection();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool InstantSection::init() { return true; }
std::string InstantSection::getText() { return m_sText; }
float InstantSection::getWidth() { return m_fWidth; }

InstantSection::~InstantSection() {}
