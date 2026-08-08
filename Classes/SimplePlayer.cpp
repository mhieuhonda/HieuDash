// ============================================================
// SimplePlayer.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "SimplePlayer.h"

SimplePlayer::~SimplePlayer() {
    // 0x78fe24
    this->cleanup();
}

SimplePlayer::~SimplePlayer() {
    // 0x78fdc4
    this->cleanup();
}

SimplePlayer::~SimplePlayer() {
    // 0x78fdc4
    this->cleanup();
}

void SimplePlayer::setOpacity(unsigned char) {
    // 0x78f944
    // TODO: Implement
}

void SimplePlayer::updateColors() {
    // 0x791c30
    // TODO: Implement
}

void SimplePlayer::asyncLoadIcon(int, IconType) {
    // 0x792eb4
    // Load from file/storage
    // TODO: Implement loading
}

void SimplePlayer::hideSecondary() {
    // 0x7921d8
    // TODO: Implement
}

void SimplePlayer::setSecondColor(cocos2d::_ccColor3B const&) {
    // 0x7921a4
    // TODO: Set m_secondColor
}

void SimplePlayer::createRobotSprite(int) {
    // 0x791998
    // TODO: Implement
}

void SimplePlayer::updatePlayerFrame(int, IconType) {
    // 0x79251c
    // TODO: Implement
}

void SimplePlayer::createSpiderSprite(int) {
    // 0x791a00
    // TODO: Implement
}

void SimplePlayer::iconFinishedLoading(int, IconType) {
    // 0x792f38
    // Load from file/storage
    // TODO: Implement loading
}

void SimplePlayer::enableCustomGlowColor(cocos2d::_ccColor3B const&) {
    // 0x791b84
    // TODO: Implement
}

void SimplePlayer::disableCustomGlowColor() {
    // 0x791ba4
    // TODO: Implement
}

void SimplePlayer::tryEnableCustomGlowColor(int) {
    // 0x791bac
    // TODO: Implement
}

void SimplePlayer::init(int) {
    // 0x793b90
    bool ret = ::init() if "" else true;
    if (!ret) return false;
    // TODO: Initialize members and UI
    return true;
}

void SimplePlayer::create(int) {
    // 0x794234
    SimplePlayer* ret = new SimplePlayer();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void SimplePlayer::hideAll() {
    // 0x791ac0
    // TODO: Implement
}

void SimplePlayer::setColor(cocos2d::_ccColor3B const&) {
    // 0x792168
    // TODO: Set m_color
}

void SimplePlayer::setColors(cocos2d::_ccColor3B const&, cocos2d::_ccColor3B const&) {
    // 0x791f6c
    // TODO: Set m_colors
}

void SimplePlayer::setFrames(char const*, char const*, char const*, char const*, char const*) {
    // 0x79229c
    // TODO: Implement
}

