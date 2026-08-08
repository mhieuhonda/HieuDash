
#ifndef SONGINFOOBJECT_H_
#define SONGINFOOBJECT_H_

#include "cocos2d.h"
#include <string>

class SongInfoObject {
public:
    virtual ~SongInfoObject();

    void copyValues(SongInfoObject*);
    void containsTag(int);
    std::string getTagsString(bool);
    void updateArtists(std::string);
    std::string getArtistNames(int);
    SongInfoObject* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void getExtraArtistCount();
    void init(int, std::string, std::string, int, float, std::string, std::string, std::string, std::string, int, std::string, bool, int, int);
    void create(cocos2d::CCDictionary*);
    void create(int);
    void create(int, std::string, std::string, int, float, std::string, std::string, std::string, std::string, int, std::string, bool, int, int);
    void addTags(std::string);
    bool canEncode();

protected:
    std::string m_artistNames;
    int m_extraArtistCount;
    int m_tagsString;

};

#endif // SONGINFOOBJECT_H_
