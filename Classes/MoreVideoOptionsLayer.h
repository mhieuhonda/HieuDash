
#ifndef MOREVIDEOOPTIONSLAYER_H_
#define MOREVIDEOOPTIONSLAYER_H_

#include "cocos2d.h"

class MoreVideoOptionsLayer {
public:
    virtual ~MoreVideoOptionsLayer();

    void onApplyFPS(cocos2d::CCObject*);
    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void countForPage(int);
    void layerForPage(int);
    void nextPosition(int);
    void keyBackClicked();
    void objectsForPage(int);
    void updateFPSButtons();
    void incrementCountForPage(int);
    void init();
    void create();
    void onInfo(cocos2d::CCObject*);
    void infoKey(int);
    void onClose(cocos2d::CCObject*);
    void pageKey(int);
    void goToPage(int);
    void layerKey(int);
    void onToggle(cocos2d::CCObject*);
    void addToggle(char const*, char const*, char const*);
    void objectKey(int);

};

#endif // MOREVIDEOOPTIONSLAYER_H_
