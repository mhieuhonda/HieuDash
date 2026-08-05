#ifndef HIEUDASH_FLALERTLAYERPROTOCOL_H_
#define HIEUDASH_FLALERTLAYERPROTOCOL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class FLAlertLayerProtocol : public cocos2d::CCObject {
public:
    FLAlertLayerProtocol();
    virtual ~FLAlertLayerProtocol() {}
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
};

#endif // HIEUDASH_FLALERTLAYERPROTOCOL_H_
