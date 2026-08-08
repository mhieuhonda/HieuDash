
#include "GJScaleControl.h"

GJScaleControl::~GJScaleControl() {
    this->cleanup();
}

GJScaleControl::~GJScaleControl() {
    this->cleanup();
}

GJScaleControl::~GJScaleControl() {
    this->cleanup();
}

void GJScaleControl::loadValues(GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>, std::equal_to<int>, std::allocator<std::pair<const int, GameObjectEditorState> > >&) {
    // Load from file/storage
    // TODO: Implement loading
}

void GJScaleControl::finishTouch() {
    // TODO: Implement
}

void GJScaleControl::ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJScaleControl::ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJScaleControl::ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJScaleControl::updateLabelX(float) {
    // TODO: Implement
}

void GJScaleControl::updateLabelY(float) {
    // TODO: Implement
}

void GJScaleControl::skewFromValue(float) {
    // TODO: Implement
}

void GJScaleControl::sliderChanged(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJScaleControl::updateLabelXY(float) {
    // TODO: Implement
}

void GJScaleControl::valueFromSkew(float) {
    // TODO: Implement
}

void GJScaleControl::scaleFromValue(float) {
    // TODO: Implement
}

void GJScaleControl::valueFromScale(float) {
    // TODO: Implement
}

void GJScaleControl::ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*) {
    // TODO: Implement
}

void GJScaleControl::onToggleLockScale(cocos2d::CCObject*) {
    // TODO: Implement
}

void GJScaleControl::init() {
    bool ret = true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GJScaleControl::create() {
    GJScaleControl* ret = new GJScaleControl();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

