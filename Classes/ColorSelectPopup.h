#ifndef HIEUDASH_COLORSELECTPOPUP_H_
#define HIEUDASH_COLORSELECTPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ColorSelectPopup : public cocos2d::CCLayer {
public:
    ColorSelectPopup();
    void closeColorSelect();
    ColorSelectPopup* create(GameObject*);
    int getColorValue();
    int getDelegate();
    int getDuration();
    bool init(GameObject*);
    void keyBackClicked();
    void selectColor(cocos2d::_ccColor3B);
    void setDelegate(ColorSelectDelegate*);
    void show();
    void sliderChanged(SliderThumb*);
    void updateDurLabel();
    ~ColorSelectPopup();
};

#endif // HIEUDASH_COLORSELECTPOPUP_H_
