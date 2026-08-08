// ============================================================
// CCTextFieldTTF.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTEXTFIELDTTF_H_
#define COCOS2D_CCTEXTFIELDTTF_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTextFieldTTF {
public:
    CCTextFieldTTF();
    CCTextFieldTTF();

    virtual ~CCTextFieldTTF();
    virtual ~CCTextFieldTTF();
    virtual ~CCTextFieldTTF();

    void insertText(char const*, int, cocos2d::enumKeyCodes);
    void attachWithIME();
    void deleteForward();
    void detachWithIME();
    void deleteBackward();
    void getContentText();
    void getPlaceHolder();
    void setPlaceHolder(char const*);
    void canAttachWithIME();
    void canDetachWithIME();
    void isSecureTextEntry();
    void setSecureTextEntry(bool);
    void getColorSpaceHolder();
    void initWithPlaceHolder(char const*, cocos2d::CCSize const&, cocos2d::CCTextAlignment, char const*, float);
    void initWithPlaceHolder(char const*, char const*, float);
    void setColorSpaceHolder(cocos2d::_ccColor3B const&);
    void textFieldWithPlaceHolder(char const*, cocos2d::CCSize const&, cocos2d::CCTextAlignment, char const*, float);
    void textFieldWithPlaceHolder(char const*, char const*, float);
    void draw();
    void getString();
    void setString(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCTEXTFIELDTTF_H_
