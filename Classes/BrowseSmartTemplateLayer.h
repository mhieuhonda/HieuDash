// ============================================================
// BrowseSmartTemplateLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef BROWSESMARTTEMPLATELAYER_H_
#define BROWSESMARTTEMPLATELAYER_H_

#include "cocos2d.h"
#include <string>

class BrowseSmartTemplateLayer {
public:
    virtual ~BrowseSmartTemplateLayer();
    virtual ~BrowseSmartTemplateLayer();
    virtual ~BrowseSmartTemplateLayer();

    void createDots();
    void updateDots();
    void createPrefab(std::string, int);
    void keyBackClicked();
    void addObjectToPage(cocos2d::CCObject*, int);
    void onTemplateObject(cocos2d::CCObject*);
    void addPrefabMenuItem(SmartPrefabResult, int);
    void init(GJSmartTemplate*, SmartBrowseFilter);
    void create(GJSmartTemplate*, SmartBrowseFilter);
    void onBack(cocos2d::CCObject*);
    void onClick(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void goToPage(int);
    void baseSetup();

};

#endif // BROWSESMARTTEMPLATELAYER_H_
