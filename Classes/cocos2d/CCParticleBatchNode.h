// ============================================================
// CCParticleBatchNode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCPARTICLEBATCHNODE_H_
#define COCOS2D_CCPARTICLEBATCHNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCParticleBatchNode {
public:
    CCParticleBatchNode();
    CCParticleBatchNode();

    virtual ~CCParticleBatchNode();
    virtual ~CCParticleBatchNode();
    virtual ~CCParticleBatchNode();

    void getTexture();
    void setTexture(cocos2d::CCTexture2D*);
    void insertChild(cocos2d::CCParticleSystem*, unsigned int);
    void removeChild(cocos2d::CCNode*, bool);
    void getBlendFunc();
    void initWithFile(char const*, unsigned int);
    void reorderChild(cocos2d::CCNode*, int);
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void addChildHelper(cocos2d::CCParticleSystem*, int, int);
    void disableParticle(unsigned int);
    void getCurrentIndex(unsigned int*, unsigned int*, cocos2d::CCNode*, int);
    void initWithTexture(cocos2d::CCTexture2D*, unsigned int);
    void updateBlendFunc();
    void createWithTexture(cocos2d::CCTexture2D*, unsigned int);
    void removeChildAtIndex(unsigned int, bool);
    void updateAllAtlasIndexes();
    void increaseAtlasCapacityTo(unsigned int);
    void removeAllChildrenWithCleanup(bool);
    void searchNewPositionInChildrenForZ(int);
    void draw();
    void visit();
    void create(char const*, unsigned int);
    void addChild(cocos2d::CCNode*);
    void addChild(cocos2d::CCNode*, int);
    void addChild(cocos2d::CCNode*, int, int);

};

} // namespace cocos2d

#endif // COCOS2D_CCPARTICLEBATCHNODE_H_
