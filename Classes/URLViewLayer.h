
#ifndef URLVIEWLAYER_H_
#define URLVIEWLAYER_H_

#include "cocos2d.h"
#include <string>

class URLViewLayer {
public:
    virtual ~URLViewLayer();

    void init(std::string, cocos2d::CCArray*);
    void create(std::string, cocos2d::CCArray*);

};

#endif // URLVIEWLAYER_H_
