#ifndef HIEUDASH_DIALOGOBJECT_H_
#define HIEUDASH_DIALOGOBJECT_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// NPC dialog data

#include "cocos2d.h"
#include "HieuDashEnums.h"

class DialogObject : public cocos2d::CCObject {
public:
    DialogObject();

    std::string m_sText;
    int m_nDialogID;
    int m_nNPCID;
    float m_fDuration;
    bool m_bIsLeft;
    int m_nButtonType;
    std::string m_sButtonText;

    static DialogObject* create();
    static DialogObject* createWithDialogData(std::string);
    bool init();
    std::string getText();
    int getDialogID();
    int getNPCID();

    ~DialogObject();
};

#endif // HIEUDASH_DIALOGOBJECT_H_
