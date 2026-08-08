// ============================================================
// GJMapPack.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJMAPPACK_H_
#define GJMAPPACK_H_

#include "cocos2d.h"
#include <string>

class GJMapPack {
public:
    virtual ~GJMapPack();
    virtual ~GJMapPack();
    virtual ~GJMapPack();

    void completedMaps();
    void parsePackColors(std::string, std::string);
    void parsePackLevels(std::string);
    void hasCompletedMapPack();
    void init();
    void create(cocos2d::CCDictionary*);
    void create();
    void totalMaps();

};

#endif // GJMAPPACK_H_
