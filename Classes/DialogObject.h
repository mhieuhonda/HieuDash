
#ifndef DIALOGOBJECT_H_
#define DIALOGOBJECT_H_

#include "cocos2d.h"
#include <string>

class DialogObject {
public:
    virtual ~DialogObject();

    void init(std::string, std::string, int, float, bool, cocos2d::_ccColor3B);
    void create(std::string, std::string, int, float, bool, cocos2d::_ccColor3B);

};

#endif // DIALOGOBJECT_H_
