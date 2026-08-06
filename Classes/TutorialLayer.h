#ifndef HIEUDASH_TUTORIALLAYER_H_
#define HIEUDASH_TUTORIALLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class TutorialLayer : public cocos2d::CCLayer {
public:
    TutorialLayer();
    static TutorialLayer* create();
    bool init();
    void keyBackClicked();
    void loadPage(int);
    void onClose();
    void onNext();
    ~TutorialLayer();
};

#endif // HIEUDASH_TUTORIALLAYER_H_
