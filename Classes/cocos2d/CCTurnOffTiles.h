// ============================================================
// CCTurnOffTiles.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTURNOFFTILES_H_
#define COCOS2D_CCTURNOFFTILES_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTurnOffTiles {
public:
    virtual ~CCTurnOffTiles();
    virtual ~CCTurnOffTiles();
    virtual ~CCTurnOffTiles();

    void turnOnTile(cocos2d::CCPoint const&);
    void turnOffTile(cocos2d::CCPoint const&);
    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void initWithDuration(float, cocos2d::CCSize const&, unsigned int);
    void create(float, cocos2d::CCSize const&);
    void create(float, cocos2d::CCSize const&, unsigned int);
    void update(float);
    void shuffle(unsigned int*, unsigned int);

};

} // namespace cocos2d

#endif // COCOS2D_CCTURNOFFTILES_H_
