
#ifndef GJITEMICON_H_
#define GJITEMICON_H_

#include "cocos2d.h"

class GJItemIcon {
public:
    virtual ~GJItemIcon();

    void setOpacity(unsigned char);
    void scaleForType(UnlockType);
    GJItemIcon* createStoreItem(UnlockType, int, bool, cocos2d::_ccColor3B);
    void darkenStoreItem(ShopType);
    void darkenStoreItem(cocos2d::_ccColor3B);
    GJItemIcon* createBrowserItem(UnlockType, int);
    void toggleEnabledState(bool);
    void changeToLockedState(float);
    void unlockedColorForType(int);
    void init(UnlockType, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, bool, bool, bool, cocos2d::_ccColor3B);
    void create(UnlockType, int, cocos2d::_ccColor3B, cocos2d::_ccColor3B, bool, bool, bool, cocos2d::_ccColor3B);

};

#endif // GJITEMICON_H_
