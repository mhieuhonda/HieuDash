#ifndef HIEUDASH_GAMETOOLBOX_H_
#define HIEUDASH_GAMETOOLBOX_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "extensions/network/CCHttpRequest.h"

class GameToolbox {
public:
    void alignItemsHorisontally(cocos2d::CCArray*, float, cocos2d::CCPoint);
    void alignItemsVertically(cocos2d::CCArray*, float, cocos2d::CCPoint);
    void doWeHaveInternet();
    static cocos2d::CCAction* getDropActionWDelay(float, float, float, cocos2d::CCNode*, void (cocos2d::CCObject::*)());
    int getDropActionWEnd(float, float, float, cocos2d::CCAction*, float);
    static int getResponse(cocos2d::extension::CCHttpResponse*);
    bool isIOS();
    void openRateURL(std::string, std::string);
    void postClipVisit();
    void preVisitWithClippingRect(cocos2d::CCNode*, cocos2d::CCRect, cocos2d::CCNode*);
};

#endif // HIEUDASH_GAMETOOLBOX_H_
