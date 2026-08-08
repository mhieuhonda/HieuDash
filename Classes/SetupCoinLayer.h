
#ifndef SETUPCOINLAYER_H_
#define SETUPCOINLAYER_H_

#include "cocos2d.h"

class SetupCoinLayer {
public:
    virtual ~SetupCoinLayer();

    void init(EffectGameObject*, cocos2d::CCArray*);
    void create(EffectGameObject*, cocos2d::CCArray*);

};

#endif // SETUPCOINLAYER_H_
