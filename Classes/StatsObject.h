#ifndef HIEUDASH_STATSOBJECT_H_
#define HIEUDASH_STATSOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class StatsObject : public cocos2d::CCObject {
public:
    StatsObject();
    static StatsObject* create(char const*, int);
    int getKey();
    int getValue();
    bool init(char const*, int);
    ~StatsObject();
};

#endif // HIEUDASH_STATSOBJECT_H_
