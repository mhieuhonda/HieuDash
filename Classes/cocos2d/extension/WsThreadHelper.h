// ============================================================
// WsThreadHelper.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_WSTHREADHELPER_H_
#define COCOS2D_EXTENSION_WSTHREADHELPER_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class WsThreadHelper {
public:
    WsThreadHelper();
    WsThreadHelper();

    virtual ~WsThreadHelper();
    virtual ~WsThreadHelper();
    virtual ~WsThreadHelper();

    void createThread(cocos2d::extension::WebSocket const&);
    void joinSubThread();
    void quitSubThread();
    void wsThreadEntryFunc(void*);
    void sendMessageToUIThread(cocos2d::extension::WsMessage*);
    void sendMessageToSubThread(cocos2d::extension::WsMessage*);
    void update(float);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_WSTHREADHELPER_H_
