#ifndef HIEUDASH_SONGINFOLAYER_H_
#define HIEUDASH_SONGINFOLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class SongInfoLayer : public cocos2d::CCLayer {
public:
    SongInfoLayer();
    SongInfoLayer* create(SongObject*);
    bool init(SongObject*);
    void keyBackClicked();
    void onClose();
    void onDownload();
    void onFB();
    void onNG();
    void onYT();
    ~SongInfoLayer();
};

#endif // HIEUDASH_SONGINFOLAYER_H_
