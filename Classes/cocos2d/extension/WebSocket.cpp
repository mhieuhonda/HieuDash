// ============================================================
// WebSocket.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "WebSocket.h"

namespace cocos2d {
namespace extension {

WebSocket::WebSocket() {
    // 0xaadd74
}

WebSocket::WebSocket() {
    // 0xaadd74
}

WebSocket::~WebSocket() {
    // 0xaae684
    this->cleanup();
}

WebSocket::~WebSocket() {
    // 0xaae518
    this->cleanup();
}

WebSocket::~WebSocket() {
    // 0xaae518
    this->cleanup();
}

void WebSocket::getReadyState() {
    // 0xaae6a8
    // TODO: Implement
}

void WebSocket::onSubThreadLoop() {
    // 0xaad838
    // TODO: Implement
}

void WebSocket::onSocketCallback(lws*, lws_callback_reasons, void*, void*, unsigned long) {
    // 0xaae6b0
    // TODO: Implement
}

void WebSocket::onSubThreadEnded() {
    // 0xaad5ac
    // TODO: Implement
}

void WebSocket::onSubThreadStarted() {
    // 0xaad8c4
    // TODO: Implement
}

void WebSocket::onUIThreadReceiveMessage(cocos2d::extension::WsMessage*) {
    // 0xaad734
    // TODO: Implement
}

void WebSocket::init(cocos2d::extension::WebSocket::Delegate const&, std::string const&, std::vector<std::string> const*) {
    // 0xaaddc0
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void WebSocket::send(unsigned char const*, unsigned int) {
    // 0xaae404
    // TODO: Implement
}

void WebSocket::send(std::string const&) {
    // 0xaae360
    // TODO: Implement
}

void WebSocket::close() {
    // 0xaae4ac
    // TODO: Implement
}

} // namespace extension
} // namespace cocos2d
