// ============================================================
// CCTMXLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTMXLAYER_H_
#define COCOS2D_CCTMXLAYER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTMXLayer {
public:
    CCTMXLayer();
    CCTMXLayer();

    virtual ~CCTMXLayer();
    virtual ~CCTMXLayer();
    virtual ~CCTMXLayer();

    void getTileSet();
    void positionAt(cocos2d::CCPoint const&);
    void releaseMap();
    void setTileGID(unsigned int, cocos2d::CCPoint const&);
    void setTileGID(unsigned int, cocos2d::CCPoint const&, cocos2d::ccTMXTileFlags_);
    void setTileSet(cocos2d::CCTMXTilesetInfo*);
    void setupTiles();
    void removeChild(cocos2d::CCNode*, bool);
    void removeTileAt(cocos2d::CCPoint const&);
    void getProperties();
    void propertyNamed(char const*);
    void setProperties(cocos2d::CCDictionary*);
    void vertexZForPos(cocos2d::CCPoint const&);
    void setupTileSprite(cocos2d::CCSprite*, cocos2d::CCPoint, unsigned int);
    void appendTileForGID(unsigned int, cocos2d::CCPoint const&);
    void insertTileForGID(unsigned int, cocos2d::CCPoint const&);
    void positionForHexAt(cocos2d::CCPoint const&);
    void positionForIsoAt(cocos2d::CCPoint const&);
    void updateTileForGID(unsigned int, cocos2d::CCPoint const&);
    void atlasIndexForNewZ(int);
    void positionForOrthoAt(cocos2d::CCPoint const&);
    void reusedTileWithRect(cocos2d::CCRect);
    void initWithTilesetInfo(cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*);
    void calculateLayerOffset(cocos2d::CCPoint const&);
    void atlasIndexForExistantZ(unsigned int);
    void parseInternalProperties();
    void create(cocos2d::CCTMXTilesetInfo*, cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*);
    void tileAt(cocos2d::CCPoint const&);
    void addChild(cocos2d::CCNode*, int, int);
    void tileGIDAt(cocos2d::CCPoint const&);
    void tileGIDAt(cocos2d::CCPoint const&, cocos2d::ccTMXTileFlags_*);

};

} // namespace cocos2d

#endif // COCOS2D_CCTMXLAYER_H_
