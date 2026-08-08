
#ifndef GJMAPPACK_H_
#define GJMAPPACK_H_

#include "cocos2d.h"
#include <string>

class GJMapPack : public cocos2d::CCNode {
public:
    virtual ~GJMapPack();

    void completedMaps();
    void parsePackColors(std::string, std::string);
    void parsePackLevels(std::string);
    bool hasCompletedMapPack();
    bool init();
    void create(cocos2d::CCDictionary*);
    void create();
    void totalMaps();

};

#endif // GJMAPPACK_H_
