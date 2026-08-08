
#ifndef EXPLODEITEMNODE_H_
#define EXPLODEITEMNODE_H_

#include "cocos2d.h"

class ExplodeItemNode {
public:
    virtual ~ExplodeItemNode();

    ExplodeItemNode* createSprites(int, int, float, float, float, float, float, float, cocos2d::_ccColor4F, cocos2d::_ccColor4F, bool);
    void init(cocos2d::CCRenderTexture*);
    void create(cocos2d::CCRenderTexture*);
    void update(float);

};

#endif // EXPLODEITEMNODE_H_
