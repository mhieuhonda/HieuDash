// ============================================================
// CCScrollView.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCScrollView.h"

namespace cocos2d {
namespace extension {

CCScrollView::CCScrollView() {
    : m_touchEnabled(false), m_zoomScale(0.0f), m_zoomScaleInDuration(0.0f)
    // 0xaa5130
}

CCScrollView::CCScrollView() {
    : m_touchEnabled(false), m_zoomScale(0.0f), m_zoomScaleInDuration(0.0f)
    // 0xaa5130
}

CCScrollView::~CCScrollView() {
    // 0xaa6c3c
    this->cleanup();
}

CCScrollView::~CCScrollView() {
    // 0xaa6b84
    this->cleanup();
}

CCScrollView::~CCScrollView() {
    // 0xaa6b84
    this->cleanup();
}

void CCScrollView::beforeDraw() {
    // 0xaa61c0
    // Render/draw logic
    // TODO: Implement rendering
}

void CCScrollView::getViewRect() {
    // 0xaa6098
    // TODO: Implement
}

void CCScrollView::setViewSize(cocos2d::CCSize) {
    // 0xaa6e9c
    // TODO: Implement
}

void CCScrollView::updateInset() {
    // 0xaa5eec
    // TODO: Implement
}

void CCScrollView::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa64b0
    // TODO: Implement
}

void CCScrollView::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa4fc0
    // TODO: Implement
}

void CCScrollView::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa6704
    // TODO: Implement
}

void CCScrollView::getContainer() {
    // 0xaa5570
    // TODO: Implement
}

void CCScrollView::getZoomScale() {
    // 0xaa546c
    // TODO: Implement
}

void CCScrollView::setContainer(cocos2d::CCNode*) {
    // 0xaa71cc
    // TODO: Implement
}

void CCScrollView::setDirection(cocos2d::extension::CCScrollViewDirection) {
    // 0xaa4e50
    // TODO: Implement
}

void CCScrollView::setZoomScale(float) {
    // 0xaa57a0
    // TODO: Set m_zoomScale
}

void CCScrollView::setZoomScale(float, bool) {
    // 0xaa5a2c
    // TODO: Set m_zoomScale
}

void CCScrollView::isNodeVisible(cocos2d::CCNode*) {
    // 0xaa5490
    // TODO: Implement
}

void CCScrollView::setContentSize(cocos2d::CCSize const&) {
    // 0xaa5fec
    // TODO: Implement
}

void CCScrollView::setTouchEnabled(bool) {
    // 0xaa6e58
    // TODO: Set m_touchEnabled
}

void CCScrollView::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // 0xaa50c4
    // TODO: Implement
}

void CCScrollView::getContentOffset() {
    // 0xaa542c
    // TODO: Implement
}

void CCScrollView::getScriptHandler(int) {
    // 0xaa6b2c
    // TODO: Implement
}

void CCScrollView::initWithViewSize(cocos2d::CCSize, cocos2d::CCNode*) {
    // 0xaa6ecc
    // TODO: Implement
}

void CCScrollView::setContentOffset(cocos2d::CCPoint, bool) {
    // 0xaa564c
    // TODO: Implement
}

void CCScrollView::relocateContainer(bool) {
    // 0xaa5a44
    // TODO: Implement
}

void CCScrollView::maxContainerOffset() {
    // 0xaa5578
    // TODO: Implement
}

void CCScrollView::minContainerOffset() {
    // 0xaa55a4
    // TODO: Implement
}

void CCScrollView::deaccelerateScrolling(float) {
    // 0xaa5bd0
    // TODO: Implement
}

void CCScrollView::registerScriptHandler(int, int) {
    // 0xaa6c68
    // TODO: Implement
}

void CCScrollView::stoppedAnimatedScroll(cocos2d::CCNode*) {
    // 0xaa4f7c
    // TODO: Implement
}

void CCScrollView::setZoomScaleInDuration(float, float) {
    // 0xaa5988
    // TODO: Set m_zoomScaleInDuration
}

void CCScrollView::performedAnimatedScroll(float) {
    // 0xaa507c
    // TODO: Implement
}

void CCScrollView::unregisterScriptHandler(int) {
    // 0xaa6aac
    // TODO: Implement
}

void CCScrollView::setContentOffsetInDuration(cocos2d::CCPoint, float) {
    // 0xaa53b4
    // TODO: Implement
}

void CCScrollView::registerWithTouchDispatcher() {
    // 0xaa4f34
    // TODO: Implement
}

void CCScrollView::init() {
    // 0xaa7160
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCScrollView::pause(cocos2d::CCObject*) {
    // 0xaa52c0
    // TODO: Implement
}

void CCScrollView::visit() {
    // 0xaa6364
    // TODO: Implement
}

void CCScrollView::create(cocos2d::CCSize, cocos2d::CCNode*) {
    // 0xaa7094
    CCScrollView* ret = new CCScrollView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCScrollView::create() {
    // 0xaa523c
    CCScrollView* ret = new CCScrollView();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCScrollView::resume(cocos2d::CCObject*) {
    // 0xaa5338
    // TODO: Implement
}

void CCScrollView::addChild(cocos2d::CCNode*) {
    // 0xaa4ecc
    // TODO: Implement
}

void CCScrollView::addChild(cocos2d::CCNode*, int) {
    // 0xaa4e7c
    // TODO: Implement
}

void CCScrollView::addChild(cocos2d::CCNode*, int, int) {
    // 0xaa72a8
    // TODO: Implement
}

void CCScrollView::afterDraw() {
    // 0xaa603c
    // Render/draw logic
    // TODO: Implement rendering
}

void CCScrollView::getContentSize()) const {
    // 0xaa4e58
}

} // namespace extension
} // namespace cocos2d
