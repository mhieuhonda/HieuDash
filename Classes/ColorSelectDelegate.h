#ifndef HIEUDASH_COLORSELECTDELEGATE_H_
#define HIEUDASH_COLORSELECTDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ColorSelectDelegate : public cocos2d::CCObject {
public:
    virtual ~ColorSelectDelegate() {}
    ColorSelectDelegate();
    void colorSelectClosed(ColorSelectPopup*);
};

#endif // HIEUDASH_COLORSELECTDELEGATE_H_
