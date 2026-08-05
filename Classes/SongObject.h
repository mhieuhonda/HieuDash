#ifndef _SONGOBJECT_H_
#define _SONGOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SongObject {
public:
    SongObject();
    create(int);
    getAudioTrack();
    init(int);
    ~SongObject();
};

#endif // _SONGOBJECT_H_
