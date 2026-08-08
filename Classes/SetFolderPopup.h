// ============================================================
// SetFolderPopup.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SETFOLDERPOPUP_H_
#define SETFOLDERPOPUP_H_

#include "cocos2d.h"
#include <string>

class SetFolderPopup {
public:
    virtual ~SetFolderPopup();
    virtual ~SetFolderPopup();
    virtual ~SetFolderPopup();

    void valueChanged();
    void onSetFolderName(cocos2d::CCObject*);
    void setTextPopupClosed(SetTextPopup*, std::string);
    void init(int, bool, std::string);
    void create(int, bool, std::string);

};

#endif // SETFOLDERPOPUP_H_
