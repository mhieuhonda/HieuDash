
#ifndef KEYBINDINGSLAYER_H_
#define KEYBINDINGSLAYER_H_

#include "cocos2d.h"

class KeybindingsLayer : public cocos2d::CCLayer {
public:
    virtual ~KeybindingsLayer();

    void addKeyPair(char const*, char const*);
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
    void objectKey(int);

};

#endif // KEYBINDINGSLAYER_H_
