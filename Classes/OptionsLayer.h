#ifndef HIEUDASH_OPTIONSLAYER_H_
#define HIEUDASH_OPTIONSLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class OptionsLayer : public cocos2d::CCLayer {
public:
    virtual void FLAlert_Clicked(FLAlertLayer*, bool);
    OptionsLayer();
    static OptionsLayer* create();
    void customSetup();
    void exitLayer();
    void layerHidden();
    void onFX();
    void onGC();
    void onHelp();
    void onMusic();
    void onRate();
    void onSoundtracks();
    void onSupport();
    ~OptionsLayer();
};

#endif // HIEUDASH_OPTIONSLAYER_H_
