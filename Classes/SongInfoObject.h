// ============================================================
// SongInfoObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SONGINFOOBJECT_H_
#define SONGINFOOBJECT_H_

#include "cocos2d.h"
#include <string>

class SongInfoObject {
public:
    virtual ~SongInfoObject();
    virtual ~SongInfoObject();
    virtual ~SongInfoObject();

    void copyValues(SongInfoObject*);
    void containsTag(int);
    void getTagsString(bool);
    void updateArtists(std::string);
    void getArtistNames(int);
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void getExtraArtistCount();
    void init(int, std::string, std::string, int, float, std::string, std::string, std::string, std::string, int, std::string, bool, int, int);
    void create(cocos2d::CCDictionary*);
    void create(int);
    void create(int, std::string, std::string, int, float, std::string, std::string, std::string, std::string, int, std::string, bool, int, int);
    void addTags(std::string);
    void canEncode();

};

#endif // SONGINFOOBJECT_H_
