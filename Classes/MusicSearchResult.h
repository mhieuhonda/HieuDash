
#ifndef MUSICSEARCHRESULT_H_
#define MUSICSEARCHRESULT_H_

#include "cocos2d.h"
#include <string>

class MusicSearchResult {
public:
    virtual ~MusicSearchResult();

    void stateChanged(OptionsObject*);
    void updateObjects(AudioSortType);
    void updateObjects();
    void applyTagFilters(cocos2d::CCArray*);
    void updateFutureCount(cocos2d::CCArray*, cocos2d::CCArray*);
    void applyArtistFilters(cocos2d::CCArray*);
    void createTagFilterObjects();
    void getFilesMatchingSearch(cocos2d::CCArray*, std::string);
    void createArtistFilterObjects();
    void init(GJSongType);
    void create(GJSongType);

};

#endif // MUSICSEARCHRESULT_H_
