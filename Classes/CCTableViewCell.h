#ifndef _CCTABLEVIEWCELL_H_
#define _CCTABLEVIEWCELL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCTableViewCell {
public:
    CCTableViewCell(char const*, float, float);
    deleteButtonSelector(cocos2d::CCObject*);
    getCellIdentifier();
    getDelBtnColor();
    getDeleteButton();
    getEditable();
    isDeleteButtonShow();
    resetDeleteButtonPosition();
    setCellIdentifier(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&);
    setDelBtnColor(cocos2d::_ccColor3B);
    setDeleteButton(cocos2d::CCMenuItem*);
    setEditable(bool);
    showDeleteButton(bool);
    updateVisibility();
    ~CCTableViewCell();
};

#endif // _CCTABLEVIEWCELL_H_
