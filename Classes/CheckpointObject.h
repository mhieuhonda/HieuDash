
#ifndef CHECKPOINTOBJECT_H_
#define CHECKPOINTOBJECT_H_

class CheckpointObject {
public:
    virtual ~CheckpointObject();

    void init();
    void create();
    void getObject();
    void setObject(GameObject*);

};

#endif // CHECKPOINTOBJECT_H_
