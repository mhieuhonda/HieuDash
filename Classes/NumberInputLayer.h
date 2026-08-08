
#ifndef NUMBERINPUTLAYER_H_
#define NUMBERINPUTLAYER_H_

#include "cocos2d.h"

class NumberInputLayer : public cocos2d::CCLayer {
public:
    virtual ~NumberInputLayer();

    void deleteLast();
    void inputNumber(int);
    void keyBackClicked() override;
    void updateNumberState();
    void registerWithTouchDispatcher() override;
    void init() override;
    void create();
    void onDone(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onNumber(cocos2d::CCObject*);

};

#endif // NUMBERINPUTLAYER_H_
