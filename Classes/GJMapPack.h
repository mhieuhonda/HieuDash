#ifndef HIEUDASH_GJMAPPACK_H_
#define HIEUDASH_GJMAPPACK_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// Map pack data

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJMapPack : public cocos2d::CCObject {
public:
    GJMapPack();

    int m_nPackID;
    std::string m_sPackName;
    std::string m_sLevelIDs;
    int m_nStars;
    int m_nCoins;
    int m_nDifficulty;
    int m_nColor1;
    int m_nColor2;
    int m_nColor3;
    bool m_bCompleted;
    bool m_bHasProgress;

    static GJMapPack* create();
    bool init();
    int getPackID();
    std::string getPackName();
    int getStars();

    ~GJMapPack();
};

#endif // HIEUDASH_GJMAPPACK_H_
