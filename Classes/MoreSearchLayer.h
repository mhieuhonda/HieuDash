// ============================================================
// MoreSearchLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef MORESEARCHLAYER_H_
#define MORESEARCHLAYER_H_

#include "cocos2d.h"
#include <string>

class MoreSearchLayer : public cocos2d::CCLayer {
public:
    virtual ~MoreSearchLayer();
    virtual ~MoreSearchLayer();
    virtual ~MoreSearchLayer();

    void onFeatured(cocos2d::CCObject*);
    void onFollowed(cocos2d::CCObject*);
    void onOriginal(cocos2d::CCObject*);
    void onSongMode(cocos2d::CCObject*);
    void selectSong(int);
    void onCompleted(cocos2d::CCObject*);
    void onLegendary(cocos2d::CCObject*);
    void onTwoPlayer(cocos2d::CCObject*);
    void onSongFilter(cocos2d::CCObject*);
    void audioPrevious(cocos2d::CCObject*);
    void onUncompleted(cocos2d::CCObject*);
    void keyBackClicked() override;
    void textInputReturn(CCTextInputNode*);
    void toggleSongNodes(bool, bool);
    void updateAudioLabel();
    void createToggleButton(std::string, void (cocos2d::CCObject::*)(cocos2d::CCObject*), bool, cocos2d::CCMenu*, cocos2d::CCPoint);
    void textInputShouldOffset(CCTextInputNode*, float);
    void init() override;
    void create();
    void onEpic(cocos2d::CCObject*);
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onCoins(cocos2d::CCObject*);
    void onMythic(cocos2d::CCObject*);
    void onNoStar(cocos2d::CCObject*);
    void audioNext(cocos2d::CCObject*);
    void onFriends(cocos2d::CCObject*);

};

#endif // MORESEARCHLAYER_H_
