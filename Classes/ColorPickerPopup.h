#ifndef HIEUDASH_COLORPICKERPOPUP_H_
#define HIEUDASH_COLORPICKERPOPUP_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class ColorPickerPopup : public cocos2d::CCLayer {
public:
    ColorPickerPopup();
    void closeColorSelect();
    ColorPickerPopup* create();
    int getColorValue();
    int getDelegate();
    bool init();
    void keyBackClicked();
    void selectColor(cocos2d::_ccColor3B);
    void setDelegate(ColorPickerDelegate*);
    void show();
    ~ColorPickerPopup();
};

#endif // HIEUDASH_COLORPICKERPOPUP_H_
