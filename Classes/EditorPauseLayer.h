#ifndef HIEUDASH_EDITORPAUSELAYER_H_
#define HIEUDASH_EDITORPAUSELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class EditorPauseLayer : public cocos2d::CCLayer {
public:
    EditorPauseLayer();
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    EditorPauseLayer* create(LevelEditorLayer*);
    void customSetup();
    bool init(LevelEditorLayer*);
    void keyBackClicked();
    void onBPM();
    void onExitEditor();
    void onExitNoSave();
    void onHelp();
    void onResume();
    void onSaveAndExit();
    void onSaveAndPlay();
    void onSaveAndTest();
    void onSong();
    void saveLevel();
    void updateBPMButton();
    void updateSongButton();
    ~EditorPauseLayer();
};

#endif // HIEUDASH_EDITORPAUSELAYER_H_
