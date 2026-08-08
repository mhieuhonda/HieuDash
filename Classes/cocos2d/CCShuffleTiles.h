// ============================================================
// CCShuffleTiles.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSHUFFLETILES_H_
#define COCOS2D_CCSHUFFLETILES_H_

#include "cocos2d.h"

namespace cocos2d {

class CCShuffleTiles {
public:
    virtual ~CCShuffleTiles();
    virtual ~CCShuffleTiles();
    virtual ~CCShuffleTiles();

    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void initWithDuration(float, cocos2d::CCSize const&, unsigned int);
    void create(float, cocos2d::CCSize const&, unsigned int);
    void update(float);
    void shuffle(unsigned int*, unsigned int);
    void getDelta(cocos2d::CCSize const&);
    void placeTile(cocos2d::CCPoint const&, cocos2d::Tile*);

};

} // namespace cocos2d

#endif // COCOS2D_CCSHUFFLETILES_H_
