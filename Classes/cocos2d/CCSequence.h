// ============================================================
// CCSequence.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSEQUENCE_H_
#define COCOS2D_CCSEQUENCE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSequence {
public:
    virtual ~CCSequence();
    virtual ~CCSequence();
    virtual ~CCSequence();

    void copyWithZone(cocos2d::CCZone*);
    void startWithTarget(cocos2d::CCNode*);
    void initWithTwoActions(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*);
    void createWithTwoActions(cocos2d::CCFiniteTimeAction*, cocos2d::CCFiniteTimeAction*);
    void createWithVariableList(cocos2d::CCFiniteTimeAction*, std::__va_list);
    void stop();
    void create(cocos2d::CCFiniteTimeAction*, ...);
    void create(cocos2d::CCArray*);
    void update(float);
    void reverse();

};

} // namespace cocos2d

#endif // COCOS2D_CCSEQUENCE_H_
