
#ifndef LIKEITEMLAYER_H_
#define LIKEITEMLAYER_H_

#include "cocos2d.h"

class LikeItemLayer {
public:
    virtual ~LikeItemLayer();

    void triggerLike(bool);
    void keyBackClicked();
    void init(LikeItemType, int, int);
    void create(LikeItemType, int, int);
    void onLike(cocos2d::CCObject*);
    void onClose(cocos2d::CCObject*);
    void onDislike(cocos2d::CCObject*);

};

#endif // LIKEITEMLAYER_H_
