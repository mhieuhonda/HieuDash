// ============================================================
// TableViewCellDelegate.h — Reconstructed from libcocos2dcpp.so symbols
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
