// ============================================================
// CCApplicationProtocol.h — Reconstructed from libcocos2dcpp.so symbols
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
