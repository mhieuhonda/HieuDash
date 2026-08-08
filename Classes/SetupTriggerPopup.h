// ============================================================
// SetupTriggerPopup.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SETUPTRIGGERPOPUP_H_
#define SETUPTRIGGERPOPUP_H_

#include "cocos2d.h"
#include <string>

class SetupTriggerPopup {
public:
    virtual ~SetupTriggerPopup();
    virtual ~SetupTriggerPopup();
    virtual ~SetupTriggerPopup();

    void getObjects();
    void onEaseRate(cocos2d::CCObject*);
    void pageChanged();
    void sliderBegan(Slider*);
    void sliderEnded(Slider*);
    void textChanged(CCTextInputNode*);
    void toggleGroup(int, bool);
    void updateLabel(int, std::string);
    void updateValue(int, float);
    void addInfoLabel(std::string, float, cocos2d::CCPoint, int, int);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onPlusButton(cocos2d::CCObject*);
    void updateSlider(int);
    void updateSlider(int, float);
    void valueChanged(int, float);
    void addHelpButton(std::string, std::string, float);
    void addCloseButton(std::string);
    void keyBackClicked();
    void onCustomButton(cocos2d::CCObject*);
    void onDisableValue(cocos2d::CCObject*);
    void onMultiTrigger(cocos2d::CCObject*);
    void valueDidChange(int, float);
    void addCustomButton(int, ButtonSprite*, cocos2d::CCPoint, int, int);
    void addObjectToPage(cocos2d::CCObject*, int);
    void closeInputNodes();
    void getTriggerValue(int, GameObject*);
    void textInputClosed(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void updateEaseLabel();
    void updateInputNode(int, float);
    void addObjectToGroup(cocos2d::CCObject*, int);
    void addObjectsToPage(cocos2d::CCArray*, int);
    void createPlusButton(int, cocos2d::CCPoint, float, std::string, int, int);
    void getPageContainer(int);
    void onCustomEaseRate(cocos2d::CCObject*);
    void onTouchTriggered(cocos2d::CCObject*);
    void shouldLimitValue(int);
    void toggleLimitValue(int, bool);
    void togglePageArrows(bool);
    void triggerArrowLeft(cocos2d::CCObject*);
    void updateInputValue(int, float&);
    void updateToggleItem(int, bool);
    void valuePopupClosed(ConfigureValuePopup*, float);
    void addObjectsToGroup(cocos2d::CCArray*, int);
    void createPageButtons(float, int);
    void getGroupContainer(int);
    void getMaxSliderValue(int);
    void getMinSliderValue(int);
    void getTruncatedValue(float, int);
    void onCustomEaseArrow(int, bool);
    void setMaxSliderValue(float, int);
    void setMinSliderValue(float, int);
    void triggerArrowRight(cocos2d::CCObject*);
    void updateEditorLabel();
    void createCustomButton(int, std::string, std::string, cocos2d::CCPoint, float, float, bool, int, int);
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCPoint);
    void createValueControl(int, std::string, cocos2d::CCPoint, float, float, float);
    void onSpawnedByTrigger(cocos2d::CCObject*);
    void onCustomEaseArrowUp(cocos2d::CCObject*);
    void resetDisabledValues();
    void triggerArrowChanged(int, bool);
    void updateEaseRateLabel();
    void updateValueControls(int, float);
    void createEasingControls(cocos2d::CCPoint, float, int, int);
    void determineStartValues();
    void onToggleTriggerValue(cocos2d::CCObject*);
    void removeObjectFromPage(cocos2d::CCObject*, int);
    void toggleDisableButtons(bool);
    void triggerSliderChanged(cocos2d::CCObject*);
    void updateInputNodeLabel(int, std::string);
    void updateTouchTriggered();
    void onCustomEaseArrowDown(cocos2d::CCObject*);
    void removeObjectFromGroup(cocos2d::CCObject*, int);
    void textInputShouldOffset(CCTextInputNode*, float);
    void updateCustomEaseLabel(int, int);
    void updateMultiTriggerBtn();
    void getTruncatedValueByTag(int, float);
    void refreshGroupVisibility();
    void updateSpawnedByTrigger();
    void createMultiTriggerItems(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCPoint);
    void createToggleValueControl(int, std::string, cocos2d::CCPoint, bool, int, int, float);
    void toggleEaseRateVisibility();
    void createValueControlWArrows(int, std::string, cocos2d::CCPoint, float);
    void updateCustomEaseRateLabel(int, float);
    void updateCustomToggleTrigger(int, bool);
    void createCustomEasingControls(std::string, cocos2d::CCPoint, float, int, int, int, int);
    void createValueControlAdvanced(int, std::string, cocos2d::CCPoint, float, bool, InputValueType, int, bool, float, float, int, int, GJInputStyle, int, bool);
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void updateDefaultTriggerValues();
    void triggerSliderValueFromValue(int, float);
    void triggerValueFromSliderValue(int, float);
    void createMultiTriggerItemsCorner();
    void createCustomToggleValueControl(int, bool, bool, std::string, cocos2d::CCPoint, bool, int, int);
    void createMultiTriggerItemsDefault();
    void toggleCustomEaseRateVisibility(int, int);
    void createToggleValueControlAdvanced(int, std::string, cocos2d::CCPoint, bool, int, int, float, float, float, cocos2d::CCPoint);
    void createMultiTriggerItemsDefaultVertical();
    void createMultiTriggerItemsDefaultHorizontal();
    void init(EffectGameObject*, cocos2d::CCArray*, float, float, int);
    void show();
    void create(EffectGameObject*, cocos2d::CCArray*, float, float, int);
    void create(float, float);
    void onEase(cocos2d::CCObject*);
    void onPage(cocos2d::CCObject*);
    void hideAll();
    void onClose(cocos2d::CCObject*);
    void addTitle(std::string);
    void getValue(int);
    void goToPage(int, bool);
    void preSetup();
    void toggleBG(bool);
    void postSetup();

};

#endif // SETUPTRIGGERPOPUP_H_
