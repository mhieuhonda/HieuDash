#ifndef _MOREGAMESMANAGER_H_
#define _MOREGAMESMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class MoreGamesManager {
public:
    MoreGamesManager();
    checkMoreGames();
    dataLoaded(DS_Dictionary*);
    encodeDataTo(DS_Dictionary*);
    firstLoad();
    getHasNewGames();
    getMoreGamesList();
    getMoreGamesString();
    handleMoreGamesResponse(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    init();
    onCheckMoreGamesCompleted(cocos2d::CCNode*, void*);
    promoImageDownloaded(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setHasNewGames(bool);
    setMoreGamesString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    sharedState();
    shouldCheckMoreGames();
    ~MoreGamesManager();
};

#endif // _MOREGAMESMANAGER_H_
