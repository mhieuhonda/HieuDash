// ============================================================
// GJGameLevel.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJGAMELEVEL_H_
#define GJGAMELEVEL_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class GJGameLevel {
public:
    virtual ~GJGameLevel();
    virtual ~GJGameLevel();
    virtual ~GJGameLevel();

    void dataLoaded(DS_Dictionary*);
    void getCoinKey(int);
    void getSongName();
    void getLengthKey(int, bool);
    void isPlatformer();
    void saveNewScore(int, int, int, int, int, std::string, bool);
    void copyLevelInfo(GJGameLevel*);
    void unverifyCoins();
    void savePercentage(int, bool, int, int, bool);
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void getListSnapshot();
    void levelWasAltered();
    void areCoinsVerified();
    void getAudioFileName();
    void getNormalPercent();
    void setNormalPercent(int);
    void shouldCheatReset();
    void lengthKeyToString(int);
    void levelWasSubmitted();
    void storeNewLocalScore(int, int);
    void handleStatsConflict(GJGameLevel*);
    void parseSettingsString(std::string);
    void scoreStringToVector(std::string&, std::vector<int>&);
    void scoreVectorToString(std::vector<int>&, int);
    void getAverageDifficulty();
    void demonIconForDifficulty(DemonDifficultyType);
    void generateSettingsString();
    void getLastBuildPageForTab(int);
    void setLastBuildPageForTab(int, int);
    void getUnpackedLevelDescription();
    void init();
    void create(cocos2d::CCDictionary*, bool);
    void create();
    void canEncode();

};

#endif // GJGAMELEVEL_H_
