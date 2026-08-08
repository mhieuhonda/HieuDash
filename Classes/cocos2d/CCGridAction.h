// ============================================================
// CCGridAction.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCGRIDACTION_H_
#define COCOS2D_CCGRIDACTION_H_

#include "cocos2d.h"

namespace cocos2d {

class CCGridAction {
public:
    virtual ~CCGridAction();
    virtual ~CCGridAction();
    virtual ~CCGridAction();

    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void initWithDuration(float, cocos2d::CCSize const&);
    void create(float, cocos2d::CCSize const&);
    void getGrid();
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCGRIDACTION_H_
