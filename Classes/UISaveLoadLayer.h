
#ifndef UISAVELOADLAYER_H_
#define UISAVELOADLAYER_H_

#include "cocos2d.h"

class UISaveLoadLayer {
public:
    virtual ~UISaveLoadLayer();

    void init(UIOptionsLayer*);
    void create(UIOptionsLayer*);
    void onLoad(cocos2d::CCObject*);
    void onSave(cocos2d::CCObject*);

};

#endif // UISAVELOADLAYER_H_
