#ifndef HIEUDASH_LEVELSETTINGSOBJECT_H_
#define HIEUDASH_LEVELSETTINGSOBJECT_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelSettingsObject : public cocos2d::CCObject {
public:
    LevelSettingsObject();

    // --- Effect manager ---
    GJEffectManager* m_pEffectManager;

    // --- Game mode and speed ---
    GameMode m_eGameMode;
    Speed m_eSpeed;
    bool m_bMini;
    bool m_bDual;

    // --- Visual IDs ---
    int m_nBackgroundID;
    int m_nGroundID;
    int m_nFontID;

    // --- Start colors ---
    cocos2d::_ccColor3B m_obStartBGColor;
    cocos2d::_ccColor3B m_obStartGColor;

    // --- Audio ---
    int m_nAudioTrack;
    int m_nSongID;

    // --- Legacy methods ---
    LevelSettingsObject* create();
    int getAudioTrack();
    int getSaveString();
    int getStartBGColor();
    int getStartGColor();
    bool init();
    void objectFromString(std::string);
    void setAudioTrack(int);
    void setStartBGColor(cocos2d::_ccColor3B);
    void setStartGColor(cocos2d::_ccColor3B);
    ~LevelSettingsObject();
};

#endif // HIEUDASH_LEVELSETTINGSOBJECT_H_
