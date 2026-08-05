#ifndef _LEVELTOOLS_H_
#define _LEVELTOOLS_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelTools {
public:
    artistForAudio(int);
    fbURLForArtist(int);
    getAudioBPM(int);
    getAudioFileName(int);
    getAudioString(int);
    getAudioTitle(int);
    getLevel(int);
    nameForArtist(int);
    ngURLForArtist(int);
    urlForAudio(int);
    ytURLForArtist(int);
};

#endif // _LEVELTOOLS_H_
