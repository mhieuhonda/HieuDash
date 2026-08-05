#ifndef HIEUDASH_CUSTOMSONGCELL_H_
#define HIEUDASH_CUSTOMSONGCELL_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Custom song selection cell

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "TableViewCell.h"

class CustomSongCell : public TableViewCell {
public:
    CustomSongCell();

    SongInfoObject* m_pSongInfo;
    cocos2d::CCLabelBMFont* m_pSongNameLabel;
    cocos2d::CCLabelBMFont* m_pArtistNameLabel;
    cocos2d::CCLabelBMFont* m_pSizeLabel;
    LoadingCircle* m_pLoadingCircle;
    bool m_bIsDownloading;

    static CustomSongCell* create(char const*, float, float);
    bool init(char const*, float, float);
    void loadFromSongInfo(SongInfoObject*);
    void onDownload(cocos2d::CCObject*);
    void updateBGColor(int);

    ~CustomSongCell();
};

#endif // HIEUDASH_CUSTOMSONGCELL_H_
