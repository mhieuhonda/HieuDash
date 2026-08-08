// ============================================================
// CCNode.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "CCNode.h"

namespace cocos2d {

CCNode::CCNode() {
    : m_actionByTag(0), m_childByTag(0), m_scale(0.0f), m_scaleX(0.0f), m_scaleY(0.0f)
    , m_scaledContentSize(0.0f), m_useChildIndex(0), m_visible(false)
    // 0xacc664
}

CCNode::CCNode() {
    : m_actionByTag(0), m_childByTag(0), m_scale(0.0f), m_scaleX(0.0f), m_scaleY(0.0f)
    , m_scaledContentSize(0.0f), m_useChildIndex(0), m_visible(false)
    // 0xacc664
}

CCNode::~CCNode() {
    // 0xacc01c
    this->cleanup();
}

CCNode::~CCNode() {
    // 0xacbedc
    this->cleanup();
}

CCNode::~CCNode() {
    // 0xacbedc
    this->cleanup();
}

void CCNode::_setZOrder(int) {
    // 0xaca780
    // TODO: Implement
}

void CCNode::getVertexZ() {
    // 0xaca7d0
    // TODO: Implement
}

void CCNode::setVertexZ(float) {
    // 0xaca7d8
    // TODO: Implement
}

void CCNode::setVisible(bool) {
    // 0xaca91c
    // TODO: Set m_visible
}

void CCNode::stopAction(cocos2d::CCAction*) {
    // 0xacd064
    // TODO: Implement
}

void CCNode::unschedule(void (cocos2d::CCObject::*)(float)) {
    // 0xacd184
    // TODO: Implement
}

void CCNode::boundingBox() {
    // 0xacc7c8
    // TODO: Implement
}

void CCNode::description() {
    // 0xacc8d8
    // TODO: Implement
}

void CCNode::detachChild(cocos2d::CCNode*, bool) {
    // 0xacc920
    // TODO: Implement
}

void CCNode::getChildren() {
    // 0xaccb64
    // TODO: Implement
}

void CCNode::getPosition(float*, float*) {
    // 0xaca8e8
    // TODO: Implement
}

void CCNode::getPosition() {
    // 0xaca8c0
    // TODO: Implement
}

void CCNode::getRotation() {
    // 0xaca7e0
    // TODO: Implement
}

void CCNode::getUserData() {
    // 0xaca980
    // TODO: Implement
}

void CCNode::insertChild(cocos2d::CCNode*, int) {
    // 0xacca00
    // TODO: Implement
}

void CCNode::removeChild(cocos2d::CCNode*) {
    // 0xacaa74
    // TODO: Implement
}

void CCNode::removeChild(cocos2d::CCNode*, bool) {
    // 0xacc9ec
    // TODO: Implement
}

void CCNode::setPosition(cocos2d::CCPoint const&) {
    // 0xaca8c8
    // TODO: Set m_position
}

void CCNode::setPosition(float, float) {
    // 0xacafbc
    // TODO: Set m_position
}

void CCNode::setRotation(float) {
    // 0xaca7e8
    // TODO: Implement
}

void CCNode::setUserData(void*) {
    // 0xaca988
    // TODO: Implement
}

void CCNode::addComponent(cocos2d::CCComponent*) {
    // 0xacac5c
    // TODO: Implement
}

void CCNode::getPositionX() {
    // 0xaca8fc
    // TODO: Implement
}

void CCNode::getPositionY() {
    // 0xaca904
    // TODO: Implement
}

void CCNode::getRotationX() {
    // 0xaca818
    // TODO: Implement
}

void CCNode::getRotationY() {
    // 0xaca834
    // TODO: Implement
}

void CCNode::getScheduler() {
    // 0xacabe8
    // TODO: Implement
}

void CCNode::reorderChild(cocos2d::CCNode*, int) {
    // 0xacab1c
    // TODO: Implement
}

void CCNode::scheduleOnce(void (cocos2d::CCObject::*)(float), float) {
    // 0xacd174
    // TODO: Implement
}

void CCNode::setPositionX(float) {
    // 0xacb028
    // TODO: Set m_positionX
}

void CCNode::setPositionY(float) {
    // 0xacb098
    // TODO: Set m_positionY
}

void CCNode::setRotationX(float) {
    // 0xaca820
    // TODO: Implement
}

void CCNode::setRotationY(float) {
    // 0xaca83c
    // TODO: Implement
}

void CCNode::setScheduler(cocos2d::CCScheduler*) {
    // 0xacd248
    // TODO: Implement
}

void CCNode::childrenAlloc() {
    // 0xacc8f8
    // TODO: Implement
}

void CCNode::getChildByTag(int) {
    // 0xacaf1c
    // TODO: Implement
}

void CCNode::getUserObject() {
    // 0xaca9a8
    // TODO: Implement
}

void CCNode::setUserObject(cocos2d::CCObject*) {
    // 0xacae90
    // TODO: Implement
}

void CCNode::getActionByTag(int) {
    // 0xacd078
    // TODO: Implement
}

void CCNode::getAnchorPoint() {
    // 0xaca92c
    // TODO: Implement
}

void CCNode::scheduleUpdate() {
    // 0xacd0a8
    // TODO: Implement
}

void CCNode::setAnchorPoint(cocos2d::CCPoint const&) {
    // 0xacb158
    // TODO: Set m_anchorPoint
}

void CCNode::setContentSize(cocos2d::CCSize const&) {
    // 0xacb20c
    // TODO: Implement
}

void CCNode::stopAllActions() {
    // 0xacd00c
    // TODO: Implement
}

void CCNode::removeComponent(char const*) {
    // 0xacac80
    // TODO: Implement
}

void CCNode::removeComponent(cocos2d::CCComponent*) {
    // 0xacaca4
    // TODO: Implement
}

void CCNode::sortAllChildren() {
    // 0xacde68
    // TODO: Implement
}

void CCNode::stopActionByTag(int) {
    // 0xacd06c
    // TODO: Implement
}

void CCNode::updateTransform() {
    // 0xacabf8
    // TODO: Implement
}

void CCNode::getActionManager() {
    // 0xacabe0
    // TODO: Implement
}

void CCNode::getGLServerState() {
    // 0xaca9b0
    // TODO: Implement
}

void CCNode::getShaderProgram() {
    // 0xaca9a0
    // TODO: Implement
}

void CCNode::removeChildByTag(int) {
    // 0xacaa94
    // TODO: Implement
}

void CCNode::removeChildByTag(int, bool) {
    // 0xacaab4
    // TODO: Implement
}

void CCNode::removeFromParent() {
    // 0xacaa04
    // TODO: Implement
}

void CCNode::setActionManager(cocos2d::CCActionManager*) {
    // 0xacd018
    // TODO: Implement
}

void CCNode::setGLServerState(cocos2d::ccGLServerState) {
    // 0xaca9b8
    // TODO: Implement
}

void CCNode::setShaderProgram(cocos2d::CCGLProgram*) {
    // 0xacaecc
    // TODO: Implement
}

void CCNode::setUseChildIndex(bool) {
    // 0xaccb88
    // TODO: Set m_useChildIndex
}

void CCNode::unscheduleUpdate() {
    // 0xacd0b0
    // TODO: Implement
}

void CCNode::getOrderOfArrival() {
    // 0xaca990
    // TODO: Implement
}

void CCNode::removeAllChildren() {
    // 0xacaafc
    // TODO: Implement
}

void CCNode::setOrderOfArrival(unsigned int) {
    // 0xaca998
    // TODO: Implement
}

void CCNode::updateTweenAction(float, char const*) {
    // 0xacabf0
    // TODO: Implement
}

void CCNode::convertToNodeSpace(cocos2d::CCPoint const&) {
    // 0xacd4c8
    // TODO: Implement
}

void CCNode::removeMeAndCleanup() {
    // 0xacaa54
    // TODO: Implement
}

void CCNode::transformAncestors() {
    // 0xaccf9c
    // TODO: Implement
}

void CCNode::updateChildIndexes() {
    // 0xaccb4c
    // TODO: Implement
}

void CCNode::convertToWorldSpace(cocos2d::CCPoint const&) {
    // 0xacd540
    // TODO: Implement
}

void CCNode::removeAllComponents() {
    // 0xacacc8
    // TODO: Implement
}

void CCNode::convertToNodeSpaceAR(cocos2d::CCPoint const&) {
    // 0xacd5b8
    // TODO: Implement
}

void CCNode::convertToWindowSpace(cocos2d::CCPoint const&) {
    // 0xacd698
    // TODO: Implement
}

void CCNode::getScaledContentSize() {
    // 0xacad6c
    // TODO: Implement
}

void CCNode::nodeToWorldTransform() {
    // 0xacb3bc
    // TODO: Implement
}

void CCNode::updateTweenActionInt(float, int) {
    // 0xacabf4
    // TODO: Implement
}

void CCNode::worldToNodeTransform() {
    // 0xacb990
    // TODO: Implement
}

void CCNode::convertToWorldSpaceAR(cocos2d::CCPoint const&) {
    // 0xacd624
    // TODO: Implement
}

void CCNode::nodeToParentTransform() {
    // 0xacb544
    // TODO: Implement
}

void CCNode::parentToNodeTransform() {
    // 0xacb8e4
    // TODO: Implement
}

void CCNode::registerScriptHandler(int) {
    // 0xacabac
    // TODO: Implement
}

void CCNode::getAnchorPointInPoints() {
    // 0xaca924
    // TODO: Implement
}

void CCNode::numberOfRunningActions() {
    // 0xacd084
    // TODO: Implement
}

void CCNode::setAdditionalTransform(cocos2d::CCAffineTransform const&) {
    // 0xacd4a4
    // TODO: Implement
}

void CCNode::sortAllChildrenNoIndex() {
    // 0xaccc00
    // TODO: Implement
}

void CCNode::unscheduleAllSelectors() {
    // 0xacd19c
    // TODO: Implement
}

void CCNode::convertTouchToNodeSpace(cocos2d::CCTouch*) {
    // 0xacd700
    // TODO: Implement
}

void CCNode::unregisterScriptHandler() {
    // 0xacbe98
    // TODO: Implement
}

void CCNode::nodeToWorldTransformFast() {
    // 0xacb480
    // TODO: Implement
}

void CCNode::onExitTransitionDidStart() {
    // 0xacbdf0
    // TODO: Implement
}

void CCNode::pauseSchedulerAndActions() {
    // 0xacd3b0
    // TODO: Implement
}

void CCNode::sortAllChildrenWithIndex() {
    // 0xacde64
    // TODO: Implement
}

void CCNode::convertTouchToNodeSpaceAR(cocos2d::CCTouch*) {
    // 0xacd770
    // TODO: Implement
}

void CCNode::nodeToParentTransformFast() {
    // 0xacc104
    // TODO: Implement
}

void CCNode::qsortAllChildrenWithIndex() {
    // 0xacdd58
    // TODO: Implement
}

void CCNode::resetGlobalOrderOfArrival() {
    // 0xacc654
    // TODO: Implement
}

void CCNode::resumeSchedulerAndActions() {
    // 0xacd294
    // TODO: Implement
}

void CCNode::onEnterTransitionDidFinish() {
    // 0xacadc0
    // TODO: Implement
}

void CCNode::removeFromParentAndCleanup(bool) {
    // 0xacaa24
    // TODO: Implement
}

void CCNode::scheduleUpdateWithPriority(int) {
    // 0xacd090
    // TODO: Implement
}

void CCNode::ignoreAnchorPointForPosition(bool) {
    // 0xaca95c
    // TODO: Implement
}

void CCNode::removeAllChildrenWithCleanup(bool) {
    // 0xacb2c0
    // TODO: Implement
}

void CCNode::scheduleUpdateWithPriorityLua(int, int) {
    // 0xacd100
    // TODO: Implement
}

void CCNode::isIgnoreAnchorPointForPosition() {
    // 0xaca954
    // TODO: Implement
}

void CCNode::draw() {
    // 0xacaba8
    // Render/draw logic
    // TODO: Implement rendering
}

void CCNode::init() {
    // 0xaca738
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void CCNode::visit() {
    // 0xacce40
    // TODO: Implement
}

void CCNode::create() {
    // 0xacc868
    CCNode* ret = new CCNode();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void CCNode::onExit() {
    // 0xacd3f4
    // TODO: Implement
}

void CCNode::update(float) {
    // 0xacc080
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void CCNode::cleanup() {
    // 0xacd1a8
    // TODO: Implement
}

void CCNode::getGrid() {
    // 0xaca90c
    // TODO: Implement
}

void CCNode::onEnter() {
    // 0xacd2d8
    // TODO: Implement
}

void CCNode::setGrid(cocos2d::CCGridBase*) {
    // 0xacae54
    // TODO: Implement
}

void CCNode::addChild(cocos2d::CCNode*) {
    // 0xaca9e0
    // TODO: Implement
}

void CCNode::addChild(cocos2d::CCNode*, int) {
    // 0xaca9c0
    // TODO: Implement
}

void CCNode::addChild(cocos2d::CCNode*, int, int) {
    // 0xacca7c
    // TODO: Implement
}

void CCNode::getScale() {
    // 0xaca850
    // TODO: Implement
}

void CCNode::getSkewX() {
    // 0xaca740
    // TODO: Implement
}

void CCNode::getSkewY() {
    // 0xaca75c
    // TODO: Implement
}

void CCNode::schedule(void (cocos2d::CCObject::*)(float)) {
    // 0xacd158
    // TODO: Implement
}

void CCNode::schedule(void (cocos2d::CCObject::*)(float), float) {
    // 0xacd168
    // TODO: Implement
}

void CCNode::schedule(void (cocos2d::CCObject::*)(float), float, unsigned int, float) {
    // 0xacd140
    // TODO: Implement
}

void CCNode::setScale(float) {
    // 0xaca858
    // TODO: Set m_scale
}

void CCNode::setScale(float, float) {
    // 0xaca870
    // TODO: Set m_scale
}

void CCNode::setSkewX(float) {
    // 0xaca748
    // TODO: Implement
}

void CCNode::setSkewY(float) {
    // 0xaca764
    // TODO: Implement
}

void CCNode::getCamera() {
    // 0xacb10c
    // TODO: Implement
}

void CCNode::getParent() {
    // 0xaca944
    // TODO: Implement
}

void CCNode::getScaleX() {
    // 0xaca888
    // TODO: Implement
}

void CCNode::getScaleY() {
    // 0xaca8a4
    // TODO: Implement
}

void CCNode::getZOrder() {
    // 0xaca778
    // TODO: Implement
}

void CCNode::isRunning() {
    // 0xaca93c
    // TODO: Implement
}

void CCNode::isVisible() {
    // 0xaca914
    // TODO: Implement
}

void CCNode::runAction(cocos2d::CCAction*) {
    // 0xaccfd8
    // TODO: Implement
}

void CCNode::setParent(cocos2d::CCNode*) {
    // 0xaca94c
    // TODO: Implement
}

void CCNode::setScaleX(float) {
    // 0xaca890
    // TODO: Set m_scaleX
}

void CCNode::setScaleY(float) {
    // 0xaca8ac
    // TODO: Set m_scaleY
}

void CCNode::setZOrder(int) {
    // 0xaca788
    // TODO: Implement
}

void CCNode::transform() {
    // 0xaccd5c
    // TODO: Implement
}

void CCNode::getComponent(char const*)) const {
    // 0xacd7e0
}

void CCNode::getContentSize()) const {
    // 0xaca934
}

void CCNode::getChildrenCount()) const {
    // 0xacaf08
}

} // namespace cocos2d
