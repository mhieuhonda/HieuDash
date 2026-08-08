
#ifndef CUSTOMSONGLAYER_H_
#define CUSTOMSONGLAYER_H_

#include "cocos2d.h"

class CustomSongLayer {
public:
    virtual ~CustomSongLayer();

    void textChanged(CCTextInputNode*);
    void onNCSBrowser(cocos2d::CCObject*);
    void onCreateLines(cocos2d::CCObject*);
    void onSongBrowser(cocos2d::CCObject*);
    void keyBackClicked();
    void onMusicBrowser(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void musicBrowserClosed(MusicBrowser*);
    void onNewgroundsBrowser(cocos2d::CCObject*);
    void showNewgroundsMessage();
    void textInputShouldOffset(CCTextInputNode*, float);
    void dropDownLayerWillClose(GJDropDownLayer*);
    void init(CustomSongDelegate*);
    void show();
    void create(CustomSongDelegate*);
    void onClose(cocos2d::CCObject*);
    void onSearch(cocos2d::CCObject*);
    void onOptions(cocos2d::CCObject*);

};

#endif // CUSTOMSONGLAYER_H_
