// ============================================================
// CCTextFieldDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTEXTFIELDDELEGATE_H_
#define COCOS2D_CCTEXTFIELDDELEGATE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTextFieldDelegate {
public:
    void textChanged();
    void onTextFieldInsertText(cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes);
    void onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF*);
    void onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF*);
    void onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF*, char const*, int);
    void onDraw(cocos2d::CCTextFieldTTF*);

};

} // namespace cocos2d

#endif // COCOS2D_CCTEXTFIELDDELEGATE_H_
