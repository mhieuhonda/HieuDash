#ifndef _CCTEXTINPUTNODE_H_
#define _CCTEXTINPUTNODE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCTextInputNode {
public:
    CCTextInputNode();
    ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    create(float, float, char const*, char const*, int, char const*);
    getCharLimit();
    getDelegate();
    getLabel();
    getProfanityFilter();
    getString();
    getTextField();
    init(float, float, char const*, char const*, int, char const*);
    keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    onClickTrackNode(bool);
    onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*);
    onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*);
    onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int);
    refreshLabel();
    registerWithTouchDispatcher();
    setAllowedChars(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setCharLimit(int);
    setDelegate(TextInputDelegate*);
    setLabelNormalColor(cocos2d::_ccColor3B);
    setLabelPlaceholderColor(cocos2d::_ccColor3B);
    setLabelPlaceholderScale(float);
    setMaxLabelScale(float);
    setMaxLabelWidth(float);
    setProfanityFilter(bool);
    setString(char const*);
    textChanged();
    updateLabel(char const*);
    visit();
    ~CCTextInputNode();
};

#endif // _CCTEXTINPUTNODE_H_
