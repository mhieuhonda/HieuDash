// ============================================================
// CCTMXMapInfo.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTMXMAPINFO_H_
#define COCOS2D_CCTMXMAPINFO_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTMXMapInfo {
public:
    CCTMXMapInfo();
    CCTMXMapInfo();

    virtual ~CCTMXMapInfo();
    virtual ~CCTMXMapInfo();
    virtual ~CCTMXMapInfo();

    void endElement(void*, char const*);
    void getTilesets();
    void initWithXML(char const*, char const*);
    void setTilesets(cocos2d::CCArray*);
    void textHandler(void*, char const*, int);
    void internalInit(char const*, char const*);
    void parseXMLFile(char const*);
    void startElement(void*, char const*, char const**);
    void formatWithXML(char const*, char const*);
    void getProperties();
    void setProperties(cocos2d::CCDictionary*);
    void parseXMLString(char const*);
    void getObjectGroups();
    void initWithTMXFile(char const*);
    void setObjectGroups(cocos2d::CCArray*);
    void formatWithTMXFile(char const*);
    void getTileProperties();
    void setTileProperties(cocos2d::CCDictionary*);
    void getLayers();
    void setLayers(cocos2d::CCArray*);

};

} // namespace cocos2d

#endif // COCOS2D_CCTMXMAPINFO_H_
