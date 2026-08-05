#ifndef _BITMAPFONTCACHE_H_
#define _BITMAPFONTCACHE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class BitmapFontCache {
public:
    BitmapFontCache();
    fontWithConfigFile(char const*, float);
    init();
    purgeSharedFontCache();
    sharedFontCache();
    ~BitmapFontCache();
};

#endif // _BITMAPFONTCACHE_H_
