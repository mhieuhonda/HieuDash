
#ifndef CUSTOMIZEOBJECTLAYER_H_
#define CUSTOMIZEOBJECTLAYER_H_

#include "cocos2d.h"
#include <string>

class CustomizeObjectLayer {
public:
    virtual ~CustomizeObjectLayer();

    void onLiveEdit(cocos2d::CCObject*);
    void onSettings(cocos2d::CCObject*);
    void onEditColor(cocos2d::CCObject*);
    void textChanged(CCTextInputNode*);
    void onBreakApart(cocos2d::CCObject*);
    void onSelectMode(cocos2d::CCObject*);
    void getActiveMode(bool);
    void onSelectColor(cocos2d::CCObject*);
    void recreateLayer();
    void sliderChanged(cocos2d::CCObject*);
    void toggleVisible();
    void getButtonByTag(int);
    void hsvPopupClosed(HSVWidgetPopup*, cocos2d::_ccHSVValue);
    void keyBackClicked();
    void updateSelected(int);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void colorSetupClosed(int);
    void updateHSVButtons();
    void colorSelectClosed(cocos2d::CCNode*);
    void highlightSelected(ButtonSprite*);
    void updateColorSprite();
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void onNextColorChannel(cocos2d::CCObject*);
    void updateChannelLabel(int);
    void updateKerningLabel();
    void onUpdateCustomColor(cocos2d::CCObject*);
    void determineStartValues();
    void updateCurrentSelection();
    void updateCustomColorLabels();
    void init(GameObject*, cocos2d::CCArray*);
    void onHSV(cocos2d::CCObject*);
    void create(GameObject*, cocos2d::CCArray*);
    void getHSV();
    void onCopy(cocos2d::CCObject*);
    void onClear(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onPaste(cocos2d::CCObject*);
    void onBrowse(cocos2d::CCObject*);

protected:
    bool m_activeMode;
    int m_buttonByTag;

};

#endif // CUSTOMIZEOBJECTLAYER_H_
