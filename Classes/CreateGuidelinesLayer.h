
#ifndef CREATEGUIDELINESLAYER_H_
#define CREATEGUIDELINESLAYER_H_

#include "cocos2d.h"
#include <string>

class CreateGuidelinesLayer {
public:
    virtual ~CreateGuidelinesLayer();

    void toggleItems(bool);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void registerTouch();
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void recordingDidStop();
    void doClearGuidelines();
    void onClearGuidelines(cocos2d::CCObject*);
    void getMergedRecordString(std::string, std::string);
    void registerWithTouchDispatcher();
    void init(CustomSongDelegate*, AudioGuidelinesType);
    void keyUp(cocos2d::enumKeyCodes, double);
    void create(CustomSongDelegate*, AudioGuidelinesType);
    void onInfo(cocos2d::CCObject*);
    void onStop(cocos2d::CCObject*);
    void update(float);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onClose(cocos2d::CCObject*);
    void onRecord(cocos2d::CCObject*);
    void playMusic();

protected:
    std::string m_mergedRecordString;

};

#endif // CREATEGUIDELINESLAYER_H_
