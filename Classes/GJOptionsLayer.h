// ============================================================
// GJOptionsLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJOPTIONSLAYER_H_
#define GJOPTIONSLAYER_H_

#include "cocos2d.h"
#include <string>

class GJOptionsLayer {
public:
    virtual ~GJOptionsLayer();
    virtual ~GJOptionsLayer();
    virtual ~GJOptionsLayer();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void addGVToggle(char const*, char const*, char const*);
    void didToggleGV(std::string);
    void countForPage(int);
    void layerForPage(int);
    void nextPosition(int);
    void setupOptions();
    void objectsForPage(int);
    void getToggleButton(int);
    void offsetToNextPage();
    void addToggleInternal(char const*, int, bool, char const*);
    void incrementCountForPage(int);
    void init(int);
    void create(int);
    void onInfo(cocos2d::CCObject*);
    void infoKey(int);
    void pageKey(int);
    void goToPage(int);
    void layerKey(int);
    void onToggle(cocos2d::CCObject*);
    void addToggle(char const*, int, bool, char const*);
    void didToggle(int);
    void objectKey(int);

};

#endif // GJOPTIONSLAYER_H_
