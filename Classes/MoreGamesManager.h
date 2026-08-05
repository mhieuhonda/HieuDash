#ifndef HIEUDASH_MOREGAMESMANAGER_H_
#define HIEUDASH_MOREGAMESMANAGER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class MoreGamesManager : public cocos2d::CCObject {
public:
    MoreGamesManager();
    void checkMoreGames();
    void dataLoaded(DS_Dictionary*);
    void encodeDataTo(DS_Dictionary*);
    void firstLoad();
    bool getHasNewGames();
    int getMoreGamesList();
    int getMoreGamesString();
    void handleMoreGamesResponse(std::string);
    bool init();
    void onCheckMoreGamesCompleted(cocos2d::CCNode*, void*);
    void promoImageDownloaded(std::string);
    void setHasNewGames(bool);
    void setMoreGamesString(std::string);
    MoreGamesManager* sharedState();
    bool shouldCheckMoreGames();
    ~MoreGamesManager();
};

#endif // HIEUDASH_MOREGAMESMANAGER_H_
