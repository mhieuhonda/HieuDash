#include "DialogLayer.h"
#include "DialogObject.h"

DialogLayer::DialogLayer()
    : m_pDialogArray(nullptr)
    , m_nCurrentDialog(0)
    , m_pPortraitSprite(nullptr)
    , m_pTextArea(nullptr)
    , m_pDelegate(nullptr)
    , m_bAnimateIn(false)
    , m_fDuration(0.0f) {}

DialogLayer* DialogLayer::create(cocos2d::CCArray* dialogs, DialogDelegate* delegate) {
    DialogLayer* ret = new DialogLayer();
    if (ret && ret->init(dialogs, delegate)) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool DialogLayer::init(cocos2d::CCArray* dialogs, DialogDelegate* delegate) {
    m_pDialogArray = dialogs;
    m_pDelegate = delegate;
    return true;
}

void DialogLayer::showNextDialog() {}
void DialogLayer::onDialogClosed() {}
void DialogLayer::update(float dt) {}
void DialogLayer::animateDialogIn() {}
void DialogLayer::animateDialogOut() {}

DialogLayer::~DialogLayer() {}
