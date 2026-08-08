// ============================================================
// UndoObject.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef UNDOOBJECT_H_
#define UNDOOBJECT_H_

#include "cocos2d.h"

class UndoObject {
public:
    virtual ~UndoObject();
    virtual ~UndoObject();
    virtual ~UndoObject();

    void setObjects(cocos2d::CCArray*);
    void createWithArray(cocos2d::CCArray*, UndoCommand);
    void initWithTransformObjects(cocos2d::CCArray*, UndoCommand);
    void createWithTransformObjects(cocos2d::CCArray*, UndoCommand);
    void init(GameObject*, UndoCommand);
    void init(cocos2d::CCArray*, UndoCommand);
    void create(GameObject*, UndoCommand);

};

#endif // UNDOOBJECT_H_
