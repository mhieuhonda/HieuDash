
#ifndef GJCOMMENT_H_
#define GJCOMMENT_H_

#include "cocos2d.h"

class GJComment : public cocos2d::CCNode {
public:
    virtual ~GJComment();

    bool init();
    void create(cocos2d::CCDictionary*);
    void create();

};

#endif // GJCOMMENT_H_
