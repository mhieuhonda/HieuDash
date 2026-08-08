// ============================================================
// FMODAudioEngine.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "FMODAudioEngine.h"

FMODAudioEngine* FMODAudioEngine::create() {
    FMODAudioEngine* ret = new FMODAudioEngine();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

FMODAudioEngine::~FMODAudioEngine() {
    // 0x5aec14
    this->cleanup();
}

FMODAudioEngine::~FMODAudioEngine() {
    // 0x5ae958
    this->cleanup();
}

FMODAudioEngine::~FMODAudioEngine() {
    // 0x5ae958
    this->cleanup();
}

void FMODAudioEngine::pauseMusic(int) {
    // 0x5b2cf8
    // TODO: Implement
}

void FMODAudioEngine::playEffect(std::string) {
    // 0x5b8bc8
    // TODO: Implement
}

void FMODAudioEngine::playEffect(std::string, float, float, float) {
    // 0x5b8a74
    // TODO: Implement
}

void FMODAudioEngine::startMusic(int, int, int, int, bool, int, bool, bool) {
    // 0x5b3e18
    // TODO: Implement
}

void FMODAudioEngine::fadeInMusic(float, int) {
    // 0x5b2d40
    // TODO: Implement
}

void FMODAudioEngine::pauseEffect(unsigned int) {
    // 0x5ab888
    // TODO: Implement
}

void FMODAudioEngine::pitchForIdx(int) {
    // 0x5ab720
    // TODO: Implement
}

void FMODAudioEngine::printResult(FMOD_RESULT) {
    // 0x5ac47c
    // TODO: Implement
}

void FMODAudioEngine::resumeAudio() {
    // 0x5ab47c
    // TODO: Implement
}

void FMODAudioEngine::resumeMusic(int) {
    // 0x5b2d1c
    // TODO: Implement
}

void FMODAudioEngine::stopChannel(FMOD::Channel*, bool, float) {
    // 0x5b7288
    // TODO: Implement
}

void FMODAudioEngine::stopChannel(int) {
    // 0x5b76c8
    // TODO: Implement
}

void FMODAudioEngine::stopChannel(int, AudioTargetType, bool, float) {
    // 0x5b7418
    // TODO: Implement
}

void FMODAudioEngine::storeEffect(FMOD::Sound*, std::string) {
    // 0x5b4688
    // TODO: Implement
}

void FMODAudioEngine::createStream(std::string) {
    // 0x5abdb4
    // TODO: Implement
}

void FMODAudioEngine::fadeOutMusic(float, int) {
    // 0x5b2e2c
    // TODO: Implement
}

void FMODAudioEngine::getMusicTime(int) {
    // 0x5b2b60
    // TODO: Implement
}

void FMODAudioEngine::isSoundReady(FMOD::Sound*) {
    // 0x5abc80
    // TODO: Implement
}

void FMODAudioEngine::preloadMusic(std::string, bool, int) {
    // 0x5b64b8
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::resumeEffect(unsigned int) {
    // 0x5ab88c
    // TODO: Implement
}

void FMODAudioEngine::sharedEngine() {
    // 0x5adcac
    // TODO: Implement
}

void FMODAudioEngine::stopAllMusic(bool) {
    // 0x5b1134
    // TODO: Implement
}

void FMODAudioEngine::testFunction(int) {
    // 0x5ab71c
    // TODO: Implement
}

void FMODAudioEngine::unloadEffect(std::string) {
    // 0x5abaf4
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::updateReverb(FMODReverbPreset, bool) {
    // 0x5aab64
    // TODO: Implement
}

void FMODAudioEngine::clearAllAudio() {
    // 0x5b1364
    // TODO: Implement
}

void FMODAudioEngine::getFMODStatus(int) {
    // 0x5ac1bc
    // TODO: Implement
}

void FMODAudioEngine::pauseAllAudio() {
    // 0x5ab4cc
    // TODO: Implement
}

void FMODAudioEngine::pauseAllMusic(bool) {
    // 0x5b1088
    // TODO: Implement
}

void FMODAudioEngine::preloadEffect(std::string) {
    // 0x5b4a0c
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::updateChannel(int, AudioTargetType, AudioModType, float, float) {
    // 0x5b41d8
    // TODO: Implement
}

void FMODAudioEngine::channelStopped(FMOD::Channel*, bool) {
    // 0x5b5a08
    // TODO: Implement
}

void FMODAudioEngine::enableMetering() {
    // 0x5ab6d8
    // TODO: Implement
}

void FMODAudioEngine::getActiveMusic(int) {
    // 0x5b374c
    // TODO: Implement
}

void FMODAudioEngine::getMusicTimeMS(int) {
    // 0x5b2a50
    // TODO: Implement
}

void FMODAudioEngine::isEffectLoaded(std::string) {
    // 0x5af05c
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::isMusicPlaying(std::string, int) {
    // 0x5b383c
    // TODO: Implement
}

void FMODAudioEngine::isMusicPlaying(int) {
    // 0x5b2c98
    // TODO: Implement
}

void FMODAudioEngine::lengthForSound(std::string) {
    // 0x5b52b0
    // TODO: Implement
}

void FMODAudioEngine::loadAudioState(FMODAudioState&) {
    // 0x5b8104
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::resumeAllAudio() {
    // 0x5ab518
    // TODO: Implement
}

void FMODAudioEngine::resumeAllMusic() {
    // 0x5b10e8
    // TODO: Implement
}

void FMODAudioEngine::reverbToString(FMODReverbPreset) {
    // 0x5ab074
    // TODO: Implement
}

void FMODAudioEngine::saveAudioState(FMODAudioState&) {
    // 0x5b0dd0
    // Save to file/storage
    // TODO: Implement saving
}

void FMODAudioEngine::setMusicTimeMS(unsigned int, bool, int) {
    // 0x5b3b00
    // TODO: Implement
}

void FMODAudioEngine::stopAllEffects() {
    // 0x5ab8a8
    // TODO: Implement
}

void FMODAudioEngine::stopAndGetFade(FMOD::Channel*) {
    // 0x5ab75c
    // TODO: Implement
}

void FMODAudioEngine::swapMusicIndex(int, int) {
    // 0x5b5d8c
    // TODO: Implement
}

void FMODAudioEngine::updateMetering() {
    // 0x5ab704
    // TODO: Implement
}

void FMODAudioEngine::disableMetering() {
    // 0x5ab6fc
    // TODO: Implement
}

void FMODAudioEngine::getChannelGroup(int, bool) {
    // 0x5b0268
    // TODO: Implement
}

void FMODAudioEngine::pauseAllEffects() {
    // 0x5ab890
    // TODO: Implement
}

void FMODAudioEngine::playEffectAsync(std::string) {
    // 0x5b8928
    // TODO: Implement
}

void FMODAudioEngine::queuePlayEffect(std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, int, float, int) {
    // 0x5b2394
    // TODO: Implement
}

void FMODAudioEngine::queueStartMusic(std::string, float, float, float, bool, int, int, int, int, int, bool, int, bool, bool) {
    // 0x5bb4b4
    // TODO: Implement
}

void FMODAudioEngine::registerChannel(FMOD::Channel*, int, int) {
    // 0x5b1728
    // TODO: Implement
}

void FMODAudioEngine::setChannelPitch(int, AudioTargetType, float) {
    // 0x5b3524
    // TODO: Implement
}

void FMODAudioEngine::channelLinkSound(int, FMODSound*) {
    // 0x5b1b68
    // TODO: Implement
}

void FMODAudioEngine::countActiveMusic() {
    // 0x5ab560
    // TODO: Implement
}

void FMODAudioEngine::getEffectsVolume() {
    // 0x5abc2c
    // TODO: Implement
}

void FMODAudioEngine::getMeteringValue() {
    // 0x5ab714
    // TODO: Implement
}

void FMODAudioEngine::getMusicLengthMS(int) {
    // 0x5b3018
    // TODO: Implement
}

void FMODAudioEngine::getNextChannelID() {
    // 0x5ab748
    // TODO: Implement
}

void FMODAudioEngine::loadAndPlayMusic(std::string, unsigned int, int) {
    // 0x5b6c6c
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::resumeAllEffects() {
    // 0x5ab89c
    // TODO: Implement
}

void FMODAudioEngine::setChannelVolume(int, AudioTargetType, float) {
    // 0x5b3214
    // TODO: Implement
}

void FMODAudioEngine::setEffectsVolume(float) {
    // 0x5abc34
    // TODO: Implement
}

void FMODAudioEngine::setupAudioEngine() {
    // 0x5aad64
    // TODO: Implement
}

void FMODAudioEngine::stopChannelTween(int, AudioTargetType, AudioModType) {
    // 0x5b3d54
    // TODO: Implement
}

void FMODAudioEngine::unloadAllEffects() {
    // 0x5ba94c
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::getMusicChannelID(int) {
    // 0x5b313c
    // TODO: Implement
}

void FMODAudioEngine::getTweenContainer(AudioTargetType) {
    // 0x5ab6b4
    // TODO: Implement
}

void FMODAudioEngine::isChannelStopping(int) {
    // 0x5ab868
    // TODO: Implement
}

void FMODAudioEngine::stopChannelTweens(int, AudioTargetType) {
    // 0x5b3dd4
    // TODO: Implement
}

void FMODAudioEngine::stopMusicNotInSet(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> >&) {
    // 0x5ba50c
    // TODO: Implement
}

void FMODAudioEngine::unregisterChannel(int) {
    // 0x5b5628
    // TODO: Implement
}

void FMODAudioEngine::updateQueuedMusic() {
    // 0x5baddc
    // TODO: Implement
}

void FMODAudioEngine::channelForUniqueID(int) {
    // 0x5b1700
    // TODO: Implement
}

void FMODAudioEngine::channelUnlinkSound(int) {
    // 0x5b52f4
    // TODO: Implement
}

void FMODAudioEngine::countActiveEffects() {
    // 0x5ab690
    // TODO: Implement
}

void FMODAudioEngine::playEffectAdvanced(std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int) {
    // 0x5b76d8
    // TODO: Implement
}

void FMODAudioEngine::preloadEffectAsync(std::string) {
    // 0x5b2040
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::stopAndRemoveMusic(int) {
    // 0x5b6210
    // TODO: Implement
}

void FMODAudioEngine::triggerQueuedMusic(FMODQueuedMusic) {
    // 0x5b635c
    // TODO: Implement
}

void FMODAudioEngine::activateQueuedMusic(int) {
    // 0x5bb2e0
    // TODO: Implement
}

void FMODAudioEngine::channelForChannelID(int) {
    // 0x5b0d28
    // TODO: Implement
}

void FMODAudioEngine::setChannelVolumeMod(int, AudioTargetType, float) {
    // 0x5b339c
    // TODO: Implement
}

void FMODAudioEngine::updateChannelTweens(float) {
    // 0x5b35f8
    // TODO: Implement
}

void FMODAudioEngine::updateQueuedEffects() {
    // 0x5ba1dc
    // TODO: Implement
}

void FMODAudioEngine::waitUntilSoundReady(FMOD::Sound*) {
    // 0x5abd04
    // TODO: Implement
}

void FMODAudioEngine::channelIDForUniqueID(int) {
    // 0x5b16bc
    // TODO: Implement
}

void FMODAudioEngine::releaseRemovedSounds() {
    // 0x5ac078
    // TODO: Implement
}

void FMODAudioEngine::updateBackgroundFade() {
    // 0x5abb38
    // TODO: Implement
}

void FMODAudioEngine::fadeInBackgroundMusic(float) {
    // 0x5abaf8
    // TODO: Implement
}

void FMODAudioEngine::getActiveMusicChannel(int) {
    // 0x5b2b84
    // TODO: Implement
}

void FMODAudioEngine::isAnyPersistentPlaying() {
    // 0x5abc48
    // TODO: Implement
}

void FMODAudioEngine::updateTemporaryEffects() {
    // 0x5baadc
    // TODO: Implement
}

void FMODAudioEngine::getBackgroundMusicVolume() {
    // 0x5abc04
    // TODO: Implement
}

void FMODAudioEngine::isPersistentMatchPlaying(std::string, int) {
    // 0x5b399c
    // TODO: Implement
}

void FMODAudioEngine::setBackgroundMusicVolume(float) {
    // 0x5abc0c
    // TODO: Implement
}

void FMODAudioEngine::queuedEffectFinishedLoading(std::string) {
    // 0x5b8cc8
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::stop() {
    // 0x5ab480
    // TODO: Implement
}

void FMODAudioEngine::setup() {
    // 0x5b4d54
    // TODO: Implement
}

void FMODAudioEngine::start() {
    // 0x5ab3d4
    // TODO: Implement
}

void FMODAudioEngine::update(float) {
    // 0x5bb1c4
    // Game update loop — called every frame
    // TODO: Implement game logic update
}

void FMODAudioEngine::fadeMusic(float, int, float, float) {
    // 0x5b2f1c
    // TODO: Implement
}

void FMODAudioEngine::loadMusic(std::string) {
    // 0x5b6f14
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::loadMusic(std::string, float, float, float, bool, int, int, bool) {
    // 0x5b6804
    // Load from file/storage
    // TODO: Implement loading
}

void FMODAudioEngine::playMusic(std::string, bool, float, int) {
    // 0x5b6da8
    // TODO: Implement
}

void FMODAudioEngine::stopMusic(int) {
    // 0x5b6358
    // TODO: Implement
}

