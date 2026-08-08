
#ifndef CUSTOMSONGCELL_H_
#define CUSTOMSONGCELL_H_

#include "cocos2d.h"
#include <string>

class CustomSongCell : public cocos2d::CCNode {
public:
    CustomSongCell(char const*, float, float);
    CustomSongCell(char const*, float, float);

    virtual ~CustomSongCell();

    bool shouldReload();
    void songIDChanged(int);
    void updateBGColor(int);
    void loadFromObject(SongInfoObject*);
    void getActiveSongID();
    std::string getSongFileName();
    void getLevelSettings();
    void draw();
    bool init();
    void onDelete(cocos2d::CCObject*);

protected:
    int m_activeSongID;
    std::string m_songFileName;

};

#endif // CUSTOMSONGCELL_H_
