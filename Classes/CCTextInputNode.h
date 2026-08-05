#ifndef HIEUDASH_CCTEXTINPUTNODE_H_
#define HIEUDASH_CCTEXTINPUTNODE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCTextInputNode {
public:
    CCTextInputNode();
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    CCTextInputNode* create(float, float, char const*, char const*, int, char const*);
    int getCharLimit();
    int getDelegate();
    int getLabel();
    int getProfanityFilter();
    int getString();
    int getTextField();
    bool init(float, float, char const*, char const*, int, char const*);
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    void onClickTrackNode(bool);
    void onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*);
    void onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*);
    void onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int);
    void refreshLabel();
    void registerWithTouchDispatcher();
    void setAllowedChars(std::string);
    void setCharLimit(int);
    void setDelegate(TextInputDelegate*);
    void setLabelNormalColor(cocos2d::_ccColor3B);
    void setLabelPlaceholderColor(cocos2d::_ccColor3B);
    void setLabelPlaceholderScale(float);
    void setMaxLabelScale(float);
    void setMaxLabelWidth(float);
    void setProfanityFilter(bool);
    void setString(char const*);
    void textChanged();
    void updateLabel(char const*);
    void visit();
    ~CCTextInputNode();
};

#endif // HIEUDASH_CCTEXTINPUTNODE_H_
