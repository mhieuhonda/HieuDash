// ============================================================
// CCKeyboardDispatcher.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCKEYBOARDDISPATCHER_H_
#define COCOS2D_CCKEYBOARDDISPATCHER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCKeyboardDispatcher {
public:
    CCKeyboardDispatcher();
    CCKeyboardDispatcher();

    virtual ~CCKeyboardDispatcher();
    virtual ~CCKeyboardDispatcher();
    virtual ~CCKeyboardDispatcher();

    void addDelegate(cocos2d::CCKeyboardDelegate*);
    void keyToString(cocos2d::enumKeyCodes);
    void convertKeyCode(cocos2d::enumKeyCodes);
    void removeDelegate(cocos2d::CCKeyboardDelegate*);
    void forceAddDelegate(cocos2d::CCKeyboardDelegate*);
    void updateModifierKeys(bool, bool, bool, bool);
    void dispatchKeyboardMSG(cocos2d::enumKeyCodes, bool, bool, double);
    void forceRemoveDelegate(cocos2d::CCKeyboardDelegate*);

};

} // namespace cocos2d

#endif // COCOS2D_CCKEYBOARDDISPATCHER_H_
