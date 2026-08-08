
#ifndef SETUPPERSISTENTITEMTRIGGERPOPUP_H_
#define SETUPPERSISTENTITEMTRIGGERPOPUP_H_

#include "cocos2d.h"

class SetupPersistentItemTriggerPopup {
public:
    virtual ~SetupPersistentItemTriggerPopup();

    void init(ItemTriggerGameObject*, cocos2d::CCArray*);
    void create(ItemTriggerGameObject*, cocos2d::CCArray*);

};

#endif // SETUPPERSISTENTITEMTRIGGERPOPUP_H_
