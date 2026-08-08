// ============================================================
// EditorPauseLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef EDITORPAUSELAYER_H_
#define EDITORPAUSELAYER_H_

#include "cocos2d.h"

class EditorPauseLayer {
public:
    virtual ~EditorPauseLayer();
    virtual ~EditorPauseLayer();
    virtual ~EditorPauseLayer();

    void customSetup();
    void onNewGroupX(cocos2d::CCObject*);
    void onNewGroupY(cocos2d::CCObject*);
    void onSelectAll(cocos2d::CCObject*);
    void onCopyWColor(cocos2d::CCObject*);
    void onCreateLoop(cocos2d::CCObject*);
    void onExitEditor(cocos2d::CCObject*);
    void onExitNoSave(cocos2d::CCObject*);
    void doResetUnused();
    void onBuildHelper(cocos2d::CCObject*);
    void onKeybindings(cocos2d::CCObject*);
    void onPasteWColor(cocos2d::CCObject*);
    void onSaveAndExit(cocos2d::CCObject*);
    void onSaveAndPlay(cocos2d::CCObject*);
    void keyBackClicked();
    void onCreateExtras(cocos2d::CCObject*);
    void FLAlert_Clicked(FLAlertLayer*, bool);
    void onSelectAllLeft(cocos2d::CCObject*);
    void toggleDebugDraw(cocos2d::CCObject*);
    void toggleGridOnTop(cocos2d::CCObject*);
    void onCreateTemplate(cocos2d::CCObject*);
    void onSelectAllRight(cocos2d::CCObject*);
    void toggleEditorGrid(cocos2d::CCObject*);
    void updateSongButton();
    void onUnlockAllLayers(cocos2d::CCObject*);
    void toggleEffectLines(cocos2d::CCObject*);
    void togglePreviewAnim(cocos2d::CCObject*);
    void toggleRecordOrder(cocos2d::CCObject*);
    void uncheckAllPortals(cocos2d::CCObject*);
    void toggleEditorGround(cocos2d::CCObject*);
    void toggleFollowPlayer(cocos2d::CCObject*);
    void toggleIgnoreDamage(cocos2d::CCObject*);
    void toggleSelectFilter(cocos2d::CCObject*);
    void onResetUnusedColors(cocos2d::CCObject*);
    void toggleHideInvisible(cocos2d::CCObject*);
    void togglePlaytestMusic(cocos2d::CCObject*);
    void toggleEffectDuration(cocos2d::CCObject*);
    void togglePreviewShaders(cocos2d::CCObject*);
    void toggleShowObjectInfo(cocos2d::CCObject*);
    void toggleEditorColorMode(cocos2d::CCObject*);
    void toggleEditorBackground(cocos2d::CCObject*);
    void togglePreviewParticles(cocos2d::CCObject*);
    void init(LevelEditorLayer*);
    void create(LevelEditorLayer*);
    void onHelp(cocos2d::CCObject*);
    void onSave(cocos2d::CCObject*);
    void onSong(cocos2d::CCObject*);
    void keyDown(cocos2d::enumKeyCodes, double);
    void onAlignX(cocos2d::CCObject*);
    void onAlignY(cocos2d::CCObject*);
    void onResume(cocos2d::CCObject*);
    void onOptions(cocos2d::CCObject*);
    void onReGroup(cocos2d::CCObject*);
    void playStep2();
    void playStep3();
    void saveLevel();

};

#endif // EDITORPAUSELAYER_H_
