
#ifndef FMODAUDIOENGINE_H_
#define FMODAUDIOENGINE_H_

#include "cocos2d.h"
#include "fmod.hpp"
#include <string>
#include <unordered_set>

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static FMODAudioEngine* create();
    virtual ~FMODAudioEngine();

    void pauseMusic(int);
    void playEffect(std::string);
    void playEffect(std::string, float, float, float);
    void startMusic(int, int, int, int, bool, int, bool, bool);
    void fadeInMusic(float, int);
    void pauseEffect(unsigned int);
    void pitchForIdx(int);
    void printResult(FMOD_RESULT);
    void resumeAudio();
    void resumeMusic(int);
    void stopChannel(FMOD::Channel*, bool, float);
    void stopChannel(int);
    void stopChannel(int, AudioTargetType, bool, float);
    void storeEffect(FMOD::Sound*, std::string);
    void createStream(std::string);
    void fadeOutMusic(float, int);
    void getMusicTime(int);
    void isSoundReady(FMOD::Sound*);
    void preloadMusic(std::string, bool, int);
    void resumeEffect(unsigned int);
    void sharedEngine();
    void stopAllMusic(bool);
    void testFunction(int);
    void unloadEffect(std::string);
    void updateReverb(FMODReverbPreset, bool);
    void clearAllAudio();
    void getFMODStatus(int);
    void pauseAllAudio();
    void pauseAllMusic(bool);
    void preloadEffect(std::string);
    void updateChannel(int, AudioTargetType, AudioModType, float, float);
    void channelStopped(FMOD::Channel*, bool);
    void enableMetering();
    void getActiveMusic(int);
    void getMusicTimeMS(int);
    void isEffectLoaded(std::string);
    void isMusicPlaying(std::string, int);
    void isMusicPlaying(int);
    void lengthForSound(std::string);
    void loadAudioState(FMODAudioState&);
    void resumeAllAudio();
    void resumeAllMusic();
    void reverbToString(FMODReverbPreset);
    void saveAudioState(FMODAudioState&);
    void setMusicTimeMS(unsigned int, bool, int);
    void stopAllEffects();
    void stopAndGetFade(FMOD::Channel*);
    void swapMusicIndex(int, int);
    void updateMetering();
    void disableMetering();
    void getChannelGroup(int, bool);
    void pauseAllEffects();
    void playEffectAsync(std::string);
    void queuePlayEffect(std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, int, float, int);
    void queueStartMusic(std::string, float, float, float, bool, int, int, int, int, int, bool, int, bool, bool);
    void registerChannel(FMOD::Channel*, int, int);
    void setChannelPitch(int, AudioTargetType, float);
    void channelLinkSound(int, FMODSound*);
    void countActiveMusic();
    void getEffectsVolume();
    void getMeteringValue();
    void getMusicLengthMS(int);
    void getNextChannelID();
    void loadAndPlayMusic(std::string, unsigned int, int);
    void resumeAllEffects();
    void setChannelVolume(int, AudioTargetType, float);
    void setEffectsVolume(float);
    void setupAudioEngine();
    void stopChannelTween(int, AudioTargetType, AudioModType);
    void unloadAllEffects();
    void getMusicChannelID(int);
    void getTweenContainer(AudioTargetType);
    void isChannelStopping(int);
    void stopChannelTweens(int, AudioTargetType);
    void stopMusicNotInSet(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> >&);
    void unregisterChannel(int);
    void updateQueuedMusic();
    void channelForUniqueID(int);
    void channelUnlinkSound(int);
    void countActiveEffects();
    void playEffectAdvanced(std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int);
    void preloadEffectAsync(std::string);
    void stopAndRemoveMusic(int);
    void triggerQueuedMusic(FMODQueuedMusic);
    void activateQueuedMusic(int);
    void channelForChannelID(int);
    void setChannelVolumeMod(int, AudioTargetType, float);
    void updateChannelTweens(float);
    void updateQueuedEffects();
    void waitUntilSoundReady(FMOD::Sound*);
    void channelIDForUniqueID(int);
    void releaseRemovedSounds();
    void updateBackgroundFade();
    void fadeInBackgroundMusic(float);
    void getActiveMusicChannel(int);
    void isAnyPersistentPlaying();
    void updateTemporaryEffects();
    void getBackgroundMusicVolume();
    void isPersistentMatchPlaying(std::string, int);
    void setBackgroundMusicVolume(float);
    void queuedEffectFinishedLoading(std::string);
    void stop();
    void setup();
    void start();
    void update(float) override;
    void fadeMusic(float, int, float, float);
    void loadMusic(std::string);
    void loadMusic(std::string, float, float, float, bool, int, int, bool);
    void playMusic(std::string, bool, float, int);
    void stopMusic(int);

protected:
    bool m_activeMusic;
    bool m_activeMusicChannel;
    bool m_isFading;
    bool m_isMusicPlaying;
    FMOD::Channel* m_musicChannel;
    int m_musicChannelID;
    int m_musicID;
    std::string m_musicPath;
    float m_musicVolume;
    int m_nextChannelID;
    FMOD::ChannelGroup* m_sfxChannelGroup;
    float m_sfxVolume;
    FMOD::System* m_system;

};

#endif // FMODAUDIOENGINE_H_
