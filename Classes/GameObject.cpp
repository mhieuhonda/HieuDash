// ============================================================
// GameObject.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GameObject.h"

GameObject* GameObject::create() {
    GameObject* ret = new GameObject();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

GameObject::~GameObject() {
    // 0x641e0c
    this->cleanup();
}

GameObject::~GameObject() {
    // 0x641cd8
    this->cleanup();
}

GameObject::~GameObject() {
    // 0x641cd8
    this->cleanup();
}

void GameObject::addToGroup(int) {
    // 0x646ab8
    // TODO: Implement
}

void GameObject::canReverse() {
    // 0x62082c
    // TODO: Implement
}

void GameObject::copyGroups(GameObject*) {
    // 0x646ba8
    // TODO: Implement
}

void GameObject::createGlow(std::string) {
    // 0x642278
    // TODO: Implement
}

void GameObject::firstSetup() {
    // 0x6207d0
    // TODO: Implement
}

void GameObject::getGroupID(int) {
    // 0x646b88
    // TODO: Implement
}

void GameObject::getRScaleX() {
    // 0x64047c
    // TODO: Implement
}

void GameObject::getRScaleY() {
    // 0x6404c8
    // TODO: Implement
}

void GameObject::groupColor(cocos2d::_ccColor3B const&, bool) {
    // 0x64a638
    // TODO: Implement
}

void GameObject::ignoreFade() {
    // 0x643fb0
    // TODO: Implement
}

void GameObject::removeGlow() {
    // 0x642b28
    // TODO: Implement
}

void GameObject::setOpacity(unsigned char) {
    // 0x64453c
    // TODO: Implement
}

void GameObject::setRScaleX(float) {
    // 0x6403a4
    // TODO: Set m_rScaleX
}

void GameObject::setRScaleY(float) {
    // 0x6403ec
    // TODO: Set m_rScaleY
}

void GameObject::setVisible(bool) {
    // 0x641070
    // TODO: Set m_visible
}

void GameObject::addRotation(float) {
    // 0x644184
    // TODO: Implement
}

void GameObject::addRotation(float, float) {
    // 0x644220
    // TODO: Implement
}

void GameObject::commonSetup() {
    // 0x643334
    // TODO: Implement
}

void GameObject::customSetup() {
    // 0x64df3c
    // TODO: Implement
}

void GameObject::getColorKey(bool, bool) {
    // 0x6568b8
    // TODO: Implement
}

void GameObject::ignoreEnter() {
    // 0x643fb8
    // TODO: Implement
}

void GameObject::makeVisible() {
    // 0x64494c
    // TODO: Implement
}

void GameObject::resetGroups() {
    // 0x646b80
    // TODO: Implement
}

void GameObject::resetObject() {
    // 0x647034
    // TODO: Implement
}

void GameObject::setPosition(cocos2d::CCPoint const&) {
    // 0x640c74
    // TODO: Set m_position
}

void GameObject::setRotation(float) {
    // 0x640db0
    // TODO: Set m_rotation
}

void GameObject::setStartPos(cocos2d::CCPoint) {
    // 0x640bac
    // TODO: Implement
}

void GameObject::shouldLockX() {
    // 0x643078
    // TODO: Implement
}

void GameObject::addEmptyGlow() {
    // 0x642a20
    // TODO: Implement
}

void GameObject::canBeOrdered() {
    // 0x62083c
    // TODO: Implement
}

void GameObject::colorForMode(int, bool) {
    // 0x64a810
    // TODO: Implement
}

void GameObject::getBallFrame(int) {
    // 0x647674
    // TODO: Implement
}

void GameObject::getBoxOffset() {
    // 0x647d64
    // TODO: Implement
}

void GameObject::getGlowFrame(std::string) {
    // 0x642ca4
    // TODO: Implement
}

void GameObject::getMainColor() {
    // 0x648400
    // TODO: Implement
}

void GameObject::isFacingDown() {
    // 0x64827c
    // TODO: Implement
}

void GameObject::isFacingLeft() {
    // 0x648334
    // TODO: Implement
}

void GameObject::selectObject(cocos2d::_ccColor3B) {
    // 0x640760
    // TODO: Implement
}

void GameObject::setGlowColor(cocos2d::_ccColor3B const&) {
    // 0x64167c
    // TODO: Set m_glowColor
}

void GameObject::setRRotation(float) {
    // 0x640304
    // TODO: Implement
}

void GameObject::setRotationX(float) {
    // 0x641944
    // TODO: Implement
}

void GameObject::setRotationY(float) {
    // 0x641a5c
    // TODO: Implement
}

void GameObject::addNewSlope01(bool) {
    // 0x64b774
    // TODO: Implement
}

void GameObject::addNewSlope02(bool) {
    // 0x64babc
    // TODO: Implement
}

void GameObject::canRotateFree() {
    // 0x646068
    // TODO: Implement
}

void GameObject::claimParticle() {
    // 0x6460bc
    // TODO: Implement
}

void GameObject::createWithKey(int) {
    // 0x6542a4
    // TODO: Implement
}

void GameObject::destroyObject() {
    // 0x6448f4
    // TODO: Implement
}

void GameObject::disableObject() {
    // 0x644974
    // TODO: Implement
}

void GameObject::getColorFrame(std::string) {
    // 0x642b9c
    // TODO: Implement
}

void GameObject::getColorIndex() {
    // 0x64b5a8
    // TODO: Implement
}

void GameObject::getObjectRect(float, float) {
    // 0x647e88
    // TODO: Implement
}

void GameObject::getObjectRect() {
    // 0x6402e0
    // TODO: Implement
}

void GameObject::getParentMode() {
    // 0x645770
    // TODO: Implement
}

void GameObject::getSaveString(GJBaseGameLayer*) {
    // 0x6571bc
    // Save to file/storage
    // TODO: Implement saving
}

void GameObject::getSlopeAngle() {
    // 0x645eb4
    // TODO: Implement
}

void GameObject::isColorObject() {
    // 0x64a108
    // TODO: Implement
}

void GameObject::isSpeedObject() {
    // 0x64b628
    // TODO: Implement
}

void GameObject::makeInvisible() {
    // 0x644920
    // TODO: Implement
}

void GameObject::restoreObject() {
    // 0x640518
    // TODO: Implement
}

void GameObject::setChildColor(cocos2d::_ccColor3B const&) {
    // 0x6406dc
    // TODO: Set m_childColor
}

void GameObject::slopeFloorTop() {
    // 0x6479d0
    // TODO: Implement
}

void GameObject::slopeWallLeft() {
    // 0x6479b0
    // TODO: Implement
}

void GameObject::triggerObject(GJBaseGameLayer*, int, std::vector<int> const*) {
    // 0x6207d4
    // TODO: Implement
}

void GameObject::activateObject() {
    // 0x6468fc
    // TODO: Implement
}

void GameObject::addColorSprite(std::string) {
    // 0x648660
    // TODO: Implement
}

void GameObject::addCustomChild(std::string, cocos2d::CCPoint, int) {
    // 0x6439cc
    // TODO: Implement
}

void GameObject::assignUniqueID() {
    // 0x64225c
    // TODO: Implement
}

void GameObject::belongsToGroup(int) {
    // 0x646c10
    // TODO: Implement
}

void GameObject::deselectObject() {
    // 0x6479a8
    // TODO: Implement
}

void GameObject::getGroupString() {
    // 0x656734
    // TODO: Implement
}

void GameObject::getObjectLabel() {
    // 0x620844
    // TODO: Implement
}

void GameObject::getObjectRect2(float, float) {
    // 0x6481d0
    // TODO: Implement
}

void GameObject::getOrientedBox() {
    // 0x647c40
    // TODO: Implement
}

void GameObject::getTextKerning() {
    // 0x62086c
    // TODO: Implement
}

void GameObject::isBasicTrigger() {
    // 0x64c1b0
    // TODO: Implement
}

void GameObject::isColorTrigger() {
    // 0x64b558
    // TODO: Implement
}

void GameObject::setAreaOpacity(float, float, int) {
    // 0x64444c
    // TODO: Implement
}

void GameObject::setGlowOpacity(unsigned char) {
    // 0x6444d4
    // TODO: Implement
}

void GameObject::setObjectColor(cocos2d::_ccColor3B const&) {
    // 0x641264
    // TODO: Set m_objectColor
}

void GameObject::setObjectLabel(cocos2d::CCLabelBMFont*) {
    // 0x62084c
    // TODO: Implement
}

void GameObject::spawnXPosition() {
    // 0x6207f8
    // TODO: Implement
}

void GameObject::updateHSVState() {
    // 0x6475c0
    // TODO: Implement
}

void GameObject::updateStartPos() {
    // 0x642dac
    // TODO: Implement
}

void GameObject::addToColorGroup(int) {
    // 0x646d6c
    // TODO: Implement
}

void GameObject::addToTempOffset(double, double) {
    // 0x6440b4
    // TODO: Implement
}

void GameObject::createWithFrame(char const*) {
    // 0x6434bc
    // TODO: Implement
}

void GameObject::didScaleXChange() {
    // 0x6443f4
    // TODO: Implement
}

void GameObject::didScaleYChange() {
    // 0x644420
    // TODO: Implement
}

void GameObject::duplicateValues(GameObject*) {
    // 0x64a3a4
    // TODO: Implement
}

void GameObject::getBoundingRect() {
    // 0x643fc0
    // TODO: Implement
}

void GameObject::getCustomZLayer() {
    // 0x646090
    // TODO: Implement
}

void GameObject::getLastPosition() {
    // 0x64ac60
    // TODO: Implement
}

void GameObject::getObjectRadius() {
    // 0x64b6a0
    // TODO: Implement
}

void GameObject::getObjectZLayer() {
    // 0x6460a8
    // TODO: Implement
}

void GameObject::getObjectZOrder() {
    // 0x6465dc
    // TODO: Implement
}

void GameObject::getRealPosition() {
    // 0x640c3c
    // TODO: Implement
}

void GameObject::groupOpacityMod() {
    // 0x647528
    // TODO: Implement
}

void GameObject::groupWasEnabled() {
    // 0x646ff8
    // TODO: Implement
}

void GameObject::initWithTexture(cocos2d::CCTexture2D*) {
    // 0x643994
    // TODO: Implement
}

void GameObject::isSpecialObject() {
    // 0x64b6e4
    // TODO: Implement
}

void GameObject::parentForZLayer(int, bool, int) {
    // 0x645ab4
    // TODO: Implement
}

void GameObject::playShineEffect() {
    // 0x6449c0
    // TODO: Implement
}

void GameObject::removeFromGroup(int) {
    // 0x640540
    // TODO: Implement
}

void GameObject::resetMoveOffset() {
    // 0x642fa0
    // TODO: Implement
}

void GameObject::setCustomZLayer(int) {
    // 0x646098
    // TODO: Implement
}

void GameObject::setLastPosition(cocos2d::CCPoint const&) {
    // 0x64ac68
    // TODO: Set m_lastPosition
}

void GameObject::setupPixelScale() {
    // 0x984340
    // TODO: Implement
}

void GameObject::setupSpriteSize() {
    // 0x64c2e8
    // TODO: Implement
}

void GameObject::unclaimParticle() {
    // 0x641204
    // TODO: Implement
}

void GameObject::updateBlendMode() {
    // 0x645a24
    // TODO: Implement
}

void GameObject::updateMainColor(cocos2d::_ccColor3B const&) {
    // 0x640994
    // TODO: Implement
}

void GameObject::updateMainColor() {
    // 0x64a918
    // TODO: Implement
}

void GameObject::addInternalChild(cocos2d::CCSprite*, std::string, cocos2d::CCPoint, int) {
    // 0x643e10
    // TODO: Implement
}

void GameObject::blendModeChanged() {
    // 0x620820
    // TODO: Implement
}

void GameObject::canMultiActivate(bool) {
    // 0x620860
    // TODO: Implement
}

void GameObject::deactivateObject(bool) {
    // 0x6414e8
    // TODO: Implement
}

void GameObject::dirtifyObjectPos() {
    // 0x644070
    // TODO: Implement
}

void GameObject::fastRotateObject(float) {
    // 0x647d08
    // TODO: Implement
}

void GameObject::getGroupDisabled() {
    // 0x646ff0
    // TODO: Implement
}

void GameObject::getMainColorMode() {
    // 0x64847c
    // TODO: Implement
}

void GameObject::getScalePosDelta() {
    // 0x645f58
    // TODO: Implement
}

void GameObject::groupWasDisabled() {
    // 0x647010
    // TODO: Implement
}

void GameObject::hasBeenActivated() {
    // 0x6207f0
    // TODO: Implement
}

void GameObject::isSettingsObject() {
    // 0x64be04
    // TODO: Implement
}

void GameObject::objectFromVector(std::vector<std::string>&, std::vector<void*>&, GJBaseGameLayer*, bool) {
    // 0x654db0
    // TODO: Implement
}

void GameObject::perspectiveFrame(char const*, int) {
    // 0x9847e4
    // TODO: Implement
}

void GameObject::resetColorGroups() {
    // 0x646e10
    // TODO: Implement
}

void GameObject::saveActiveColors() {
    // 0x64aab8
    // Save to file/storage
    // TODO: Implement saving
}

void GameObject::setMainColorMode(int) {
    // 0x64a008
    // TODO: Set m_mainColorMode
}

void GameObject::setupColorSprite(int, bool) {
    // 0x64aa74
    // TODO: Implement
}

void GameObject::shouldBlendColor(GJSpriteColor*, bool) {
    // 0x642fbc
    // TODO: Implement
}

void GameObject::triggerActivated(float) {
    // 0x6207dc
    // TODO: Implement
}

void GameObject::updateIsOriented() {
    // 0x647c78
    // TODO: Implement
}

void GameObject::activatedByPlayer(PlayerObject*) {
    // 0x6207e4
    // TODO: Implement
}

void GameObject::addNewSlope01Glow(bool) {
    // 0x64b8b4
    // TODO: Implement
}

void GameObject::addNewSlope02Glow(bool) {
    // 0x64bbfc
    // TODO: Implement
}

void GameObject::addToCustomScaleX(float) {
    // 0x6442e4
    // TODO: Implement
}

void GameObject::addToCustomScaleY(float) {
    // 0x64430c
    // TODO: Implement
}

void GameObject::addToOpacityGroup(int) {
    // 0x646f4c
    // TODO: Implement
}

void GameObject::createSpriteColor(int) {
    // 0x64325c
    // TODO: Implement
}

void GameObject::customObjectSetup(std::vector<std::string>&, std::vector<void*>&) {
    // 0x6207d8
    // TODO: Implement
}

void GameObject::dirtifyObjectRect() {
    // 0x644060
    // TODO: Implement
}

void GameObject::getObjectRotation() {
    // 0x640984
    // TODO: Implement
}

void GameObject::getSecondaryColor() {
    // 0x648408
    // TODO: Implement
}

void GameObject::hasSecondaryColor() {
    // 0x64a0f8
    // TODO: Implement
}

void GameObject::opacityModForMode(int, bool) {
    // 0x64a534
    // TODO: Implement
}

void GameObject::removeColorSprite() {
    // 0x642b6c
    // TODO: Implement
}

void GameObject::resetRScaleForced() {
    // 0x64428c
    // TODO: Implement
}

void GameObject::updateMainOpacity() {
    // 0x64a5ac
    // TODO: Implement
}

void GameObject::updateOrientedBox() {
    // 0x647fdc
    // TODO: Implement
}

void GameObject::updateStartValues() {
    // 0x642ea4
    // TODO: Implement
}

void GameObject::updateTextKerning(int) {
    // 0x620868
    // TODO: Implement
}

void GameObject::animationTriggered() {
    // 0x6207e0
    // TODO: Implement
}

void GameObject::canChangeMainColor() {
    // 0x648410
    // TODO: Implement
}

void GameObject::duplicateColorMode(GameObject*) {
    // 0x64a1d8
    // TODO: Implement
}

void GameObject::editorColorForMode(int) {
    // 0x647734
    // TODO: Implement
}

void GameObject::getHasRotateAction() {
    // 0x620858
    // TODO: Implement
}

void GameObject::getObjectDirection() {
    // 0x645f14
    // TODO: Implement
}

void GameObject::getOuterObjectRect() {
    // 0x64818c
    // TODO: Implement
}

void GameObject::isBasicEnterEffect(int) {
    // 0x64c2b4
    // TODO: Implement
}

void GameObject::isSpawnableTrigger() {
    // 0x64b160
    // TODO: Implement
}

void GameObject::isStoppableTrigger() {
    // 0x64b3f8
    // TODO: Implement
}

void GameObject::reorderColorSprite() {
    // 0x645c58
    // TODO: Implement
}

void GameObject::resetGroupDisabled() {
    // 0x647028
    // TODO: Implement
}

void GameObject::resetMainColorMode() {
    // 0x64a080
    // TODO: Implement
}

void GameObject::setObjectRectDirty(bool) {
    // 0x62087c
    // TODO: Implement
}

void GameObject::setupCustomSprites(std::string) {
    // 0x984ac4
    // TODO: Implement
}

void GameObject::transferObjectRect(cocos2d::CCRect&) {
    // 0x640288
    // TODO: Implement
}

void GameObject::updateCustomScaleX(float) {
    // 0x644334
    // TODO: Implement
}

void GameObject::updateCustomScaleY(float) {
    // 0x644394
    // TODO: Implement
}

void GameObject::addCustomBlackChild(std::string, float, bool) {
    // 0x643b30
    // TODO: Implement
}

void GameObject::addCustomColorChild(std::string) {
    // 0x643a9c
    // TODO: Implement
}

void GameObject::duplicateAttributes(GameObject*) {
    // 0x64a2c4
    // TODO: Implement
}

void GameObject::playPickupAnimation(cocos2d::CCSprite*, float, float, float, float) {
    // 0x9b2998
    // TODO: Implement
}

void GameObject::playPickupAnimation(cocos2d::CCSprite*, float, float, float, float, float, float, float, float, bool, float, float) {
    // 0x9b271c
    // TODO: Implement
}

void GameObject::quickUpdatePosition() {
    // 0x65b144
    // TODO: Implement
}

void GameObject::updateMainColorOnly() {
    // 0x64a958
    // TODO: Implement
}

void GameObject::updateParticleColor(cocos2d::_ccColor3B const&) {
    // 0x6405d4
    // TODO: Implement
}

void GameObject::usesFreezeAnimation() {
    // 0x9b25c4
    // TODO: Implement
}

void GameObject::addColorSpriteToSelf() {
    // 0x645b20
    // TODO: Implement
}

void GameObject::addInternalGlowChild(std::string, cocos2d::CCPoint) {
    // 0x643ee0
    // TODO: Implement
}

void GameObject::calculateOrientedBox() {
    // 0x647c00
    // TODO: Implement
}

void GameObject::canChangeCustomColor() {
    // 0x648444
    // TODO: Implement
}

void GameObject::createAndAddParticle(int, char const*, int, cocos2d::tCCPositionType) {
    // 0x644788
    // TODO: Implement
}

void GameObject::createGroupContainer(int) {
    // 0x6469ac
    // TODO: Implement
}

void GameObject::getObjectRectPointer() {
    // 0x644080
    // TODO: Implement
}

void GameObject::getObjectTextureRect() {
    // 0x641718
    // TODO: Implement
}

void GameObject::ignoreEditorDuration() {
    // 0x64be20
    // TODO: Implement
}

void GameObject::isConfigurablePortal() {
    // 0x64c23c
    // TODO: Implement
}

void GameObject::isSpecialSpawnObject() {
    // 0x620834
    // TODO: Implement
}

void GameObject::loadGroupsFromString(std::string) {
    // 0x647304
    // Load from file/storage
    // TODO: Implement loading
}

void GameObject::particleWasActivated() {
    // 0x640514
    // TODO: Implement
}

void GameObject::quickUpdatePosition2() {
    // 0x644168
    // TODO: Implement
}

void GameObject::setOrientedRectDirty(bool) {
    // 0x62088c
    // TODO: Implement
}

void GameObject::updateSecondaryColor(cocos2d::_ccColor3B const&) {
    // 0x6409b0
    // TODO: Implement
}

void GameObject::updateSecondaryColor() {
    // 0x64a9b4
    // TODO: Implement
}

void GameObject::usesSpecialAnimation() {
    // 0x9b26dc
    // TODO: Implement
}

void GameObject::addMainSpriteToParent(bool) {
    // 0x6465f0
    // TODO: Implement
}

void GameObject::canAllowMultiActivate() {
    // 0x620818
    // TODO: Implement
}

void GameObject::dontCountTowardsLimit() {
    // 0x64b764
    // TODO: Implement
}

void GameObject::getActiveColorForMode(int, bool) {
    // 0x64a6d8
    // TODO: Implement
}

void GameObject::getHasSyncedAnimation() {
    // 0x620850
    // TODO: Implement
}

void GameObject::getSecondaryColorMode() {
    // 0x6484c4
    // TODO: Implement
}

void GameObject::getUnmodifiedPosition() {
    // 0x6440d8
    // TODO: Implement
}

void GameObject::perspectiveColorFrame(char const*, int) {
    // 0x9849cc
    // TODO: Implement
}

void GameObject::playDestroyObjectAnim(GJBaseGameLayer*) {
    // 0x9b2ce4
    // TODO: Implement
}

void GameObject::setSecondaryColorMode(int) {
    // 0x64a044
    // TODO: Set m_secondaryColorMode
}

void GameObject::updateCustomColorType(short) {
    // 0x64a604
    // TODO: Implement
}

void GameObject::updateParticleOpacity(unsigned char) {
    // 0x641b10
    // TODO: Implement
}

void GameObject::addColorSpriteToParent(bool) {
    // 0x646700
    // TODO: Implement
}

void GameObject::commonInteractiveSetup() {
    // 0x64854c
    // TODO: Implement
}

void GameObject::getRelativeSpriteColor(int) {
    // 0x64a178
    // TODO: Implement
}

void GameObject::shouldDrawEditorHitbox() {
    // 0x6409cc
    // Render/draw logic
    // TODO: Implement rendering
}

void GameObject::updateSecondaryOpacity() {
    // 0x64a5d8
    // TODO: Implement
}

void GameObject::canChangeSecondaryColor() {
    // 0x648424
    // TODO: Implement
}

void GameObject::determineSlopeDirection() {
    // 0x645c5c
    // TODO: Implement
}

void GameObject::resetSecondaryColorMode() {
    // 0x64a0bc
    // TODO: Implement
}

void GameObject::setDefaultMainColorMode(int) {
    // 0x64850c
    // TODO: Set m_defaultMainColorMode
}

void GameObject::shouldNotHideAnimFreeze() {
    // 0x9b26cc
    // TODO: Implement
}

void GameObject::shouldShowPickupEffects() {
    // 0x9b2a1c
    // TODO: Implement
}

void GameObject::updateObjectEditorColor() {
    // 0x64786c
    // TODO: Implement
}

void GameObject::editorColorForCustomMode(int) {
    // 0x6476a4
    // TODO: Implement
}

void GameObject::hasBeenActivatedByPlayer(PlayerObject*) {
    // 0x6207e8
    // TODO: Implement
}

void GameObject::isEditorSpawnableTrigger() {
    // 0x64aee8
    // TODO: Implement
}

void GameObject::updateSecondaryColorOnly() {
    // 0x64aa1c
    // TODO: Implement
}

void GameObject::createColorGroupContainer(int) {
    // 0x646c60
    // TODO: Implement
}

void GameObject::updateMainParticleOpacity(unsigned char) {
    // 0x620824
    // TODO: Implement
}

void GameObject::updateUnmodifiedPositions() {
    // 0x644128
    // TODO: Implement
}

void GameObject::spawnDefaultPickupParticle(GJBaseGameLayer*) {
    // 0x9b2a90
    // TODO: Implement
}

void GameObject::addInternalCustomColorChild(std::string, cocos2d::CCPoint, int) {
    // 0x643d38
    // TODO: Implement
}

void GameObject::createOpacityGroupContainer(int) {
    // 0x646e40
    // TODO: Implement
}

void GameObject::setDefaultSecondaryColorMode(int) {
    // 0x648620
    // TODO: Set m_defaultSecondaryColorMode
}

void GameObject::updateSecondaryParticleOpacity(unsigned char) {
    // 0x620828
    // TODO: Implement
}

void GameObject::init(char const*) {
    // 0x64347c
    bool ret = cocos2d::CCSprite::init() if "cocos2d::CCSprite" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameObject::update(float) {
    // 0x640284
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void GameObject::addGlow(std::string) {
    // 0x642318
    // TODO: Implement
}

void GameObject::isFlipX() {
    // 0x640394
    // TODO: Implement
}

void GameObject::isFlipY() {
    // 0x64039c
    // TODO: Implement
}

void GameObject::setType(GameObjectType) {
    // 0x62089c
    // TODO: Implement
}

void GameObject::resetMID() {
    // 0x64224c
    // TODO: Implement
}

void GameObject::setFlipX(bool) {
    // 0x6415e4
    // TODO: Implement
}

void GameObject::setFlipY(bool) {
    // 0x641630
    // TODO: Implement
}

void GameObject::setScale(float) {
    // 0x640fe0
    // TODO: Set m_scale
}

void GameObject::isTrigger() {
    // 0x64ac70
    // TODO: Implement
}

void GameObject::setRScale(float) {
    // 0x640434
    // TODO: Set m_rScale
}

void GameObject::setScaleX(float) {
    // 0x640ec0
    // TODO: Set m_scaleX
}

void GameObject::setScaleY(float) {
    // 0x640f50
    // TODO: Set m_scaleY
}

void GameObject::slopeYPos(cocos2d::CCRect) {
    // 0x647b2c
    // TODO: Implement
}

void GameObject::slopeYPos(GameObject*) {
    // 0x647b8c
    // TODO: Implement
}

void GameObject::slopeYPos(float) {
    // 0x6479f4
    // TODO: Implement
}

void GameObject::getStartPos()) const {
    // 0x620b0c
}

void GameObject::getObjectRectDirty()) const {
    // 0x620874
}

void GameObject::getOrientedRectDirty()) const {
    // 0x620884
}

void GameObject::getType()) const {
    // 0x620894
}

