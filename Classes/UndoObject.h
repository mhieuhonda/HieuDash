
#ifndef UNDOOBJECT_H_
#define UNDOOBJECT_H_

#include "cocos2d.h"

class UndoObject : public cocos2d::CCObject {
public:
    virtual ~UndoObject();

    void setObjects(cocos2d::CCArray*);
    UndoObject* createWithArray(cocos2d::CCArray*, UndoCommand);
    void initWithTransformObjects(cocos2d::CCArray*, UndoCommand);
    UndoObject* createWithTransformObjects(cocos2d::CCArray*, UndoCommand);
    void init(GameObject*, UndoCommand) override;
    void init(cocos2d::CCArray*, UndoCommand) override;
    void create(GameObject*, UndoCommand);

};

#endif // UNDOOBJECT_H_
