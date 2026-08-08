
#ifndef CHECKPOINTOBJECT_H_
#define CHECKPOINTOBJECT_H_

class CheckpointObject : public cocos2d::CCNode {
public:
    virtual ~CheckpointObject();

    bool init();
    void create();
    void getObject();
    void setObject(GameObject*);

};

#endif // CHECKPOINTOBJECT_H_
