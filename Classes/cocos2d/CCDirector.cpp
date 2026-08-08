// ============================================================
// CCDirector.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCDirector.h"

namespace cocos2d {

CCDirector::CCDirector() {
    : m_contentScaleFactor(0.0f), m_keyboardDispatcher(""), m_keypadDispatcher(""), m_screenScaleFactor(0.0f), m_screenScaleFactorH(0.0f)
    , m_screenScaleFactorMax(0.0f), m_screenScaleFactorW(0.0f), m_visibleOrigin(false), m_visibleSize(false)
    // 0xad5ae0
}

CCDirector::CCDirector() {
    : m_contentScaleFactor(0.0f), m_keyboardDispatcher(""), m_keypadDispatcher(""), m_screenScaleFactor(0.0f), m_screenScaleFactorH(0.0f)
    , m_screenScaleFactorMax(0.0f), m_screenScaleFactorW(0.0f), m_visibleOrigin(false), m_visibleSize(false)
    // 0xad5ae0
}

CCDirector::~CCDirector() {
    // 0xad5c98
    this->cleanup();
}

CCDirector::~CCDirector() {
    // 0xad5b2c
    this->cleanup();
}

CCDirector::~CCDirector() {
    // 0xad5b2c
    this->cleanup();
}

void CCDirector::getWinSize() {
    // 0xad68ec
    // TODO: Implement
}

void CCDirector::sceneCount() {
    // 0xad6d38
    // TODO: Implement
}

void CCDirector::convertToGL(cocos2d::CCPoint const&) {
    // 0xad6694
    // TODO: Implement
}

void CCDirector::convertToUI(cocos2d::CCPoint const&) {
    // 0xad67c4
    // TODO: Implement
}

void CCDirector::setDelegate(cocos2d::CCDirectorDelegate*) {
    // 0xad7ad8
    // TODO: Implement
}

void CCDirector::setViewport() {
    // 0xad62e4
    // TODO: Implement
}

void CCDirector::calculateMPF() {
    // 0xad750c
    // TODO: Implement
}

void CCDirector::getDeltaTime() {
    // 0xad577c
    // TODO: Implement
}

void CCDirector::getScheduler() {
    // 0xad5784
    // TODO: Implement
}

void CCDirector::getScreenTop() {
    // 0xad7b00
    // TODO: Implement
}

void CCDirector::replaceScene(cocos2d::CCScene*) {
    // 0xad6d88
    // TODO: Implement
}

void CCDirector::runWithScene(cocos2d::CCScene*) {
    // 0xad6d08
    // TODO: Implement
}

void CCDirector::setDeltaTime(float) {
    // 0xad60cc
    // TODO: Implement
}

void CCDirector::setDepthTest(bool) {
    // 0xad6610
    // TODO: Implement
}

void CCDirector::setNextScene() {
    // 0xad7260
    // TODO: Implement
}

void CCDirector::setScheduler(cocos2d::CCScheduler*) {
    // 0xad5814
    // TODO: Implement
}

void CCDirector::showFPSLabel() {
    // 0xad623c
    // TODO: Implement
}

void CCDirector::getScreenLeft() {
    // 0xad7b10
    // TODO: Implement
}

void CCDirector::purgeDirector() {
    // 0xad714c
    // TODO: Implement
}

void CCDirector::setOpenGLView(cocos2d::CCEGLView*) {
    // 0xad7830
    // TODO: Implement
}

void CCDirector::setProjection(cocos2d::ccDirectorProjection) {
    // 0xad6380
    // TODO: Implement
}

void CCDirector::toggleShowFPS(bool, std::string, cocos2d::CCPoint) {
    // 0xad6914
    // TODO: Implement
}

void CCDirector::applySmoothFix() {
    // 0xad60d4
    // TODO: Implement
}

void CCDirector::getScreenRight() {
    // 0xad7b18
    // TODO: Implement
}

void CCDirector::getVisibleSize() {
    // 0xad6b78
    // TODO: Implement
}

void CCDirector::popToRootScene() {
    // 0xad7108
    // TODO: Implement
}

void CCDirector::sharedDirector() {
    // 0xad6060
    // TODO: Implement
}

void CCDirector::getFPSImageData(unsigned char**, unsigned int*) {
    // 0xad76cc
    // TODO: Implement
}

void CCDirector::getScreenBottom() {
    // 0xad7b08
    // TODO: Implement
}

void CCDirector::purgeCachedData() {
    // 0xad6368
    // TODO: Implement
}

void CCDirector::createStatsLabel() {
    // 0xad782c
    // TODO: Implement
}

void CCDirector::getAccelerometer() {
    // 0xad57b4
    // TODO: Implement
}

void CCDirector::getActionManager() {
    // 0xad578c
    // TODO: Implement
}

void CCDirector::getClassTypeInfo() {
    // 0xad5a30
    // TODO: Implement
}

void CCDirector::getVisibleOrigin() {
    // 0xad6bd0
    // TODO: Implement
}

void CCDirector::removeStatsLabel() {
    // 0xad76f8
    // TODO: Implement
}

void CCDirector::setAccelerometer(cocos2d::CCAccelerometer*) {
    // 0xad57c8
    // TODO: Implement
}

void CCDirector::setActionManager(cocos2d::CCActionManager*) {
    // 0xad5860
    // TODO: Implement
}

void CCDirector::setAlphaBlending(bool) {
    // 0xad6568
    // TODO: Implement
}

void CCDirector::setDefaultValues() {
    // 0xad5cc0
    // TODO: Implement
}

void CCDirector::setSceneDelegate(cocos2d::CCSceneDelegate*) {
    // 0xad5774
    // TODO: Implement
}

void CCDirector::setupScreenScale(cocos2d::CCSize, cocos2d::CCSize, cocos2d::TextureQuality) {
    // 0xad79f8
    // TODO: Implement
}

void CCDirector::popToSceneInStack(cocos2d::CCScene*) {
    // 0xad7110
    // TODO: Implement
}

void CCDirector::reshapeProjection(cocos2d::CCSize const&) {
    // 0xad6584
    // TODO: Implement
}

void CCDirector::updateScreenScale(cocos2d::CCSize) {
    // 0xad6a44
    // TODO: Implement
}

void CCDirector::willSwitchToScene(cocos2d::CCScene*) {
    // 0xad6c28
    // TODO: Implement
}

void CCDirector::calculateDeltaTime() {
    // 0xad6144
    // TODO: Implement
}

void CCDirector::getMouseDispatcher() {
    // 0xad57a4
    // TODO: Implement
}

void CCDirector::getTouchDispatcher() {
    // 0xad5794
    // TODO: Implement
}

void CCDirector::getWinSizeInPixels() {
    // 0xad6b3c
    // TODO: Implement
}

void CCDirector::setGLDefaultValues() {
    // 0xad6648
    // TODO: Implement
}

void CCDirector::setMouseDispatcher(cocos2d::CCMouseDispatcher*) {
    // 0xad5934
    // TODO: Implement
}

void CCDirector::setTouchDispatcher(cocos2d::CCTouchDispatcher*) {
    // 0xad58ac
    // TODO: Implement
}

void CCDirector::updateContentScale(cocos2d::TextureQuality) {
    // 0xad791c
    // TODO: Implement
}

void CCDirector::checkSceneReference() {
    // 0xad6d40
    // TODO: Implement
}

void CCDirector::getKeypadDispatcher() {
    // 0xad57ac
    // TODO: Implement
}

void CCDirector::getNotificationNode() {
    // 0xad7a80
    // TODO: Implement
}

void CCDirector::setKeypadDispatcher(cocos2d::CCKeypadDispatcher*) {
    // 0xad5970
    // TODO: Set m_keypadDispatcher
}

void CCDirector::setNotificationNode(cocos2d::CCNode*) {
    // 0xad7a88
    // TODO: Implement
}

void CCDirector::getScreenScaleFactor() {
    // 0xad7ae0
    // TODO: Implement
}

void CCDirector::levelForSceneInStack(cocos2d::CCScene*) {
    // 0xad6e78
    // TODO: Implement
}

void CCDirector::popToSceneStackLevel(int) {
    // 0xad7020
    // TODO: Implement
}

void CCDirector::setNextDeltaTimeZero(bool) {
    // 0xad6360
    // TODO: Implement
}

void CCDirector::getContentScaleFactor() {
    // 0xad78fc
    // TODO: Implement
}

void CCDirector::getKeyboardDispatcher() {
    // 0xad579c
    // TODO: Implement
}

void CCDirector::getScreenScaleFactorH() {
    // 0xad7af0
    // TODO: Implement
}

void CCDirector::getScreenScaleFactorW() {
    // 0xad7af8
    // TODO: Implement
}

void CCDirector::resetSmoothFixCounter() {
    // 0xad6230
    // TODO: Implement
}

void CCDirector::setContentScaleFactor(float) {
    // 0xad7904
    // TODO: Set m_contentScaleFactor
}

void CCDirector::setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher*) {
    // 0xad58f8
    // TODO: Set m_keyboardDispatcher
}

void CCDirector::popSceneWithTransition(float, cocos2d::PopTransition) {
    // 0xad6f50
    // TODO: Implement
}

void CCDirector::getScreenScaleFactorMax() {
    // 0xad7ae8
    // TODO: Implement
}

void CCDirector::end() {
    // 0xad6ee0
    // TODO: Implement
}

void CCDirector::init() {
    // 0xad5e20
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCDirector::pause() {
    // 0xad73d4
    // TODO: Implement
}

void CCDirector::resume() {
    // 0xad7418
    // TODO: Implement
}

void CCDirector::getZEye() {
    // 0xad636c
    // TODO: Implement
}

void CCDirector::popScene() {
    // 0xad6eec
    // TODO: Implement
}

void CCDirector::drawScene() {
    // 0xad7590
    // Render/draw logic
    // TODO: Implement rendering
}

void CCDirector::pushScene(cocos2d::CCScene*) {
    // 0xad6c74
    // TODO: Implement
}

void CCDirector::showStats() {
    // 0xad7468
    // TODO: Implement
}

void CCDirector::getDelegate()) const {
    // 0xad7ad0
}

void CCDirector::getSceneDelegate()) const {
    // 0xad576c
}

} // namespace cocos2d
