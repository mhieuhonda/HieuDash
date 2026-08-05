#ifndef HIEUDASH_ADTOOLBOX_H_
#define HIEUDASH_ADTOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class AdToolbox {
public:
    void cacheInterstitial();
    void cacheInterstitial(std::string);
    void disableBanner();
    void enableBanner();
    void hasCachedInterstitial();
    void hasCachedInterstitial(std::string);
    void setupAds();
    void showInterstitial();
    void showInterstitial(std::string);
};

#endif // HIEUDASH_ADTOOLBOX_H_
