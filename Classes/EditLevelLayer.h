#ifndef _EDITLEVELLAYER_H_
#define _EDITLEVELLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class EditLevelLayer {
public:
    EditLevelLayer();
    FLAlert_Clicked(FLAlertLayer*, bool);
    closeTextInputs();
    confirmDelete();
    create(GJGameLevel*);
    init(GJGameLevel*);
    keyBackClicked();
    onBack();
    onDelete();
    onEdit();
    onHelp();
    onPlay();
    onShare();
    onTest();
    scene(GJGameLevel*);
    setupLevelInfo();
    textChanged(CCTextInputNode*);
    textInputClosed(CCTextInputNode*);
    textInputOpened(CCTextInputNode*);
    updateDescText(char const*);
    ~EditLevelLayer();
};

#endif // _EDITLEVELLAYER_H_
