#ifndef _BONUSDROPDOWN_H_
#define _BONUSDROPDOWN_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class BonusDropdown {
public:
    BonusDropdown();
    create(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int);
    getTargetScene();
    init(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int);
    setTargetScene(cocos2d::CCNode*);
    show();
    ~BonusDropdown();
};

#endif // _BONUSDROPDOWN_H_
