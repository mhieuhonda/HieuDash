#ifndef HIEUDASH_EDITLEVELLAYER_H_
#define HIEUDASH_EDITLEVELLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class EditLevelLayer : public cocos2d::CCLayer {
public:
    EditLevelLayer();
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    void closeTextInputs();
    void confirmDelete();
    static EditLevelLayer* create(GJGameLevel*);
    bool init(GJGameLevel*);
    void keyBackClicked();
    void onBack();
    void onDelete();
    void onEdit();
    void onHelp();
    void onPlay();
    void onShare();
    void onTest();
    static cocos2d::CCScene* scene(GJGameLevel*);
    void setupLevelInfo();
    void textChanged(CCTextInputNode*);
    void textInputClosed(CCTextInputNode*);
    void textInputOpened(CCTextInputNode*);
    void updateDescText(char const*);
    ~EditLevelLayer();
};

#endif // HIEUDASH_EDITLEVELLAYER_H_
