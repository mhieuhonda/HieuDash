#ifndef HIEUDASH_TEXTINPUTDELEGATE_H_
#define HIEUDASH_TEXTINPUTDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class TextInputDelegate : public cocos2d::CCObject {
public:
    virtual ~TextInputDelegate() {}
    TextInputDelegate();
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
};

#endif // HIEUDASH_TEXTINPUTDELEGATE_H_
