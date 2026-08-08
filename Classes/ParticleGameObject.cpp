// ============================================================
// ParticleGameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "ParticleGameObject.h"

ParticleGameObject::~ParticleGameObject() {
    // 0x751d80
    this->cleanup();
}

ParticleGameObject::~ParticleGameObject() {
    // 0x751910
    this->cleanup();
}

ParticleGameObject::~ParticleGameObject() {
    // 0x751910
    this->cleanup();
}

void ParticleGameObject::customSetup() {
    // 0x74a79c
    // TODO: Implement
}

void ParticleGameObject::resetObject() {
    // 0x7507b4
    // TODO: Implement
}

void ParticleGameObject::setRotation(float) {
    // 0x755480
    // TODO: Implement
}

void ParticleGameObject::setRotationX(float) {
    // 0x7554cc
    // TODO: Implement
}

void ParticleGameObject::setRotationY(float) {
    // 0x755518
    // TODO: Implement
}

void ParticleGameObject::claimParticle() {
    // 0x75532c
    // TODO: Implement
}

void ParticleGameObject::getSaveString(GJBaseGameLayer*) {
    // 0x77286c
    // Save to file/storage
    // TODO: Implement saving
}

void ParticleGameObject::setChildColor(cocos2d::_ccColor3B const&) {
    // 0x74aab4
    // TODO: Set m_childColor
}

void ParticleGameObject::setObjectColor(cocos2d::_ccColor3B const&) {
    // 0x74a960
    // TODO: Set m_objectColor
}

void ParticleGameObject::updateParticle() {
    // 0x7555c4
    // TODO: Implement
}

void ParticleGameObject::unclaimParticle() {
    // 0x750864
    // TODO: Implement
}

void ParticleGameObject::blendModeChanged() {
    // 0x7496c8
    // TODO: Implement
}

void ParticleGameObject::deactivateObject(bool) {
    // 0x75077c
    // TODO: Implement
}

void ParticleGameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x754a98
    // TODO: Implement
}

void ParticleGameObject::setParticleString(std::string) {
    // 0x7549ac
    // TODO: Set m_particleString
}

void ParticleGameObject::updateParticleAngle(float, cocos2d::CCParticleSystemQuad*) {
    // 0x754e8c
    // TODO: Implement
}

void ParticleGameObject::updateParticleColor(cocos2d::_ccColor3B const&) {
    // 0x7496a8
    // TODO: Implement
}

void ParticleGameObject::updateParticleScale(float) {
    // 0x755564
    // TODO: Implement
}

void ParticleGameObject::particleWasActivated() {
    // 0x7506bc
    // TODO: Implement
}

void ParticleGameObject::updateParticleStruct() {
    // 0x754a3c
    // TODO: Implement
}

void ParticleGameObject::addMainSpriteToParent(bool) {
    // 0x74a848
    // TODO: Implement
}

void ParticleGameObject::applyParticleSettings(cocos2d::CCParticleSystemQuad*) {
    // 0x754fec
    // TODO: Implement
}

void ParticleGameObject::updateParticleOpacity(unsigned char) {
    // 0x7496ac
    // TODO: Implement
}

void ParticleGameObject::updateSyncedAnimation(float, int) {
    // 0x74ace8
    // TODO: Implement
}

void ParticleGameObject::updateAnimateOnTrigger(bool) {
    // 0x750818
    // TODO: Implement
}

void ParticleGameObject::createParticlePreviewArt() {
    // 0x754c64
    // TODO: Implement
}

void ParticleGameObject::updateMainParticleOpacity(unsigned char) {
    // 0x749708
    // TODO: Implement
}

void ParticleGameObject::createAndAddCustomParticle() {
    // 0x754a5c
    // TODO: Implement
}

void ParticleGameObject::updateSecondaryParticleOpacity(unsigned char) {
    // 0x749760
    // TODO: Implement
}

void ParticleGameObject::updateParticlePreviewArtOpacity(float) {
    // 0x754e14
    // TODO: Implement
}

void ParticleGameObject::init() {
    // 0x74a6f4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void ParticleGameObject::create() {
    // 0x7542c8
    ParticleGameObject* ret = new ParticleGameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void ParticleGameObject::setScale(float) {
    // 0x755750
    // TODO: Set m_scale
}

void ParticleGameObject::setScaleX(float) {
    // 0x7556b8
    // TODO: Set m_scaleX
}

void ParticleGameObject::setScaleY(float) {
    // 0x755704
    // TODO: Set m_scaleY
}

