
#ifndef GJGAMELEVEL_H_
#define GJGAMELEVEL_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class GJGameLevel : public cocos2d::CCNode {
public:
    virtual ~GJGameLevel();

    void dataLoaded(DS_Dictionary*);
    std::string getCoinKey(int);
    std::string getSongName();
    std::string getLengthKey(int, bool);
    bool isPlatformer();
    void saveNewScore(int, int, int, int, int, std::string, bool);
    void copyLevelInfo(GJGameLevel*);
    void unverifyCoins();
    void savePercentage(int, bool, int, int, bool);
    GJGameLevel* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void getListSnapshot();
    void levelWasAltered();
    bool areCoinsVerified();
    std::string getAudioFileName();
    void getNormalPercent();
    void setNormalPercent(int);
    bool shouldCheatReset();
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
    bool init();
    void create(cocos2d::CCDictionary*, bool);
    void create();
    bool canEncode();
    void verifyLevelIntegrity();

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
