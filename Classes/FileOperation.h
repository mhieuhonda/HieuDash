#ifndef HIEUDASH_FILEOPERATION_H_
#define HIEUDASH_FILEOPERATION_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class FileOperation : public cocos2d::CCObject {
public:
    int getFilePath();
    void readFile();
    void saveFile();
};

#endif // HIEUDASH_FILEOPERATION_H_
