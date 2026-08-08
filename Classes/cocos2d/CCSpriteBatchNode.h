// ============================================================
// CCSpriteBatchNode.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCSPRITEBATCHNODE_H_
#define COCOS2D_CCSPRITEBATCHNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSpriteBatchNode {
public:
    CCSpriteBatchNode();
    CCSpriteBatchNode();

    virtual ~CCSpriteBatchNode();
    virtual ~CCSpriteBatchNode();
    virtual ~CCSpriteBatchNode();

    void getTexture();
    void setTexture(cocos2d::CCTexture2D*);
    void appendChild(cocos2d::CCSprite*);
    void insertChild(cocos2d::CCSprite*, unsigned int);
    void removeChild(cocos2d::CCNode*, bool);
    void getBlendFunc();
    void initWithFile(char const*, unsigned int);
    void reorderBatch(bool);
    void reorderChild(cocos2d::CCNode*, int);
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void initWithTexture(cocos2d::CCTexture2D*, unsigned int);
    void sortAllChildren();
    void updateBlendFunc();
    void getAtlasCapacity();
    void updateAtlasIndex(cocos2d::CCSprite*, int*);
    void createWithTexture(cocos2d::CCTexture2D*, unsigned int);
    void atlasIndexForChild(cocos2d::CCSprite*, int);
    void removeChildAtIndex(unsigned int, bool);
    void rebuildIndexInOrder(cocos2d::CCSprite*, unsigned int);
    void addSpriteWithoutQuad(cocos2d::CCSprite*, unsigned int, int);
    void getUsedAtlasCapacity();
    void insertQuadFromSprite(cocos2d::CCSprite*, unsigned int);
    void updateQuadFromSprite(cocos2d::CCSprite*, unsigned int);
    void increaseAtlasCapacity(unsigned int);
    void increaseAtlasCapacity();
    void manualSortAllChildren();
    void removeSpriteFromAtlas(cocos2d::CCSprite*);
    void lowestAtlasIndexInChild(cocos2d::CCSprite*);
    void highestAtlasIndexInChild(cocos2d::CCSprite*);
    void removeAllChildrenWithCleanup(bool);
    void draw();
    void init();
    void swap(int, int);
    void visit();
    void create(char const*, unsigned int);
    void addChild(cocos2d::CCNode*);
    void addChild(cocos2d::CCNode*, int);
    void addChild(cocos2d::CCNode*, int, int);

};

} // namespace cocos2d

#endif // COCOS2D_CCSPRITEBATCHNODE_H_
