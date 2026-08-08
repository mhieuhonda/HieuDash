// ============================================================
// GJGameLevel.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
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

protected:
    std::string m_audioFileName;
    std::string m_coinKey;
    std::string m_creatorName;
    int m_difficulty;
    int m_downloads;
    int m_featureScore;
    bool m_isEpic;
    bool m_isUploaded;
    bool m_isVerified;
    std::string m_lengthKey;
    int m_levelID;
    std::string m_levelName;
    std::string m_levelString;
    int m_likes;
    int m_normalPercent;
    int m_practicePercent;
    std::string m_songName;
    int m_stars;

};

#endif // GJGAMELEVEL_H_
