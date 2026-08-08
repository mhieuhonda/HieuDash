// ============================================================
// CCTexturePVR.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCTexturePVR.h"

namespace cocos2d {

CCTexturePVR::CCTexturePVR() {
    // 0xb372b8
}

CCTexturePVR::CCTexturePVR() {
    // 0xb372b8
}

CCTexturePVR::~CCTexturePVR() {
    // 0xb37294
    this->cleanup();
}

CCTexturePVR::~CCTexturePVR() {
    // 0xb37240
    this->cleanup();
}

CCTexturePVR::~CCTexturePVR() {
    // 0xb37240
    this->cleanup();
}

void CCTexturePVR::createGLTexture() {
    // 0xb379c8
    // TODO: Implement
}

void CCTexturePVR::unpackPVRv2Data(unsigned char*, unsigned int) {
    // 0xb37310
    // TODO: Implement
}

void CCTexturePVR::unpackPVRv3Data(unsigned char*, unsigned int) {
    // 0xb3765c
    // TODO: Implement
}

void CCTexturePVR::initWithContentsOfFile(char const*) {
    // 0xb37ba4
    // TODO: Implement
}

void CCTexturePVR::create(char const*) {
    // 0xb37e2c
    CCTexturePVR* ret = new CCTexturePVR();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

} // namespace cocos2d
