#ifndef HIEUDASH_CCCOUNTERLABEL_H_
#define HIEUDASH_CCCOUNTERLABEL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class CCCounterLabel : public cocos2d::CCLabelTTF {
public:
    CCCounterLabel();
    void calculateStepSize();
    CCCounterLabel* create(char const*, char const*, int, FormatterType);
    void disableCounter();
    void enableCounter();
    void fastUpdateCounter();
    int getCurrentCount();
    int getTargetCount();
    bool init(char const*, char const*, int, FormatterType);
    void setTargetCount(int);
    void setupFormatter(FormatterType);
    void updateCounter(double);
    void updateString();
    ~CCCounterLabel();
};

#endif // HIEUDASH_CCCOUNTERLABEL_H_
