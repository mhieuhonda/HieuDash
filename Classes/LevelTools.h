#ifndef HIEUDASH_LEVELTOOLS_H_
#define HIEUDASH_LEVELTOOLS_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelTools {
public:
    void artistForAudio(int);
    void fbURLForArtist(int);
    int getAudioBPM(int);
    int getAudioFileName(int);
    int getAudioString(int);
    int getAudioTitle(int);
    GJGameLevel* getLevel(int);
    void nameForArtist(int);
    void ngURLForArtist(int);
    void urlForAudio(int);
    void ytURLForArtist(int);
};

#endif // HIEUDASH_LEVELTOOLS_H_
