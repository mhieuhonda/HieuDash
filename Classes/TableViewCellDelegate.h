// ============================================================
// TableViewCellDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TABLEVIEWCELLDELEGATE_H_
#define TABLEVIEWCELLDELEGATE_H_

#include "cocos2d.h"

class TableViewCellDelegate {
public:
    void getSelectedCellIdx();
    void cellPerformedAction(TableViewCell*, int, CellAction, cocos2d::CCNode*);
    void getCellDelegateType();
    void shouldSnapToSelected();

};

#endif // TABLEVIEWCELLDELEGATE_H_
