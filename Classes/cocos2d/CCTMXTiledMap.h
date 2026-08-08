// ============================================================
// CCTMXTiledMap.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTMXTILEDMAP_H_
#define COCOS2D_CCTMXTILEDMAP_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTMXTiledMap {
public:
    CCTMXTiledMap();
    CCTMXTiledMap();

    virtual ~CCTMXTiledMap();
    virtual ~CCTMXTiledMap();
    virtual ~CCTMXTiledMap();

    void layerNamed(char const*);
    void parseLayer(cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*);
    void initWithXML(char const*, char const*);
    void createWithXML(char const*, char const*);
    void getProperties();
    void propertyNamed(char const*);
    void setProperties(cocos2d::CCDictionary*);
    void getObjectGroups();
    void initWithTMXFile(char const*);
    void setObjectGroups(cocos2d::CCArray*);
    void tilesetForLayer(cocos2d::CCTMXLayerInfo*, cocos2d::CCTMXMapInfo*);
    void buildWithMapInfo(cocos2d::CCTMXMapInfo*);
    void objectGroupNamed(char const*);
    void propertiesForGID(int);
    void create(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCTMXTILEDMAP_H_
