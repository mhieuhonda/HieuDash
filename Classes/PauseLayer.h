#ifndef HIEUDASH_PAUSELAYER_H_
#define HIEUDASH_PAUSELAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class PauseLayer : public cocos2d::CCLayer {
public:
    PauseLayer();
    PauseLayer* create();
    void customSetup();
    void keyBackClicked();
    void onAutoCheck();
    void onEdit();
    void onFX();
    void onHelp();
    void onMusic();
    void onNormalMode();
    void onPracticeMode();
    void onQuit();
    void onRestart();
    void onResume();
    void setupProgressBars();
    ~PauseLayer();
};

#endif // HIEUDASH_PAUSELAYER_H_
