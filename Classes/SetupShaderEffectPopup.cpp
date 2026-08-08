
#include "SetupShaderEffectPopup.h"

SetupShaderEffectPopup::~SetupShaderEffectPopup() {
    this->cleanup();
}

SetupShaderEffectPopup::~SetupShaderEffectPopup() {
    this->cleanup();
}

SetupShaderEffectPopup::~SetupShaderEffectPopup() {
    this->cleanup();
}

void SetupShaderEffectPopup::setupBulge() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupPinch() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupSepia() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupGlitch() {
    // TODO: Implement
}

void SetupShaderEffectPopup::toggleGroup(int, bool) {
    // TODO: Implement
}

void SetupShaderEffectPopup::onResetColors(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupHueShift() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupPixelate() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupChromatic() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupGrayscale() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupShockLine() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupShockWave() {
    // TODO: Implement
}

void SetupShaderEffectPopup::valueDidChange(int, float) {
    // TODO: Implement
}

void SetupShaderEffectPopup::zLayerToString(int) {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupLensCircle() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupMotionBlur() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupRadialBlur() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupColorChange() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupInvertColor() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupSplitScreen() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupShaderTrigger() {
    // TODO: Implement
}

void SetupShaderEffectPopup::updateZLayerButtons() {
    // TODO: Implement
}

void SetupShaderEffectPopup::setupChromaticGlitch() {
    // TODO: Implement
}

void SetupShaderEffectPopup::updateDefaultTriggerValues() {
    // TODO: Implement
}

void SetupShaderEffectPopup::init(EffectGameObject*, cocos2d::CCArray*, int) {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SetupShaderEffectPopup::create(EffectGameObject*, cocos2d::CCArray*, int) {
    SetupShaderEffectPopup* ret = new SetupShaderEffectPopup();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SetupShaderEffectPopup::onClose(cocos2d::CCObject*) {
    // TODO: Implement
}

void SetupShaderEffectPopup::onZLayer(cocos2d::CCObject*) {
    // TODO: Implement
}

