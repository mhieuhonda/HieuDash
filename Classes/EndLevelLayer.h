#ifndef HIEUDASH_ENDLEVELLAYER_H_
#define HIEUDASH_ENDLEVELLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class EndLevelLayer : public cocos2d::CCLayer {
public:
    EndLevelLayer();
    EndLevelLayer* create();
    void customSetup();
    void exitLayer();
    int getEndText();
    void onMenu();
    void onReplay();
    void showLayer(bool);
    ~EndLevelLayer();
};

#endif // HIEUDASH_ENDLEVELLAYER_H_
