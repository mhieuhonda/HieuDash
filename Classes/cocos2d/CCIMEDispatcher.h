// ============================================================
// CCIMEDispatcher.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCIMEDISPATCHER_H_
#define COCOS2D_CCIMEDISPATCHER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCIMEDispatcher {
public:
    CCIMEDispatcher();
    CCIMEDispatcher();

    virtual ~CCIMEDispatcher();
    virtual ~CCIMEDispatcher();

    void addDelegate(cocos2d::CCIMEDelegate*);
    void hasDelegate();
    void getContentText();
    void removeDelegate(cocos2d::CCIMEDelegate*);
    void sharedDispatcher();
    void dispatchInsertText(char const*, int, cocos2d::enumKeyCodes);
    void attachDelegateWithIME(cocos2d::CCIMEDelegate*);
    void detachDelegateWithIME(cocos2d::CCIMEDelegate*);
    void dispatchDeleteForward();
    void dispatchDeleteBackward();
    void dispatchKeyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void dispatchKeyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    void dispatchKeyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void dispatchKeyboardWillHide();
    void dispatchKeyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);

};

} // namespace cocos2d

#endif // COCOS2D_CCIMEDISPATCHER_H_
