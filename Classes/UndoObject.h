#ifndef HIEUDASH_UNDOOBJECT_H_
#define HIEUDASH_UNDOOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class UndoObject : public cocos2d::CCObject {
public:
    UndoObject();

    // --- Undo state ---
    GameObject* m_pObject;
    EditCommand m_eUndoCommand;
    cocos2d::CCArray* m_pUndoArray;
    bool m_bRedo;

    // --- Methods ---
    UndoObject* create(GameObject*, EditCommand);
    int getCommand();
    int getObject();
    bool init(GameObject*, EditCommand);
    ~UndoObject();
};

#endif // HIEUDASH_UNDOOBJECT_H_
