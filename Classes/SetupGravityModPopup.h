
#ifndef SETUPGRAVITYMODPOPUP_H_
#define SETUPGRAVITYMODPOPUP_H_

#include "cocos2d.h"

class SetupGravityModPopup {
public:
    virtual ~SetupGravityModPopup();

    void textChanged(CCTextInputNode*);
    void updateValue();
    void updateItemID();
    void onItemIDArrow(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void keyBackClicked();
    void textInputClosed(CCTextInputNode*);
    void updateValueLabel();
    void determineStartValues();
    void updateTextInputLabel();
    void init(EffectGameObject*, cocos2d::CCArray*, bool);
    void show();
    void create(EffectGameObject*, cocos2d::CCArray*, bool);
    void onClose(cocos2d::CCObject*);

};

#endif // SETUPGRAVITYMODPOPUP_H_
