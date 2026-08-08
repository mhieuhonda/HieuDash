
#ifndef SETUPARTSWITCHPOPUP_H_
#define SETUPARTSWITCHPOPUP_H_

#include "cocos2d.h"

class SetupArtSwitchPopup {
public:
    virtual ~SetupArtSwitchPopup();

    void selectArtClosed(SelectArtLayer*);
    void init(ArtTriggerGameObject*, cocos2d::CCArray*, int);
    void onArt(cocos2d::CCObject*);
    void create(ArtTriggerGameObject*, cocos2d::CCArray*, int);

};

#endif // SETUPARTSWITCHPOPUP_H_
