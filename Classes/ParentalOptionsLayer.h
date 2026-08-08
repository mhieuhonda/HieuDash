
#ifndef PARENTALOPTIONSLAYER_H_
#define PARENTALOPTIONSLAYER_H_

#include "cocos2d.h"

class ParentalOptionsLayer : public cocos2d::CCLayer {
public:
    virtual ~ParentalOptionsLayer();

    void onNextPage(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    int countForPage(int);
    void layerForPage(int);
    void nextPosition(int);
    void keyBackClicked();
    void objectsForPage(int);
    void incrementCountForPage(int);
    bool init();
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

#endif // PARENTALOPTIONSLAYER_H_
