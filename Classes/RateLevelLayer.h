#ifndef HIEUDASH_RATELEVELLAYER_H_
#define HIEUDASH_RATELEVELLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class RateLevelLayer : public cocos2d::CCLayer {
public:
    RateLevelLayer();
    static RateLevelLayer* create(int);
    int getDelegate();
    bool init(int);
    void keyBackClicked();
    void onClose();
    void onRate();
    void selectRating(cocos2d::CCNode*);
    void setDelegate(RateLevelDelegate*);
    ~RateLevelLayer();
};

#endif // HIEUDASH_RATELEVELLAYER_H_
