#ifndef _SONGINFOLAYER_H_
#define _SONGINFOLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class SongInfoLayer {
public:
    SongInfoLayer();
    create(SongObject*);
    init(SongObject*);
    keyBackClicked();
    onClose();
    onDownload();
    onFB();
    onNG();
    onYT();
    ~SongInfoLayer();
};

#endif // _SONGINFOLAYER_H_
