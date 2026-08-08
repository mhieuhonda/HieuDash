// ============================================================
// CCIMEDelegate.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCIMEDELEGATE_H_
#define COCOS2D_CCIMEDELEGATE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCIMEDelegate {
public:
    CCIMEDelegate();
    CCIMEDelegate();

    virtual ~CCIMEDelegate();
    virtual ~CCIMEDelegate();
    virtual ~CCIMEDelegate();

    void insertText(char const*, int, cocos2d::enumKeyCodes);
    void attachWithIME();
    void deleteForward();
    void detachWithIME();
    void deleteBackward();
    void getContentText();
    void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    void canAttachWithIME();
    void canDetachWithIME();
    void didAttachWithIME();
    void didDetachWithIME();
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);

};

} // namespace cocos2d

#endif // COCOS2D_CCIMEDELEGATE_H_
