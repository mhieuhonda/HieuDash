
#ifndef GJUSERMESSAGE_H_
#define GJUSERMESSAGE_H_

#include "cocos2d.h"

class GJUserMessage : public cocos2d::CCNode {
public:
    virtual ~GJUserMessage();

    bool init();
    void create(cocos2d::CCDictionary*);
    void create();

};

#endif // GJUSERMESSAGE_H_
