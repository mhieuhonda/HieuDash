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
    void canEncode();
    GJGameLevel* create();
    GJGameLevel* create(cocos2d::CCDictionary*);
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
