#ifndef _GJGAMELEVEL_H_
#define _GJGAMELEVEL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GJGameLevel {
public:
    GJGameLevel();
    canEncode();
    create();
    create(cocos2d::CCDictionary*);
    createWithCoder(DS_Dictionary*);
    encodeWithCoder(DS_Dictionary*);
    getAttempts();
    getAudioTrack();
    getAverageDifficulty();
    getCompletes();
    getDifficulty();
    getDownloads();
    getGameVersion();
    getIsEditable();
    getIsUploaded();
    getIsVerified();
    getLastCameraPos();
    getLastEditorZoom();
    getLengthKey(int);
    getLevelDesc();
    getLevelID();
    getLevelLength();
    getLevelName();
    getLevelString();
    getLevelType();
    getLevelVersion();
    getLikes();
    getM_ID();
    getNormalPercent();
    getPracticePercent();
    getRatings();
    getRatingsSum();
    getUserID();
    getUserName();
    init();
    lengthKeyToString(int);
    levelWasAltered();
    levelWasSubmitted();
    savePercentage(int, bool);
    setAttempts(int);
    setAudioTrack(int);
    setCompletes(int);
    setDifficulty(int);
    setDownloads(int);
    setGameVersion(int);
    setIsEditable(bool);
    setIsUploaded(bool);
    setIsVerified(bool);
    setLastCameraPos(cocos2d::CCPoint);
    setLastEditorZoom(float);
    setLevelDesc(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setLevelID(int);
    setLevelLength(int);
    setLevelName(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setLevelString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setLevelType(GJLevelType);
    setLevelVersion(int);
    setLikes(int);
    setNormalPercent(int);
    setPracticePercent(int);
    setRatings(int);
    setRatingsSum(int);
    setUserID(int);
    setUserName(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    ~GJGameLevel();
};

#endif // _GJGAMELEVEL_H_
