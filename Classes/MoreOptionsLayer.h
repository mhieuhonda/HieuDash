
#ifndef MOREOPTIONSLAYER_H_
#define MOREOPTIONSLAYER_H_

#include "cocos2d.h"

class MoreOptionsLayer : public cocos2d::CCLayer {
public:
    virtual ~MoreOptionsLayer();

    void onGPSignIn(cocos2d::CCObject*);
    void onNextPage(cocos2d::CCObject*);
    void onParental(cocos2d::CCObject*);
    void onPrevPage(cocos2d::CCObject*);
    void onFMODDebug(cocos2d::CCObject*);
    void onGPSignOut(cocos2d::CCObject*);
    int countForPage(int);
    void layerForPage(int);
    void nextPosition(int);
    void onKeybindings(cocos2d::CCObject*);
    void onSongBrowser(cocos2d::CCObject*);
    void keyBackClicked() override;
    void objectsForPage(int);
    void textInputReturn(CCTextInputNode*);
    void offsetToNextPage();
    void googlePlaySignedIn();
    void incrementCountForPage(int);
    void textInputShouldOffset(CCTextInputNode*, float);
    void dropDownLayerWillClose(GJDropDownLayer*);
    bool init() override;
    void create();
    void onInfo(cocos2d::CCObject*);
    void infoKey(int);
    void onClose(cocos2d::CCObject*);
    void pageKey(int);
    void goToPage(int);
    void layerKey(int);
    void onToggle(cocos2d::CCObject*);
    void toggleGP();
    void addToggle(char const*, char const*, char const*);
    void objectKey(int);

};

#endif // MOREOPTIONSLAYER_H_
