// ============================================================
// CCHttpClient.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCHTTPCLIENT_H_
#define COCOS2D_EXTENSION_CCHTTPCLIENT_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCHttpClient {
public:
    CCHttpClient();
    CCHttpClient();

    virtual ~CCHttpClient();
    virtual ~CCHttpClient();
    virtual ~CCHttpClient();

    void getInstance();
    void destroyInstance();
    void availableThreadCount();
    void dispatchResponseCallbacks(float);
    void send(cocos2d::extension::CCHttpRequest*);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCHTTPCLIENT_H_
