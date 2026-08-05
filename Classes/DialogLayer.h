#ifndef HIEUDASH_DIALOGLAYER_H_
#define HIEUDASH_DIALOGLAYER_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// In-game NPC dialog

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include "FLAlertLayer.h"

class DialogLayer : public FLAlertLayer {
public:
    DialogLayer();

    cocos2d::CCArray* m_pDialogArray;
    int m_nCurrentDialog;
    cocos2d::CCSprite* m_pPortraitSprite;
    TextArea* m_pTextArea;
    DialogDelegate* m_pDelegate;
    bool m_bAnimateIn;
    float m_fDuration;

    static DialogLayer* create(cocos2d::CCArray*, DialogDelegate*);
    bool init(cocos2d::CCArray*, DialogDelegate*);
    void showNextDialog();
    void onDialogClosed();
    void update(float);
    void animateDialogIn();
    void animateDialogOut();

    ~DialogLayer();
};

#endif // HIEUDASH_DIALOGLAYER_H_
