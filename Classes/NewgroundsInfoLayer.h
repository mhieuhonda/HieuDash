
#ifndef NEWGROUNDSINFOLAYER_H_
#define NEWGROUNDSINFOLAYER_H_

#include "cocos2d.h"

class NewgroundsInfoLayer : public cocos2d::CCLayer {
public:
    virtual ~NewgroundsInfoLayer();

    void onSupporter(cocos2d::CCObject*);
    void onGuidelines(cocos2d::CCObject*);
    void onNewgrounds(cocos2d::CCObject*);
    void keyBackClicked();
    void FLAlert_Clicked(FLAlertLayer*, bool);
    bool init();
    void create();
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onArtists(cocos2d::CCObject*);
    void onChanges(cocos2d::CCObject*);

};

#endif // NEWGROUNDSINFOLAYER_H_
