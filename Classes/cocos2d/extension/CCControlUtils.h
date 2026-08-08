// ============================================================
// CCControlUtils.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCCONTROLUTILS_H_
#define COCOS2D_EXTENSION_CCCONTROLUTILS_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCControlUtils {
public:
    void HSVfromRGB(cocos2d::extension::RGBA);
    void RGBfromHSV(cocos2d::extension::HSV);
    void CCRectUnion(cocos2d::CCRect const&, cocos2d::CCRect const&);
    void addSpriteToTargetWithPosAndAnchor(char const*, cocos2d::CCNode*, cocos2d::CCPoint, cocos2d::CCPoint);

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCCONTROLUTILS_H_
