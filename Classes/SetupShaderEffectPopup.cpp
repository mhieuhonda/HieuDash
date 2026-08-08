// ============================================================
// SetupShaderEffectPopup.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SetupShaderEffectPopup.h"

SetupShaderEffectPopup::~SetupShaderEffectPopup() {
    // 0x9fba04
    this->cleanup();
}

SetupShaderEffectPopup::~SetupShaderEffectPopup() {
    // 0x9fb970
    this->cleanup();
}

SetupShaderEffectPopup::~SetupShaderEffectPopup() {
    // 0x9fb970
    this->cleanup();
}

void SetupShaderEffectPopup::setupBulge() {
    // 0xa042d0
    // TODO: Implement
}

void SetupShaderEffectPopup::setupPinch() {
    // 0xa04df4
    // TODO: Implement
}

void SetupShaderEffectPopup::setupSepia() {
    // 0xa0636c
    // TODO: Implement
}

void SetupShaderEffectPopup::setupGlitch() {
    // 0x9ff7f0
    // TODO: Implement
}

void SetupShaderEffectPopup::toggleGroup(int, bool) {
    // 0x9fbab0
    // TODO: Implement
}

void SetupShaderEffectPopup::onResetColors(cocos2d::CCObject*) {
    // 0x9fba30
    // TODO: Implement
}

void SetupShaderEffectPopup::setupHueShift() {
    // 0xa07084
    // TODO: Implement
}

void SetupShaderEffectPopup::setupPixelate() {
    // 0xa01250
    // TODO: Implement
}

void SetupShaderEffectPopup::setupChromatic() {
    // 0xa000a4
    // TODO: Implement
}

void SetupShaderEffectPopup::setupGrayscale() {
    // 0xa05cb4
    // TODO: Implement
}

void SetupShaderEffectPopup::setupShockLine() {
    // 0x9fe2b8
    // TODO: Implement
}

void SetupShaderEffectPopup::setupShockWave() {
    // 0x9fccdc
    // TODO: Implement
}

void SetupShaderEffectPopup::valueDidChange(int, float) {
    // 0x9fbaf4
    // TODO: Implement
}

void SetupShaderEffectPopup::zLayerToString(int) {
    // 0x9fc088
    // TODO: Implement
}

void SetupShaderEffectPopup::setupLensCircle() {
    // 0xa01b34
    // TODO: Implement
}

void SetupShaderEffectPopup::setupMotionBlur() {
    // 0xa033dc
    // TODO: Implement
}

void SetupShaderEffectPopup::setupRadialBlur() {
    // 0xa026d4
    // TODO: Implement
}

void SetupShaderEffectPopup::setupColorChange() {
    // 0xa07518
    // TODO: Implement
}

void SetupShaderEffectPopup::setupInvertColor() {
    // 0xa067c8
    // TODO: Implement
}

void SetupShaderEffectPopup::setupSplitScreen() {
    // 0xa07dbc
    // TODO: Implement
}

void SetupShaderEffectPopup::setupShaderTrigger() {
    // 0x9fc4a4
    // TODO: Implement
}

void SetupShaderEffectPopup::updateZLayerButtons() {
    // 0x9fc2ec
    // TODO: Implement
}

void SetupShaderEffectPopup::setupChromaticGlitch() {
    // 0xa0080c
    // TODO: Implement
}

void SetupShaderEffectPopup::updateDefaultTriggerValues() {
    // 0x9fbe5c
    // TODO: Implement
}

void SetupShaderEffectPopup::init(EffectGameObject*, cocos2d::CCArray*, int) {
    // 0xa08444
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupShaderEffectPopup::create(EffectGameObject*, cocos2d::CCArray*, int) {
    // 0xa087a4
    SetupShaderEffectPopup* ret = new SetupShaderEffectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupShaderEffectPopup::onClose(cocos2d::CCObject*) {
    // 0x9fbaf0
    // TODO: Implement
}

void SetupShaderEffectPopup::onZLayer(cocos2d::CCObject*) {
    // 0x9fc3d8
    // TODO: Implement
}

