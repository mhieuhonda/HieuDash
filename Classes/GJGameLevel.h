#ifndef HIEUDASH_GJGAMELEVEL_H_
#define HIEUDASH_GJGAMELEVEL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJGameLevel : public cocos2d::CCObject {
public:
    GJGameLevel();

    // --- Anti-cheat ID system ---
    int m_nLevelIDSeed;
    int m_nLevelIDRand;
    int m_nLevelID;
    int m_nUserIDSeed;
    int m_nUserIDRand;
    int m_nUserID;

    // --- Level data ---
    std::string m_sLevelName;
    std::string m_sLevelString;
    std::string m_sLevelDesc;

    // --- Level stats ---
    int m_nStars;
    int m_nDifficulty;
    int m_nObjectCount;
    int m_nAttempts;
    int m_nPercentage;
    int m_nNormalPercent;
    int m_nPracticePercent;
    int m_nDownloads;
    int m_nLikes;
    int m_nRatings;
    int m_nRatingsSum;

    // --- Level info ---
    int m_nAudioTrack;
    int m_nLevelLength;
    int m_nLevelVersion;
    int m_nGameVersion;
    int m_nCompletes;
    int m_nLevelType;
    std::string m_sUserName;

    // --- State flags ---
    bool m_bIsEditable;
    bool m_bIsUploaded;
    bool m_bIsVerified;

    // --- Editor state ---
    cocos2d::CCPoint m_obLastCameraPos;
    float m_fLastEditorZoom;

    // --- Anti-cheat verification ---
    int m_nLevelIDBackup;
    int m_nUserIDBackup;

    // --- Methods ---
    void canEncode();
    static GJGameLevel* create();
    static GJGameLevel* create(cocos2d::CCDictionary*);
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    int getAttempts();
    int getAudioTrack();
    int getAverageDifficulty();
    int getCompletes();
    int getDifficulty();
    int getDownloads();
    int getGameVersion();
    bool getIsEditable();
    bool getIsUploaded();
    bool getIsVerified();
    int getLastCameraPos();
    int getLastEditorZoom();
    int getLengthKey(int);
    int getLevelDesc();
    int getLevelID();
    int getLevelLength();
    int getLevelName();
    int getLevelString();
    int getLevelType();
    int getLevelVersion();
    int getLikes();
    int getM_ID();
    int getNormalPercent();
    int getPracticePercent();
    int getRatings();
    int getRatingsSum();
    int getUserID();
    int getUserName();
    bool init();
    void lengthKeyToString(int);
    void levelWasAltered();
    void levelWasSubmitted();
    void savePercentage(int, bool);
    void setAttempts(int);
    void setAudioTrack(int);
    void setCompletes(int);
    void setDifficulty(int);
    void setDownloads(int);
    void setGameVersion(int);
    void setIsEditable(bool);
    void setIsUploaded(bool);
    void setIsVerified(bool);
    void setLastCameraPos(cocos2d::CCPoint);
    void setLastEditorZoom(float);
    void setLevelDesc(std::string);
    void setLevelID(int);
    void setLevelLength(int);
    void setLevelName(std::string);
    void setLevelString(std::string);
    void setLevelType(GJLevelType);
    void setLevelVersion(int);
    void setLikes(int);
    void setNormalPercent(int);
    void setPracticePercent(int);
    void setRatings(int);
    void setRatingsSum(int);
    void setUserID(int);
    void setUserName(std::string);
    ~GJGameLevel();
};

#endif // HIEUDASH_GJGAMELEVEL_H_
