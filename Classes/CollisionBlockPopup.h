
#ifndef COLLISIONBLOCKPOPUP_H_
#define COLLISIONBLOCKPOPUP_H_

#include "cocos2d.h"
#include <string>

class CollisionBlockPopup {
public:
    virtual ~CollisionBlockPopup();

    void textChanged(CCTextInputNode*);
    void onNextItemID(cocos2d::CCObject*);
    void updateItemID();
    void onItemIDArrow(cocos2d::CCObject*);
    void keyBackClicked();
    void onDynamicBlock(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void updateEditorLabel();
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void determineStartValues();
    void updateTextInputLabel();
    void textInputShouldOffset(CCTextInputNode*, float);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void show();
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // COLLISIONBLOCKPOPUP_H_
