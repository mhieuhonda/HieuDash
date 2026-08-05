#ifndef _LEVELMANAGERDELEGATE_H_
#define _LEVELMANAGERDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class LevelManagerDelegate {
public:
    LevelManagerDelegate();
    loadLevelsFailed(char const*);
    loadLevelsFinished(cocos2d::CCArray*, char const*);
    setupPageInfo(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, char const*);
};

#endif // _LEVELMANAGERDELEGATE_H_
