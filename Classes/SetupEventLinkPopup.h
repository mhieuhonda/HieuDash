// ============================================================
// SetupEventLinkPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETUPEVENTLINKPOPUP_H_
#define SETUPEVENTLINKPOPUP_H_

#include "cocos2d.h"

class SetupEventLinkPopup {
public:
    virtual ~SetupEventLinkPopup();
    virtual ~SetupEventLinkPopup();
    virtual ~SetupEventLinkPopup();

    void onSelectEvent(cocos2d::CCObject*);
    void updateEventIDs(std::set<int, std::less<int>, std::allocator<int> >&);
    void init(EventLinkTrigger*, cocos2d::CCArray*);
    void create(EventLinkTrigger*, cocos2d::CCArray*);

};

#endif // SETUPEVENTLINKPOPUP_H_
