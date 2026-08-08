
#ifndef SETITEMIDLAYER_H_
#define SETITEMIDLAYER_H_

#include "cocos2d.h"

class SetItemIDLayer {
public:
    virtual ~SetItemIDLayer();

    void valueDidChange(int, float);
    void updateEditorLabel();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);
    void onClose(cocos2d::CCObject*);

};

#endif // SETITEMIDLAYER_H_
