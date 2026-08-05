#ifndef _ADTOOLBOX_H_
#define _ADTOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class AdToolbox {
public:
    cacheInterstitial();
    cacheInterstitial(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    disableBanner();
    enableBanner();
    hasCachedInterstitial();
    hasCachedInterstitial(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    setupAds();
    showInterstitial();
    showInterstitial(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
};

#endif // _ADTOOLBOX_H_
