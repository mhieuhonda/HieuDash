
#ifndef OPTIONSSCROLLLAYER_H_
#define OPTIONSSCROLLLAYER_H_

#include "cocos2d.h"

class OptionsScrollLayer {
public:
    virtual ~OptionsScrollLayer();

    void keyBackClicked();
    void getRelevantObjects(cocos2d::CCArray*);
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void registerWithTouchDispatcher();
    void init(cocos2d::CCArray*, bool, int);
    void create(cocos2d::CCArray*, bool, int);
    void onClose(cocos2d::CCObject*);
    void setupList(cocos2d::CCArray*);

};

#endif // OPTIONSSCROLLLAYER_H_
