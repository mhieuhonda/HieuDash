
#ifndef SETUPCHECKPOINTPOPUP_H_
#define SETUPCHECKPOINTPOPUP_H_

#include "cocos2d.h"

class SetupCheckpointPopup {
public:
    virtual ~SetupCheckpointPopup();

    void init(CheckpointGameObject*, cocos2d::CCArray*);
    void create(CheckpointGameObject*, cocos2d::CCArray*);

};

#endif // SETUPCHECKPOINTPOPUP_H_
