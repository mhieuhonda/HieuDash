#ifndef _GAMETOOLBOX_H_
#define _GAMETOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class GameToolbox {
public:
    alignItemsHorisontally(cocos2d::CCArray*, float, cocos2d::CCPoint);
    alignItemsVertically(cocos2d::CCArray*, float, cocos2d::CCPoint);
    doWeHaveInternet();
    getDropActionWDelay(float, float, float, cocos2d::CCNode*, void (cocos2d::CCObject::*)());
    getDropActionWEnd(float, float, float, cocos2d::CCAction*, float);
    getResponse(cocos2d::extension::CCHttpResponse*);
    isIOS();
    openRateURL(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::basic_string<char, std::char_traits<char>, std::allocator<char> >);
    postClipVisit();
    preVisitWithClippingRect(cocos2d::CCNode*, cocos2d::CCRect, cocos2d::CCNode*);
};

#endif // _GAMETOOLBOX_H_
