
#ifndef ENDLEVELLAYER_H_
#define ENDLEVELLAYER_H_

#include "cocos2d.h"
#include <string>

class EndLevelLayer : public cocos2d::CCLayer {
public:
    virtual ~EndLevelLayer();

    void getEndText();
    void customSetup();
    void onEveryplay(cocos2d::CCObject*);
    void onHideLayer(cocos2d::CCObject*);
    void getCoinString();
    void playEndEffect();
    void tryShowBanner(float);
    void keyBackClicked() override;
    void playCoinEffect(float);
    void playStarEffect(float);
    void coinEnterFinished(cocos2d::CCPoint);
    void enterAnimFinished();
    void playDiamondEffect(float);
    void starEnterFinished();
    void coinEnterFinishedO(cocos2d::CCObject*);
    void onLevelLeaderboard(cocos2d::CCObject*);
    void playCurrencyEffect(float);
    void onRestartCheckpoint(cocos2d::CCObject*);
    void diamondEnterFinished();
    void currencyEnterFinished();
    void init(PlayLayer*) override;
    void keyUp(cocos2d::enumKeyCodes, double);
    void create(PlayLayer*);
    void goEdit();
    void onEdit(cocos2d::CCObject*);
    void onMenu(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onReplay(cocos2d::CCObject*);
    void showLayer(bool);

protected:
    std::string m_coinString;

};

#endif // ENDLEVELLAYER_H_
