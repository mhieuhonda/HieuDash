#ifndef _COLORSELECTPOPUP_H_
#define _COLORSELECTPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ColorSelectPopup {
public:
    ColorSelectPopup();
    closeColorSelect();
    create(GameObject*);
    getColorValue();
    getDelegate();
    getDuration();
    init(GameObject*);
    keyBackClicked();
    selectColor(cocos2d::_ccColor3B);
    setDelegate(ColorSelectDelegate*);
    show();
    sliderChanged(SliderThumb*);
    updateDurLabel();
    ~ColorSelectPopup();
};

#endif // _COLORSELECTPOPUP_H_
