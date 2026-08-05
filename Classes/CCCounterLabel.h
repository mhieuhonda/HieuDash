#ifndef _CCCOUNTERLABEL_H_
#define _CCCOUNTERLABEL_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"

class CCCounterLabel {
public:
    CCCounterLabel();
    calculateStepSize();
    create(char const*, char const*, int, FormatterType);
    disableCounter();
    enableCounter();
    fastUpdateCounter();
    getCurrentCount();
    getTargetCount();
    init(char const*, char const*, int, FormatterType);
    setTargetCount(int);
    setupFormatter(FormatterType);
    updateCounter(double);
    updateString();
    ~CCCounterLabel();
};

#endif // _CCCOUNTERLABEL_H_
