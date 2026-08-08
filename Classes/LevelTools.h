// ============================================================
// LevelTools.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LEVELTOOLS_H_
#define LEVELTOOLS_H_

#include "cocos2d.h"
#include <string>

class LevelTools {
public:
    void posForTime(float, cocos2d::CCArray*, int, bool, int&);
    void timeForPos(cocos2d::CCPoint, cocos2d::CCArray*, int, int, int, bool, bool, bool, bool, int);
    void getAudioBPM(int);
    void urlForAudio(int);
    void getLevelList();
    void getAudioTitle(int);
    void getSongObject(int);
    void nameForArtist(int);
    void artistForAudio(int);
    void fbURLForArtist(int);
    void getAudioString(int);
    void ngURLForArtist(int);
    void ytURLForArtist(int);
    void getLastTimewarp();
    void getAudioFileName(int);
    void sortSpeedObjects(cocos2d::CCArray*, GJBaseGameLayer*);
    void valueForSpeedMod(int);
    void offsetBPMForTrack(int);
    void base64DecodeString(std::string);
    void base64EncodeString(std::string);
    void createStarPackDict();
    void posForTimeInternal(float, cocos2d::CCArray*, int, bool, bool, bool, int&, int);
    void toggleDebugLogging(bool);
    void verifyLevelIntegrity(std::string, int);
    void getLastGameplayRotated();
    void getLastGameplayReversed();
    void sortChannelOrderObjects(cocos2d::CCArray*, cocos2d::CCDictionary*, bool);
    void moveTriggerObjectsToArray(cocos2d::CCArray*, cocos2d::CCDictionary*, int);
    void getLevel(int, bool);

protected:
    std::string m_audioFileName;
    std::string m_audioString;

};

#endif // LEVELTOOLS_H_
