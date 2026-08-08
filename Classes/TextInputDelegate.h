// ============================================================
// TextInputDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TEXTINPUTDELEGATE_H_
#define TEXTINPUTDELEGATE_H_

class TextInputDelegate {
public:
    void textChanged(CCTextInputNode*);
    void enterPressed(CCTextInputNode*);
    void allowTextInput(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void textInputShouldOffset(CCTextInputNode*, float);

};

#endif // TEXTINPUTDELEGATE_H_
