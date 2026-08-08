
#ifndef GJUSERMESSAGE_H_
#define GJUSERMESSAGE_H_

#include "cocos2d.h"

class GJUserMessage {
public:
    virtual ~GJUserMessage();

    void init();
    void create(cocos2d::CCDictionary*);
    void create();

};

#endif // GJUSERMESSAGE_H_
