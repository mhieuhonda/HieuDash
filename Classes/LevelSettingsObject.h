#ifndef _LEVELSETTINGSOBJECT_H_
#define _LEVELSETTINGSOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelSettingsObject {
public:
    LevelSettingsObject();
    create();
    getAudioTrack();
    getSaveString();
    getStartBGColor();
    getStartGColor();
    init();
    objectFromString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setAudioTrack(int);
    setStartBGColor(cocos2d::_ccColor3B);
    setStartGColor(cocos2d::_ccColor3B);
    ~LevelSettingsObject();
};

#endif // _LEVELSETTINGSOBJECT_H_
