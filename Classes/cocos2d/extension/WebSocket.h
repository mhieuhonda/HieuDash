// ============================================================
// WebSocket.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_WEBSOCKET_H_
#define COCOS2D_EXTENSION_WEBSOCKET_H_

#include "cocos2d.h"
#include <string>
#include <vector>

namespace cocos2d {
namespace extension {

class WebSocket {
public:
    WebSocket();
    WebSocket();

    virtual ~WebSocket();
    virtual ~WebSocket();
    virtual ~WebSocket();

    void getReadyState();
    void onSubThreadLoop();
    void onSocketCallback(lws*, lws_callback_reasons, void*, void*, unsigned long);
    void onSubThreadEnded();
    void onSubThreadStarted();
    void onUIThreadReceiveMessage(cocos2d::extension::WsMessage*);
    void init(cocos2d::extension::WebSocket::Delegate const&, std::string const&, std::vector<std::string> const*);
    void send(unsigned char const*, unsigned int);
    void send(std::string const&);
    void close();

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_WEBSOCKET_H_
