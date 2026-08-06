#ifndef HIEUDASH_SONGOBJECT_H_
#define HIEUDASH_SONGOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SongObject : public cocos2d::CCObject {
public:
    SongObject();
    static SongObject* create(int);
    int getAudioTrack();
    bool init(int);
    ~SongObject();
};

#endif // HIEUDASH_SONGOBJECT_H_
