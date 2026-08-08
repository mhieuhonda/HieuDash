// ============================================================
// CCProfiler.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCPROFILER_H_
#define COCOS2D_CCPROFILER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCProfiler {
public:
    virtual ~CCProfiler();
    virtual ~CCProfiler();
    virtual ~CCProfiler();

    void releaseTimer(char const*);
    void displayTimers();
    void sharedProfiler();
    void releaseAllTimers();
    void createAndAddTimerWithName(char const*);
    void init();

};

} // namespace cocos2d

#endif // COCOS2D_CCPROFILER_H_
