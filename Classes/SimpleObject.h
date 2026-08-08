
#ifndef SIMPLEOBJECT_H_
#define SIMPLEOBJECT_H_

class SimpleObject : public cocos2d::CCNode {
public:
    virtual ~SimpleObject();

    bool init();
    void create();

};

#endif // SIMPLEOBJECT_H_
