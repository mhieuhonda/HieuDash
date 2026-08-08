
#ifndef GJMESSAGECELL_H_
#define GJMESSAGECELL_H_

#include "cocos2d.h"

class GJMessageCell : public cocos2d::CCNode {
public:
    GJMessageCell(char const*, float, float);
    GJMessageCell(char const*, float, float);

    virtual ~GJMessageCell();

    void markAsRead();
    void onClosePopup(UploadActionPopup*);
    void updateToggle();
    void onViewMessage(cocos2d::CCObject*);
    void onViewProfile(cocos2d::CCObject*);
    void updateBGColor(int);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void loadFromMessage(GJUserMessage*);
    void onDeleteMessage(cocos2d::CCObject*);
    void uploadActionFailed(int, int);
    void uploadActionFinished(int, int);
    void draw();
    bool init();
    void onToggle(cocos2d::CCObject*);

};

#endif // GJMESSAGECELL_H_
