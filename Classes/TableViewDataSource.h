
#ifndef TABLEVIEWDATASOURCE_H_
#define TABLEVIEWDATASOURCE_H_

class TableViewDataSource {
public:
    void numberOfSectionsInTableView(TableView*);
    void TableViewCommitCellEditingStyleForRowAtIndexPath(TableView*, TableViewCellEditingStyle, CCIndexPath&);

};

#endif // TABLEVIEWDATASOURCE_H_
