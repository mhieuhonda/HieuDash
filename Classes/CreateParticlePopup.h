// ============================================================
// CreateParticlePopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CREATEPARTICLEPOPUP_H_
#define CREATEPARTICLEPOPUP_H_

#include "cocos2d.h"
#include <string>

class CreateParticlePopup {
public:
    virtual ~CreateParticlePopup();
    virtual ~CreateParticlePopup();
    virtual ~CreateParticlePopup();

    void getPageMenu(int);
    void sliderBegan(Slider*);
    void sliderEnded(Slider*);
    void textChanged(CCTextInputNode*);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void onQuickStart(cocos2d::CCObject*);
    void getPageButton(int);
    void onEmitterMode(cocos2d::CCObject*);
    void onMaxEmission(cocos2d::CCObject*);
    void onSelectColor(cocos2d::CCObject*);
    void sliderChanged(cocos2d::CCObject*);
    void getPageSliders(int);
    void keyBackClicked();
    void onCalcEmission(cocos2d::CCObject*);
    void onCopySettings(cocos2d::CCObject*);
    void onDynamicColor(cocos2d::CCObject*);
    void onUniformColor(cocos2d::CCObject*);
    void onEndRGBVarSync(cocos2d::CCObject*);
    void onPasteSettings(cocos2d::CCObject*);
    void onTogglePerfLog(cocos2d::CCObject*);
    void textInputClosed(CCTextInputNode*);
    void textInputReturn(CCTextInputNode*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void getPageContainer(int);
    void onDuplicateColor(cocos2d::CCObject*);
    void onOrderSensitive(cocos2d::CCObject*);
    void onToggleBlending(cocos2d::CCObject*);
    void colorSelectClosed(cocos2d::CCNode*);
    void getPageInputNodes(int);
    void onDurationForever(cocos2d::CCObject*);
    void onDynamicRotation(cocos2d::CCObject*);
    void onStartRGBVarSync(cocos2d::CCObject*);
    void toggleGravityMode(bool);
    void updateColorSprite(int);
    void onAnimateOnTrigger(cocos2d::CCObject*);
    void particleValueIsInt(gjParticleValue);
    void centerAlignParticle(cocos2d::CCObject*);
    void onAnimateActiveOnly(cocos2d::CCObject*);
    void updateSliderForType(gjParticleValue);
    void createParticleSlider(gjParticleValue, int, bool, cocos2d::CCPoint, cocos2d::CCArray*);
    void maxSliderValueForType(gjParticleValue);
    void minSliderValueForType(gjParticleValue);
    void textInputShouldOffset(CCTextInputNode*, float);
    void titleForParticleValue(gjParticleValue);
    void valueForParticleValue(gjParticleValue);
    void onSelectParticleTexture(cocos2d::CCObject*);
    void onToggleStartRotationIsDir(cocos2d::CCObject*);
    void updateParticleValueForType(float, gjParticleValue, cocos2d::CCParticleSystemQuad*);
    void onToggleStartSizeEqualToEnd(cocos2d::CCObject*);
    void onToggleStartSpinEqualToEnd(cocos2d::CCObject*);
    void updateInputNodeStringForType(gjParticleValue);
    void onToggleStartRadiusEqualToEnd(cocos2d::CCObject*);
    void init(ParticleGameObject*, cocos2d::CCArray*, std::string);
    void create(ParticleGameObject*, cocos2d::CCArray*);
    void create(ParticleGameObject*, cocos2d::CCArray*, std::string);
    void create(std::string);
    void onMode(cocos2d::CCObject*);
    void onPage(cocos2d::CCObject*);
    void update(float);
    void getPage(int);
    void onClose(cocos2d::CCObject*);
    void onPosType(cocos2d::CCObject*);
    void willClose();

};

#endif // CREATEPARTICLEPOPUP_H_
