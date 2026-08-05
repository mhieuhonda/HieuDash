#ifndef HIEUDASH_CCTABLEVIEWCELL_H_
#define HIEUDASH_CCTABLEVIEWCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCTableViewCell : public cocos2d::CCNode {
public:
    CCTableViewCell(char const*, float, float);
    void deleteButtonSelector(cocos2d::CCObject*);
    int getCellIdentifier();
    int getDelBtnColor();
    int getDeleteButton();
    int getEditable();
    bool isDeleteButtonShow();
    void resetDeleteButtonPosition();
    void setCellIdentifier(std::string const&);
    void setDelBtnColor(cocos2d::_ccColor3B);
    void setDeleteButton(cocos2d::CCMenuItem*);
    void setEditable(bool);
    void showDeleteButton(bool);
    void updateVisibility();
    ~CCTableViewCell();
};

#endif // HIEUDASH_CCTABLEVIEWCELL_H_
