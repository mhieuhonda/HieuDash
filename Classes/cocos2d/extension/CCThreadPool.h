// ============================================================
// CCThreadPool.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_EXTENSION_CCTHREADPOOL_H_
#define COCOS2D_EXTENSION_CCTHREADPOOL_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCThreadPool {
public:
    CCThreadPool(unsigned long);
    CCThreadPool(unsigned long);

    virtual ~CCThreadPool();
    virtual ~CCThreadPool();

    void availableThreadCount();
    void enqueue(std::function<void ()> const&);
    void shutdown();

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCTHREADPOOL_H_
