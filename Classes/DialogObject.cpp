#include "DialogObject.h"

DialogObject::DialogObject()
    : m_nDialogID(0)
    , m_nNPCID(0)
    , m_fDuration(0.0f)
    , m_bIsLeft(false)
    , m_nButtonType(0) {}

DialogObject* DialogObject::create() {
    DialogObject* ret = new DialogObject();
    if (ret && ret->init()) { ret->autorelease(); return ret; }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

DialogObject* DialogObject::createWithDialogData(std::string data) {
    DialogObject* ret = create();
    return ret;
}

bool DialogObject::init() { return true; }
std::string DialogObject::getText() { return m_sText; }
int DialogObject::getDialogID() { return m_nDialogID; }
int DialogObject::getNPCID() { return m_nNPCID; }

DialogObject::~DialogObject() {}
