#ifndef HIEUDASH_LEVELMANAGERDELEGATE_H_
#define HIEUDASH_LEVELMANAGERDELEGATE_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class LevelManagerDelegate : public cocos2d::CCObject {
public:
    virtual ~LevelManagerDelegate() {}
    LevelManagerDelegate();
    void loadLevelsFailed(char const*);
    void loadLevelsFinished(cocos2d::CCArray*, char const*);
    void setupPageInfo(std::string, char const*);
};

#endif // HIEUDASH_LEVELMANAGERDELEGATE_H_
