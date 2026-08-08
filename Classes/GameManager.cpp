// ============================================================
// GameManager.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "GameManager.h"

GameManager* GameManager::create() {
    GameManager* ret = new GameManager();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

GameManager::~GameManager() {
    // 0x5ef45c
    this->cleanup();
}

GameManager::~GameManager() {
    // 0x5eef14
    this->cleanup();
}

GameManager::~GameManager() {
    // 0x5eef14
    this->cleanup();
}

void GameManager::addToGJLog(cocos2d::CCString*) {
    // 0x5edc78
    // TODO: Implement
}

void GameManager::clearGJLog() {
    // 0x5edc80
    // TODO: Implement
}

void GameManager::dataLoaded(DS_Dictionary*) {
    // 0x5fa87c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::joinReddit() {
    // 0x5eb598
    // TODO: Implement
}

void GameManager::keyForIcon(int, int) {
    // 0x5eba64
    // TODO: Implement
}

void GameManager::loadGround(int) {
    // 0x5ec260
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::printGJLog() {
    // 0x5edc7c
    // TODO: Implement
}

void GameManager::reloadMenu() {
    // 0x5e7fe8
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::reorderKey(int, bool) {
    // 0x5ed9bc
    // TODO: Implement
}

void GameManager::subYouTube() {
    // 0x5eb3a0
    // TODO: Implement
}

void GameManager::tryCacheAd() {
    // 0x5eae58
    // TODO: Implement
}

void GameManager::unloadIcon(int, int, int) {
    // 0x5fc2d4
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::unlockIcon(int, IconType) {
    // 0x5f2968
    // TODO: Implement
}

void GameManager::colorForIdx(int) {
    // 0x5ea1b0
    // TODO: Implement
}

void GameManager::colorForPos(int) {
    // 0x5eac4c
    // TODO: Implement
}

void GameManager::doQuickSave() {
    // 0x5ee38c
    // Save to file/storage
    // TODO: Implement saving
}

void GameManager::fadeInMusic(std::string) {
    // 0x5e8c54
    // TODO: Implement
}

void GameManager::getFontFile(int) {
    // 0x5ebbdc
    // TODO: Implement
}

void GameManager::getGTexture(int) {
    // 0x5ec644
    // TODO: Implement
}

void GameManager::joinDiscord() {
    // 0x5eb4f0
    // TODO: Implement
}

void GameManager::resumeAudio() {
    // 0x5e7f24
    // TODO: Implement
}

void GameManager::saveAdTimer() {
    // 0x5eadd8
    // Save to file/storage
    // TODO: Implement saving
}

void GameManager::sharedState() {
    // 0x5ef480
    // TODO: Implement
}

void GameManager::startUpdate() {
    // 0x5e8988
    // TODO: Implement
}

void GameManager::unloadIcons(int) {
    // 0x5fce2c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::unlockColor(int, UnlockType) {
    // 0x5f34d4
    // TODO: Implement
}

void GameManager::updateMusic() {
    // 0x5eb1d4
    // TODO: Implement
}

void GameManager::countForType(IconType) {
    // 0x5eb904
    // TODO: Implement
}

void GameManager::encodeDataTo(DS_Dictionary*) {
    // 0x5fef9c
    // TODO: Implement
}

void GameManager::followTwitch() {
    // 0x5eb448
    // TODO: Implement
}

void GameManager::getBGTexture(int) {
    // 0x5ec5ac
    // TODO: Implement
}

void GameManager::getMGTexture(int) {
    // 0x5ec5f8
    // TODO: Implement
}

void GameManager::isIconLoaded(int, int) {
    // 0x5f1a64
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::likeFacebook() {
    // 0x5eb250
    // TODO: Implement
}

void GameManager::resetAdTimer() {
    // 0x5eadb8
    // TODO: Implement
}

void GameManager::safePopScene() {
    // 0x5ee3bc
    // TODO: Implement
}

void GameManager::followTwitter() {
    // 0x5eb2f8
    // TODO: Implement
}

void GameManager::itemPurchased(char const*) {
    // 0x5ea1a0
    // TODO: Implement
}

void GameManager::loadIconAsync(int, int, int, cocos2d::CCObject*) {
    // 0x5fe57c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::playMenuMusic() {
    // 0x5efd84
    // TODO: Implement
}

void GameManager::resetAllIcons() {
    // 0x5eda18
    // TODO: Implement
}

void GameManager::videoAdHidden() {
    // 0x5eafc4
    // TODO: Implement
}

void GameManager::videoAdShowed() {
    // 0x5eaf70
    // TODO: Implement
}

void GameManager::checkUsedIcons() {
    // 0x5f2e20
    // TODO: Implement
}

void GameManager::getFontTexture(int) {
    // 0x5ebc3c
    // TODO: Implement
}

void GameManager::getNextUsedKey(int, bool) {
    // 0x5ed908
    // TODO: Implement
}

void GameManager::isIconUnlocked(int, IconType) {
    // 0x5f2804
    // TODO: Implement
}

void GameManager::levelIsPremium(int, int) {
    // 0x5ea1a4
    // TODO: Implement
}

void GameManager::loadBackground(int) {
    // 0x5ebe14
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::loadDPadLayout(int, bool) {
    // 0x5f024c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::playSFXTrigger(SFXTriggerGameObject*) {
    // 0x5e8e0c
    // TODO: Implement
}

void GameManager::reloadAllStep2() {
    // 0x5eed2c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::reloadAllStep3() {
    // 0x5e8018
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::reloadAllStep4() {
    // 0x5e7ebc
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::reloadAllStep5() {
    // 0x5e80dc
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::saveDPadLayout(int, bool) {
    // 0x5ffad4
    // Save to file/storage
    // TODO: Implement saving
}

void GameManager::shortenAdTimer(float) {
    // 0x5eadc4
    // TODO: Implement
}

void GameManager::showMainMenuAd() {
    // 0x5eadb0
    // TODO: Implement
}

void GameManager::addIconDelegate(cocos2d::CCObject*, int) {
    // 0x5f2070
    // TODO: Implement
}

void GameManager::fadeInMenuMusic() {
    // 0x5f004c
    // TODO: Implement
}

void GameManager::getGameVariable(char const*) {
    // 0x5ec9dc
    // TODO: Implement
}

void GameManager::isColorUnlocked(int, UnlockType) {
    // 0x5f2cf0
    // TODO: Implement
}

void GameManager::loadDeathEffect(int) {
    // 0x5ebc9c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::loadGroundAsync(int) {
    // 0x5ec37c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::openEditorGuide() {
    // 0x5eb640
    // TODO: Implement
}

void GameManager::queueReloadMenu() {
    // 0x5ee41c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::setGameVariable(char const*, bool) {
    // 0x5ec690
    // TODO: Implement
}

void GameManager::unlockedPremium() {
    // 0x5ea19c
    // TODO: Implement
}

void GameManager::updateCustomFPS() {
    // 0x5f1340
    // TODO: Implement
}

void GameManager::addGameAnimation(int, int, float, std::string, std::string, int) {
    // 0x9b3c0c
    // TODO: Implement
}

void GameManager::didExitPlayscene() {
    // 0x5f0fe4
    // TODO: Implement
}

void GameManager::getIconRequestID() {
    // 0x5ebb34
    // TODO: Implement
}

void GameManager::getMenuMusicFile() {
    // 0x5e89cc
    // TODO: Implement
}

void GameManager::loadMiddleground(int) {
    // 0x5ebf4c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::recountUserStats(std::string) {
    // 0x5f9b54
    // TODO: Implement
}

void GameManager::resetAchievement(std::string) {
    // 0x5f42f8
    // TODO: Implement
}

void GameManager::resetCoinUnlocks() {
    // 0x5f4464
    // TODO: Implement
}

void GameManager::resolutionForKey(int) {
    // 0x5ee54c
    // TODO: Implement
}

void GameManager::sheetNameForIcon(int, int) {
    // 0x5fbf04
    // TODO: Implement
}

void GameManager::showInterstitial() {
    // 0x5eae50
    // TODO: Implement
}

void GameManager::switchScreenMode(bool, bool, bool, bool) {
    // 0x5ee528
    // TODO: Implement
}

void GameManager::unloadBackground() {
    // 0x5ebd78
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::activeIconForType(IconType) {
    // 0x5eb81c
    // TODO: Implement
}

void GameManager::iconAndTypeForKey(int, int&, int&) {
    // 0x5eba78
    // TODO: Implement
}

void GameManager::loadVideoSettings() {
    // 0x5f07f0
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::logLoadedIconInfo() {
    // 0x5f1b68
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::resetDPadSettings(bool) {
    // 0x5ee048
    // TODO: Implement
}

void GameManager::returnToLastScene(GJGameLevel*) {
    // 0x5f1028
    // TODO: Implement
}

void GameManager::verifyCoinUnlocks() {
    // 0x5f50ac
    // TODO: Implement
}

void GameManager::verifyStarUnlocks() {
    // 0x5e9f14
    // TODO: Implement
}

void GameManager::verifySyncedCoins() {
    // 0x5e9f7c
    // TODO: Implement
}

void GameManager::addNewCustomObject(std::string) {
    // 0x5ed7d0
    // TODO: Implement
}

void GameManager::claimItemsResponse(std::string) {
    // 0x5ea1ac
    // TODO: Implement
}

void GameManager::dpadConfigToString(UIButtonConfig&) {
    // 0x5feae0
    // TODO: Implement
}

void GameManager::eventUnlockFeature(char const*) {
    // 0x5ea198
    // TODO: Implement
}

void GameManager::framesForAnimation(int) {
    // 0x9be840
    // TODO: Implement
}

void GameManager::getIntGameVariable(char const*) {
    // 0x5ed06c
    // TODO: Implement
}

void GameManager::loadDpadFromString(UIButtonConfig&, std::string) {
    // 0x5eea70
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::removeCustomObject(int) {
    // 0x5ed5e0
    // TODO: Implement
}

void GameManager::removeIconDelegate(int) {
    // 0x5eb98c
    // TODO: Implement
}

void GameManager::resumeAudioDelayed() {
    // 0x5eaff4
    // TODO: Implement
}

void GameManager::setIntGameVariable(char const*, int) {
    // 0x5ecf2c
    // TODO: Implement
}

void GameManager::toggleGameVariable(char const*) {
    // 0x5f0160
    // TODO: Implement
}

void GameManager::loadBackgroundAsync(int) {
    // 0x5ebeb4
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::prepareDPadSettings() {
    // 0x5edc88
    // TODO: Implement
}

void GameManager::rewardedVideoHidden() {
    // 0x5e83d0
    // TODO: Implement
}

void GameManager::setupGameAnimations() {
    // 0x9b3f54
    // TODO: Implement
}

void GameManager::switchCustomObjects(int, int) {
    // 0x5ed2d0
    // TODO: Implement
}

void GameManager::tryShowInterstitial(int, int, int) {
    // 0x5eaf30
    // TODO: Implement
}

void GameManager::accountStatusChanged() {
    // 0x5eda08
    // TODO: Implement
}

void GameManager::canShowRewardedVideo() {
    // 0x5eb070
    // TODO: Implement
}

void GameManager::completedAchievement(std::string) {
    // 0x5f35f8
    // TODO: Implement
}

void GameManager::generateSecretNumber() {
    // 0x5f01a4
    // TODO: Implement
}

void GameManager::getPracticeMusicFile() {
    // 0x5e8b10
    // TODO: Implement
}

void GameManager::iconTypeToUnlockType(IconType) {
    // 0x5e92d4
    // TODO: Implement
}

void GameManager::unlockTypeToIconType(int) {
    // 0x5e92f0
    // TODO: Implement
}

void GameManager::addDuplicateLastFrame(int) {
    // 0x9be870
    // TODO: Implement
}

void GameManager::finishedLoadingGAsync(int) {
    // 0x5ec484
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::frameTimeForAnimation(int) {
    // 0x9bebd4
    // TODO: Implement
}

void GameManager::loadMiddlegroundAsync(int) {
    // 0x5ec044
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::stringForCustomObject(int) {
    // 0x5ed18c
    // TODO: Implement
}

void GameManager::finishedLoadingBGAsync(cocos2d::CCObject*) {
    // 0x5e7f54
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::finishedLoadingGAsync1(cocos2d::CCObject*) {
    // 0x5ec50c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::finishedLoadingGAsync2(cocos2d::CCObject*) {
    // 0x5ec55c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::finishedLoadingMGAsync(int) {
    // 0x5ec128
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::getNextUniqueObjectKey() {
    // 0x5ed734
    // TODO: Implement
}

void GameManager::shouldShowInterstitial(int, int, int) {
    // 0x5eaf28
    // TODO: Implement
}

void GameManager::showInterstitialForced() {
    // 0x5eaf68
    // TODO: Implement
}

void GameManager::addCustomAnimationFrame(int, int, std::string, std::string) {
    // 0x9b3e44
    // TODO: Implement
}

void GameManager::finishedLoadingMGAsync1(cocos2d::CCObject*) {
    // 0x5ec1b0
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::finishedLoadingMGAsync2(cocos2d::CCObject*) {
    // 0x5ec200
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::getUnlockForAchievement(std::string, int&, UnlockType&) {
    // 0x5e9314
    // TODO: Implement
}

void GameManager::groundHasSecondaryColor(int) {
    // 0x5ec250
    // TODO: Implement
}

void GameManager::reportAchievementWithID(char const*, int, bool) {
    // 0x5f3748
    // TODO: Implement
}

void GameManager::rewardedVideoAdFinished(int) {
    // 0x5eb1b0
    // TODO: Implement
}

void GameManager::calculateBaseKeyForIcons() {
    // 0x5f1c8c
    // TODO: Implement
}

void GameManager::defaultFrameForAnimation(int) {
    // 0x9becb8
    // TODO: Implement
}

void GameManager::finishedLoadingIconAsync(cocos2d::CCObject*) {
    // 0x5fdd20
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::reportPercentageForLevel(int, int, bool) {
    // 0x5f3880
    // TODO: Implement
}

void GameManager::syncPlatformAchievements() {
    // 0x5eb670
    // TODO: Implement
}

void GameManager::verifyAchievementUnlocks() {
    // 0x5f3ff8
    // TODO: Implement
}

void GameManager::getOrderedCustomObjectKeys() {
    // 0x5ed6e8
    // TODO: Implement
}

void GameManager::rewardedVideoHiddenDelayed() {
    // 0x5eb134
    // TODO: Implement
}

void GameManager::checkSteamAchievementUnlock() {
    // 0x5e9f10
    // TODO: Implement
}

void GameManager::applicationDidEnterBackground() {
    // 0x5ee3b8
    // TODO: Implement
}

void GameManager::applicationWillEnterForeground() {
    // 0x5f3da0
    // TODO: Implement
}

void GameManager::init() {
    // 0x5f1e20
    bool ret = cocos2d::CCNode::init() if "cocos2d::CCNode" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void GameManager::getUGV(char const*) {
    // 0x5ecd6c
    // TODO: Implement
}

void GameManager::setUGV(char const*, bool) {
    // 0x5ecb9c
    // TODO: Implement
}

void GameManager::update(float) {
    // 0x5e7e94
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void GameManager::iconKey(int, IconType) {
    // 0x5f2574
    // TODO: Implement
}

void GameManager::colorKey(int, UnlockType) {
    // 0x5f2b78
    // TODO: Implement
}

void GameManager::loadFont(int) {
    // 0x5ebb48
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::loadIcon(int, int, int) {
    // 0x5fd20c
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::lockIcon(int, IconType) {
    // 0x5f2a8c
    // TODO: Implement
}

void GameManager::rateGame() {
    // 0x5eb218
    // TODO: Implement
}

void GameManager::firstLoad() {
    // 0x5f0838
    // Load from file/storage
    // TODO: Implement loading
}

void GameManager::lockColor(int, UnlockType) {
    // 0x5f420c
    // TODO: Implement
}

void GameManager::reloadAll(bool, bool, bool, bool, bool) {
    // 0x5ee488
    // Load from file/storage
    // TODO: Implement loading
}

