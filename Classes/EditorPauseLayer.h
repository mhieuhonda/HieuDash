#ifndef _EDITORPAUSELAYER_H_
#define _EDITORPAUSELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class EditorPauseLayer {
public:
    EditorPauseLayer();
    FLAlert_Clicked(FLAlertLayer*, bool);
    create(LevelEditorLayer*);
    customSetup();
    init(LevelEditorLayer*);
    keyBackClicked();
    onBPM();
    onExitEditor();
    onExitNoSave();
    onHelp();
    onResume();
    onSaveAndExit();
    onSaveAndPlay();
    onSaveAndTest();
    onSong();
    saveLevel();
    updateBPMButton();
    updateSongButton();
    ~EditorPauseLayer();
};

#endif // _EDITORPAUSELAYER_H_
