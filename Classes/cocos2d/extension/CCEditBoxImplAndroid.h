// ============================================================
// CCEditBoxImplAndroid.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCEDITBOXIMPLANDROID_H_
#define COCOS2D_EXTENSION_CCEDITBOXIMPLANDROID_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCEditBoxImplAndroid {
public:
    CCEditBoxImplAndroid(cocos2d::extension::CCEditBox*);
    CCEditBoxImplAndroid(cocos2d::extension::CCEditBox*);

    virtual ~CCEditBoxImplAndroid();
    virtual ~CCEditBoxImplAndroid();
    virtual ~CCEditBoxImplAndroid();

    void setVisible(bool);
    void setPosition(cocos2d::CCPoint const&);
    void getMaxLength();
    void initWithSize(cocos2d::CCSize const&);
    void openKeyboard();
    void setFontColor(cocos2d::_ccColor3B const&);
    void setInputFlag(cocos2d::extension::EditBoxInputFlag);
    void setInputMode(cocos2d::extension::EditBoxInputMode);
    void setMaxLength(int);
    void closeKeyboard();
    void setReturnType(cocos2d::extension::KeyboardReturnType);
    void setAnchorPoint(cocos2d::CCPoint const&);
    void setContentSize(cocos2d::CCSize const&);
    void setPlaceHolder(char const*);
    void setPlaceholderFont(char const*, int);
    void setPlaceholderFontColor(cocos2d::_ccColor3B const&);
    void doAnimationWhenKeyboardMove(float, float);
    void visit();
    void getText();
    void onEnter();
    void setFont(char const*, int);
    void setText(char const*);
    void isEditing();

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCEDITBOXIMPLANDROID_H_
