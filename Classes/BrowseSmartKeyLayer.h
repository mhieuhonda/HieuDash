// ============================================================
// BrowseSmartKeyLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef BROWSESMARTKEYLAYER_H_
#define BROWSESMARTKEYLAYER_H_

#include "cocos2d.h"
#include <string>

class BrowseSmartKeyLayer {
public:
    virtual ~BrowseSmartKeyLayer();
    virtual ~BrowseSmartKeyLayer();
    virtual ~BrowseSmartKeyLayer();

    void onPrefabObject(cocos2d::CCObject*);
    void updateChanceValues();
    void addChanceToSelected(int, bool);
    void deletedSelectedItems();
    void getAllSelectedBlocks();
    void createTemplateObjects();
    void init(GJSmartTemplate*, std::string);
    void create(GJSmartTemplate*, std::string);
    void onBack(cocos2d::CCObject*);
    void onButton(cocos2d::CCObject*);

};

#endif // BROWSESMARTKEYLAYER_H_
