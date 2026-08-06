#ifndef HIEUDASH_LEVELSETTINGSLAYER_H_
#define HIEUDASH_LEVELSETTINGSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelSettingsLayer : public cocos2d::CCLayer {
public:
    LevelSettingsLayer();
    void audioNext();
    void audioPrevious();
    void colorPickerClosed(ColorPickerPopup*);
    static LevelSettingsLayer* create(LevelSettingsObject*);
    int getDelegate();
    bool init(LevelSettingsObject*);
    void keyBackClicked();
    void onBG();
    void onClose();
    void onG();
    void selectSong(int);
    void setDelegate(LevelSettingsDelegate*);
    void updateAudioLabel();
    ~LevelSettingsLayer();
};

#endif // HIEUDASH_LEVELSETTINGSLAYER_H_
