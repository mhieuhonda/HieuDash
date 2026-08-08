// ============================================================
// CCTileMapAtlas.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTILEMAPATLAS_H_
#define COCOS2D_CCTILEMAPATLAS_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTileMapAtlas {
public:
    CCTileMapAtlas();
    CCTileMapAtlas();

    virtual ~CCTileMapAtlas();
    virtual ~CCTileMapAtlas();
    virtual ~CCTileMapAtlas();

    void getTGAInfo();
    void releaseMap();
    void setTGAInfo(cocos2d::sImageTGA*);
    void loadTGAfile(char const*);
    void initWithTileFile(char const*, char const*, int, int);
    void updateAtlasValues();
    void updateAtlasValueAt(cocos2d::CCPoint const&, cocos2d::_ccColor3B const&, unsigned int);
    void calculateItemsToRender();
    void create(char const*, char const*, int, int);
    void tileAt(cocos2d::CCPoint const&);
    void setTile(cocos2d::_ccColor3B const&, cocos2d::CCPoint const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCTILEMAPATLAS_H_
