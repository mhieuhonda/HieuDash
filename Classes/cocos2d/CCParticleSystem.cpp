// ============================================================
// CCParticleSystem.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCParticleSystem.h"

namespace cocos2d {

CCParticleSystem::CCParticleSystem() {
    : m_emissionRate(0.0f), m_particleCount(0), m_scale(0.0f), m_scaleX(0.0f), m_scaleY(0.0f)
    , m_speed(0.0f), m_speedVar(0.0f), m_visible(false)
    // 0xafd854
}

CCParticleSystem::CCParticleSystem() {
    : m_emissionRate(0.0f), m_particleCount(0), m_scale(0.0f), m_scaleX(0.0f), m_scaleY(0.0f)
    , m_speed(0.0f), m_speedVar(0.0f), m_visible(false)
    // 0xafd854
}

CCParticleSystem::~CCParticleSystem() {
    // 0xafd830
    this->cleanup();
}

CCParticleSystem::~CCParticleSystem() {
    // 0xafd754
    this->cleanup();
}

CCParticleSystem::~CCParticleSystem() {
    // 0xafd754
    this->cleanup();
}

void CCParticleSystem::getEndSize() {
    // 0xafd2b0
    // TODO: Implement
}

void CCParticleSystem::getEndSpin() {
    // 0xafd350
    // TODO: Implement
}

void CCParticleSystem::getGravity() {
    // 0xafd198
    // TODO: Implement
}

void CCParticleSystem::getLifeVar() {
    // 0xafd260
    // TODO: Implement
}

void CCParticleSystem::getTexture() {
    // 0xafd120
    // TODO: Implement
}

void CCParticleSystem::setEndSize(float) {
    // 0xafd2b8
    // TODO: Implement
}

void CCParticleSystem::setEndSpin(float) {
    // 0xafd358
    // TODO: Implement
}

void CCParticleSystem::setGravity(cocos2d::CCPoint const&) {
    // 0xafd474
    // TODO: Implement
}

void CCParticleSystem::setLifeVar(float) {
    // 0xafd268
    // TODO: Implement
}

void CCParticleSystem::setTexture(cocos2d::CCTexture2D*) {
    // 0xafd564
    // TODO: Implement
}

void CCParticleSystem::setVisible(bool) {
    // 0xaffa28
    // TODO: Set m_visible
}

void CCParticleSystem::stopSystem() {
    // 0xafeaa0
    // TODO: Implement
}

void CCParticleSystem::addParticle() {
    // 0xafead8
    // TODO: Implement
}

void CCParticleSystem::getAngleVar() {
    // 0xafd280
    // TODO: Implement
}

void CCParticleSystem::getDuration() {
    // 0xafd230
    // TODO: Implement
}

void CCParticleSystem::getEndColor() {
    // 0xafd300
    // TODO: Implement
}

void CCParticleSystem::getSpeedVar() {
    // 0xafd1b8
    // TODO: Implement
}

void CCParticleSystem::resetSystem() {
    // 0xafebc8
    // TODO: Implement
}

void CCParticleSystem::setAngleVar(float) {
    // 0xafd288
    // TODO: Implement
}

void CCParticleSystem::setDuration(float) {
    // 0xafd238
    // TODO: Implement
}

void CCParticleSystem::setEndColor(cocos2d::_ccColor4F const&) {
    // 0xafd308
    // TODO: Set m_endColor
}

void CCParticleSystem::setRotation(float) {
    // 0xb01d60
    // TODO: Implement
}

void CCParticleSystem::setSpeedVar(float) {
    // 0xafd1b0
    // TODO: Set m_speedVar
}

void CCParticleSystem::getBatchNode() {
    // 0xafd430
    // TODO: Implement
}

void CCParticleSystem::getBlendFunc() {
    // 0xafd390
    // TODO: Implement
}

void CCParticleSystem::getEndRadius() {
    // 0xafd1e8
    // TODO: Implement
}

void CCParticleSystem::getStartSize() {
    // 0xafd290
    // TODO: Implement
}

void CCParticleSystem::getStartSpin() {
    // 0xafd330
    // TODO: Implement
}

void CCParticleSystem::initParticle(cocos2d::sCCParticle*) {
    // 0xafdb50
    // TODO: Implement
}

void CCParticleSystem::initWithFile(char const*, bool) {
    // 0xb01930
    // TODO: Implement
}

void CCParticleSystem::loadDefaults() {
    // 0xb01c10
    // Load from file/storage
    // TODO: Implement loading
}

void CCParticleSystem::resumeSystem() {
    // 0xafeab8
    // TODO: Implement
}

void CCParticleSystem::saveDefaults() {
    // 0xaffa30
    // Save to file/storage
    // TODO: Implement saving
}

void CCParticleSystem::setBatchNode(cocos2d::CCParticleBatchNode*) {
    // 0xafd438
    // TODO: Implement
}

void CCParticleSystem::setBlendFunc(cocos2d::_ccBlendFunc) {
    // 0xafd3a0
    // TODO: Implement
}

void CCParticleSystem::setEndRadius(float) {
    // 0xafd1e0
    // TODO: Implement
}

void CCParticleSystem::setStartSize(float) {
    // 0xafd298
    // TODO: Implement
}

void CCParticleSystem::setStartSpin(float) {
    // 0xafd338
    // TODO: Implement
}

void CCParticleSystem::getEndSizeVar() {
    // 0xafd2c0
    // TODO: Implement
}

void CCParticleSystem::getEndSpinVar() {
    // 0xafd360
    // TODO: Implement
}

void CCParticleSystem::getStartColor() {
    // 0xafd2d0
    // TODO: Implement
}

void CCParticleSystem::setEndSizeVar(float) {
    // 0xafd2c8
    // TODO: Implement
}

void CCParticleSystem::setEndSpinVar(float) {
    // 0xafd368
    // TODO: Implement
}

void CCParticleSystem::setStartColor(cocos2d::_ccColor4F const&) {
    // 0xafd2d8
    // TODO: Set m_startColor
}

void CCParticleSystem::updateVisible() {
    // 0xafebac
    // TODO: Implement
}

void CCParticleSystem::getEmitterMode() {
    // 0xafd420
    // TODO: Implement
}

void CCParticleSystem::getEndColorVar() {
    // 0xafd318
    // TODO: Implement
}

void CCParticleSystem::getRadialAccel() {
    // 0xafd170
    // TODO: Implement
}

void CCParticleSystem::getStartRadius() {
    // 0xafd1c8
    // TODO: Implement
}

void CCParticleSystem::getTimeElapsed() {
    // 0xafdad0
    // TODO: Implement
}

void CCParticleSystem::setEmitterMode(int) {
    // 0xafd428
    // TODO: Implement
}

void CCParticleSystem::setEndColorVar(cocos2d::_ccColor4F const&) {
    // 0xafd320
    // TODO: Set m_endColorVar
}

void CCParticleSystem::setRadialAccel(float) {
    // 0xafd168
    // TODO: Implement
}

void CCParticleSystem::setStartRadius(float) {
    // 0xafd1c0
    // TODO: Implement
}

void CCParticleSystem::getEmissionRate() {
    // 0xafd370
    // TODO: Implement
}

void CCParticleSystem::getEndRadiusVar() {
    // 0xafd1f8
    // TODO: Implement
}

void CCParticleSystem::getPositionType() {
    // 0xafd400
    // TODO: Implement
}

void CCParticleSystem::getStartSizeVar() {
    // 0xafd2a0
    // TODO: Implement
}

void CCParticleSystem::getStartSpinVar() {
    // 0xafd340
    // TODO: Implement
}

void CCParticleSystem::isBlendAdditive() {
    // 0xafd130
    // TODO: Implement
}

void CCParticleSystem::setEmissionRate(float) {
    // 0xafd378
    // TODO: Set m_emissionRate
}

void CCParticleSystem::setEndRadiusVar(float) {
    // 0xafd1f0
    // TODO: Implement
}

void CCParticleSystem::setPositionType(cocos2d::tCCPositionType) {
    // 0xafd408
    // TODO: Set m_positionType
}

void CCParticleSystem::setStartSizeVar(float) {
    // 0xafd2a8
    // TODO: Implement
}

void CCParticleSystem::setStartSpinVar(float) {
    // 0xafd348
    // TODO: Implement
}

void CCParticleSystem::updateBlendFunc() {
    // 0xafd5c4
    // TODO: Implement
}

void CCParticleSystem::getParticleCount() {
    // 0xafd228
    // TODO: Implement
}

void CCParticleSystem::getRotationIsDir() {
    // 0xafd190
    // TODO: Implement
}

void CCParticleSystem::getStartColorVar() {
    // 0xafd2e8
    // TODO: Implement
}

void CCParticleSystem::setBlendAdditive(bool) {
    // 0xafd6d4
    // TODO: Implement
}

void CCParticleSystem::setRotationIsDir(bool) {
    // 0xafd188
    // TODO: Implement
}

void CCParticleSystem::setStartColorVar(cocos2d::_ccColor4F const&) {
    // 0xafd2f0
    // TODO: Set m_startColorVar
}

void CCParticleSystem::updateWithNoTime() {
    // 0xafd0f8
    // TODO: Implement
}

void CCParticleSystem::getRadialAccelVar() {
    // 0xafd180
    // TODO: Implement
}

void CCParticleSystem::getSourcePosition() {
    // 0xafd240
    // TODO: Implement
}

void CCParticleSystem::getStartRadiusVar() {
    // 0xafd1d8
    // TODO: Implement
}

void CCParticleSystem::getTotalParticles() {
    // 0xafd380
    // TODO: Implement
}

void CCParticleSystem::setRadialAccelVar(float) {
    // 0xafd178
    // TODO: Implement
}

void CCParticleSystem::setSourcePosition(cocos2d::CCPoint const&) {
    // 0xafd47c
    // TODO: Set m_sourcePosition
}

void CCParticleSystem::setStartRadiusVar(float) {
    // 0xafd1d0
    // TODO: Implement
}

void CCParticleSystem::setTotalParticles(unsigned int) {
    // 0xafd388
    // TODO: Implement
}

void CCParticleSystem::getRotatePerSecond() {
    // 0xafd208
    // TODO: Implement
}

void CCParticleSystem::getTangentialAccel() {
    // 0xafd150
    // TODO: Implement
}

void CCParticleSystem::initWithDictionary(cocos2d::CCDictionary*, char const*, bool) {
    // 0xaffaac
    // TODO: Implement
}

void CCParticleSystem::initWithDictionary(cocos2d::CCDictionary*, bool) {
    // 0xb01c00
    // TODO: Implement
}

void CCParticleSystem::loadScaledDefaults(float) {
    // 0xb01c88
    // Load from file/storage
    // TODO: Implement loading
}

void CCParticleSystem::setRotatePerSecond(float) {
    // 0xafd200
    // TODO: Implement
}

void CCParticleSystem::setTangentialAccel(float) {
    // 0xafd148
    // TODO: Implement
}

void CCParticleSystem::updateEmissionRate() {
    // 0xafd644
    // TODO: Implement
}

void CCParticleSystem::calculateWorldSpace() {
    // 0xafdad8
    // TODO: Implement
}

void CCParticleSystem::getOpacityModifyRGB() {
    // 0xafd3f0
    // TODO: Implement
}

void CCParticleSystem::getParticleDrawCost() {
    // 0xafeb30
    // Render/draw logic
    // TODO: Implement rendering
}

void CCParticleSystem::setOpacityModifyRGB(bool) {
    // 0xafd3f8
    // TODO: Implement
}

void CCParticleSystem::isAutoRemoveOnFinish() {
    // 0xafd410
    // TODO: Implement
}

void CCParticleSystem::getRotatePerSecondVar() {
    // 0xafd218
    // TODO: Implement
}

void CCParticleSystem::getTangentialAccelVar() {
    // 0xafd160
    // TODO: Implement
}

void CCParticleSystem::setAutoRemoveOnFinish(bool) {
    // 0xafd418
    // TODO: Implement
}

void CCParticleSystem::setRotatePerSecondVar(float) {
    // 0xafd210
    // TODO: Implement
}

void CCParticleSystem::setTangentialAccelVar(float) {
    // 0xafd158
    // TODO: Implement
}

void CCParticleSystem::initWithTotalParticles(unsigned int, bool) {
    // 0xafd48c
    // TODO: Implement
}

void CCParticleSystem::updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&) {
    // 0xafd118
    // TODO: Implement
}

void CCParticleSystem::createWithTotalParticles(unsigned int) {
    // 0xafda50
    // TODO: Implement
}

void CCParticleSystem::init() {
    // 0xafd0d4
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCParticleSystem::create(char const*) {
    // 0xb01b8c
    CCParticleSystem* ret = new CCParticleSystem();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCParticleSystem::isFull() {
    // 0xafeac4
    // TODO: Implement
}

void CCParticleSystem::update(float) {
    // 0xafeca4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCParticleSystem::getLife() {
    // 0xafd250
    // TODO: Implement
}

void CCParticleSystem::setLife(float) {
    // 0xafd258
    // TODO: Implement
}

void CCParticleSystem::getAngle() {
    // 0xafd270
    // TODO: Implement
}

void CCParticleSystem::getSpeed() {
    // 0xafd1a8
    // TODO: Implement
}

void CCParticleSystem::isActive() {
    // 0xafd220
    // TODO: Implement
}

void CCParticleSystem::postStep() {
    // 0xafd11c
    // TODO: Implement
}

void CCParticleSystem::setAngle(float) {
    // 0xafd278
    // TODO: Implement
}

void CCParticleSystem::setScale(float) {
    // 0xb01d54
    // TODO: Set m_scale
}

void CCParticleSystem::setSpeed(float) {
    // 0xafd1a0
    // TODO: Set m_speed
}

void CCParticleSystem::getPosVar() {
    // 0xafd248
    // TODO: Implement
}

void CCParticleSystem::setPosVar(cocos2d::CCPoint const&) {
    // 0xafd484
    // TODO: Implement
}

void CCParticleSystem::setScaleX(float) {
    // 0xb01d6c
    // TODO: Set m_scaleX
}

void CCParticleSystem::setScaleY(float) {
    // 0xb01d78
    // TODO: Set m_scaleY
}

} // namespace cocos2d
