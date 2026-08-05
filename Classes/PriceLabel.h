#ifndef HIEUDASH_PRICELABEL_H_
#define HIEUDASH_PRICELABEL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class PriceLabel : public cocos2d::CCLabelBMFont {
public:
    PriceLabel();
    PriceLabel* create(int);
    bool init(int);
    void setColor(cocos2d::_ccColor3B);
    void setOpacity(float);
    void setPrice(int);
    ~PriceLabel();
};

#endif // HIEUDASH_PRICELABEL_H_
