#ifndef HIEUDASH_ARTISTCELL_H_
#define HIEUDASH_ARTISTCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Custom song artist cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class ArtistCell : public TableViewCell {
public:
    ArtistCell();

    SongInfoObject* m_pSongInfo;
    cocos2d::CCLabelBMFont* m_pArtistNameLabel;
    cocos2d::CCLabelBMFont* m_pSongNameLabel;

    static ArtistCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromSongInfo(SongInfoObject*);
    void updateBGColor(int);

    ~ArtistCell();
};

#endif // HIEUDASH_ARTISTCELL_H_
