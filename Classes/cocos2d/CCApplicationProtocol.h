// ============================================================
// CCApplicationProtocol.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCAPPLICATIONPROTOCOL_H_
#define COCOS2D_CCAPPLICATIONPROTOCOL_H_

#include "cocos2d.h"

namespace cocos2d {

class CCApplicationProtocol {
public:
    void gameDidSave();
    void trySaveGame(bool);
    void applicationWillBecomeActive();
    void applicationWillResignActive();
    void openURL(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCAPPLICATIONPROTOCOL_H_
