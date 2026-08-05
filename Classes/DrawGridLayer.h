#ifndef _DRAWGRIDLAYER_H_
#define _DRAWGRIDLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class DrawGridLayer {
public:
    DrawGridLayer();
    addToEffects(GameObject*);
    create(cocos2d::CCNode*);
    draw();
    init(cocos2d::CCNode*);
    loadBPM(float);
    loadMarkers(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    loadTimeMarkers(std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    removeFromEffects(GameObject*);
    ~DrawGridLayer();
};

#endif // _DRAWGRIDLAYER_H_
