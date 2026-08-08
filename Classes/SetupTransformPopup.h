
#ifndef SETUPTRANSFORMPOPUP_H_
#define SETUPTRANSFORMPOPUP_H_

#include "cocos2d.h"

class SetupTransformPopup {
public:
    virtual ~SetupTransformPopup();

    void init(TransformTriggerGameObject*, cocos2d::CCArray*);
    void create(TransformTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPTRANSFORMPOPUP_H_
