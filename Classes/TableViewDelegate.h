// ============================================================
// TableViewDelegate.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TABLEVIEWDELEGATE_H_
#define TABLEVIEWDELEGATE_H_

class TableViewDelegate {
public:
    void willTweenToIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    void didEndTweenToIndexPath(CCIndexPath&, TableView*);
    void TableViewDidDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    void TableViewWillReloadCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);
    void TableViewWillDisplayCellForRowAtIndexPath(CCIndexPath&, TableViewCell*, TableView*);

};

#endif // TABLEVIEWDELEGATE_H_
