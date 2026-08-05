#ifndef _TEXTINPUTDELEGATE_H_
#define _TEXTINPUTDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class TextInputDelegate {
public:
    TextInputDelegate();
    textChanged(CCTextInputNode*);
    textInputClosed(CCTextInputNode*);
    textInputOpened(CCTextInputNode*);
};

#endif // _TEXTINPUTDELEGATE_H_
