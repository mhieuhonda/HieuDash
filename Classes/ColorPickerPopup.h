#ifndef _COLORPICKERPOPUP_H_
#define _COLORPICKERPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class ColorPickerPopup {
public:
    ColorPickerPopup();
    closeColorSelect();
    create();
    getColorValue();
    getDelegate();
    init();
    keyBackClicked();
    selectColor(cocos2d::_ccColor3B);
    setDelegate(ColorPickerDelegate*);
    show();
    ~ColorPickerPopup();
};

#endif // _COLORPICKERPOPUP_H_
