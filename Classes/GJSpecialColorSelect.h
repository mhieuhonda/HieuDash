
#ifndef GJSPECIALCOLORSELECT_H_
#define GJSPECIALCOLORSELECT_H_

#include "cocos2d.h"

class GJSpecialColorSelect {
public:
    virtual ~GJSpecialColorSelect();

    void onSelectColor(cocos2d::CCObject*);
    void getButtonByTag(int);
    void keyBackClicked();
    void textForColorIdx(int);
    void highlightSelected(ButtonSprite*);
    void init(int, GJSpecialColorSelectDelegate*, ColorSelectType);
    void create(int, GJSpecialColorSelectDelegate*, ColorSelectType);
    void onClose(cocos2d::CCObject*);

protected:
    int m_buttonByTag;

};

#endif // GJSPECIALCOLORSELECT_H_
