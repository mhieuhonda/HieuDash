// ============================================================
// CCEditBox.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCEDITBOX_H_
#define COCOS2D_EXTENSION_CCEDITBOX_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCEditBox {
public:
    CCEditBox();
    CCEditBox();

    virtual ~CCEditBox();
    virtual ~CCEditBox();
    virtual ~CCEditBox();

    void setVisible(bool);
    void getDelegate();
    void setDelegate(cocos2d::extension::CCEditBoxDelegate*);
    void setFontName(char const*);
    void setFontSize(int);
    void setPosition(cocos2d::CCPoint const&);
    void getMaxLength();
    void setFontColor(cocos2d::_ccColor3B const&);
    void setInputFlag(cocos2d::extension::EditBoxInputFlag);
    void setInputMode(cocos2d::extension::EditBoxInputMode);
    void setMaxLength(int);
    void setReturnType(cocos2d::extension::KeyboardReturnType);
    void getPlaceHolder();
    void setAnchorPoint(cocos2d::CCPoint const&);
    void setContentSize(cocos2d::CCSize const&);
    void setPlaceHolder(char const*);
    void keyboardDidHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void keyboardDidShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    void touchDownAction(cocos2d::CCObject*, unsigned int);
    void keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo&);
    void keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo&);
    void setPlaceholderFont(char const*, int);
    void setPlaceholderFontName(char const*);
    void setPlaceholderFontSize(int);
    void setPlaceholderFontColor(cocos2d::_ccColor3B const&);
    void registerScriptEditBoxHandler(int);
    void unregisterScriptEditBoxHandler();
    void initWithSizeAndBackgroundSprite(cocos2d::CCSize const&, cocos2d::extension::CCScale9Sprite*);
    void visit();
    void create(cocos2d::CCSize const&, cocos2d::extension::CCScale9Sprite*, cocos2d::extension::CCScale9Sprite*, cocos2d::extension::CCScale9Sprite*);
    void onExit();
    void getText();
    void onEnter();
    void setFont(char const*, int);
    void setText(char const*);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCEDITBOX_H_
