
#ifndef SELECTEVENTLAYER_H_
#define SELECTEVENTLAYER_H_

#include "cocos2d.h"
#include <string>

class SelectEventLayer {
public:
    virtual ~SelectEventLayer();

    void nextPosition();
    void keyBackClicked();
    void onCustomToggleTriggerValue(cocos2d::CCObject*);
    void init(SetupEventLinkPopup*, std::set<int, std::less<int>, std::allocator<int> >&);
    void create(SetupEventLinkPopup*, std::set<int, std::less<int>, std::allocator<int> >&);
    void onInfo(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void addToggle(int, std::string);

};

#endif // SELECTEVENTLAYER_H_
