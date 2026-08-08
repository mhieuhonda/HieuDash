// ============================================================
// CCTextInputNode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef CCTEXTINPUTNODE_H_
#define CCTEXTINPUTNODE_H_

#include "cocos2d.h"
#include <string>

class CCTextInputNode {
public:
    virtual ~CCTextInputNode();
    virtual ~CCTextInputNode();
    virtual ~CCTextInputNode();

    void addTextArea(TextArea*);
    void forceOffset();
    void textChanged();
    void updateLabel(std::string);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void refreshLabel();
    void setAllowedChars(std::string);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    void onClickTrackNode(bool);
    void setMaxLabelScale(float);
    void setMaxLabelWidth(float);
    void updateBlinkLabel();
    void setLabelNormalColor(cocos2d::_ccColor3B);
    void updateCursorPosition(cocos2d::CCPoint, cocos2d::CCRect);
    void onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes);
    void updateBlinkLabelToChar(int);
    void updateDefaultFontValues(std::string);
    void onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*);
    void onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*);
    void setLabelPlaceholderColor(cocos2d::_ccColor3B);
    void setLabelPlaceholderScale(float);
    void registerWithTouchDispatcher();
    void init(float, float, char const*, char const*, int, char const*);
    void visit();
    void create(float, float, char const*, char const*, int, char const*);
    void getString();
    void setString(std::string);

};

#endif // CCTEXTINPUTNODE_H_
