#ifndef HIEUDASH_BUTTONPAGE_H_
#define HIEUDASH_BUTTONPAGE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ButtonPage : public cocos2d::CCNode {
public:
    ButtonPage();
    static ButtonPage* create(cocos2d::CCArray*, cocos2d::CCPoint);
    bool init(cocos2d::CCArray*, cocos2d::CCPoint);
    ~ButtonPage();
};

#endif // HIEUDASH_BUTTONPAGE_H_
