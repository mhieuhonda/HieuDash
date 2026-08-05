#ifndef HIEUDASH_LEVELSETTINGSDELEGATE_H_
#define HIEUDASH_LEVELSETTINGSDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelSettingsDelegate : public cocos2d::CCObject {
public:
    virtual ~LevelSettingsDelegate() {}
    LevelSettingsDelegate();
    void levelSettingsUpdated();
};

#endif // HIEUDASH_LEVELSETTINGSDELEGATE_H_
