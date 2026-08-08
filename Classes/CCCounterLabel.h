// ============================================================
// CCCounterLabel.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef CCCOUNTERLABEL_H_
#define CCCOUNTERLABEL_H_

class CCCounterLabel {
public:
    virtual ~CCCounterLabel();
    virtual ~CCCounterLabel();
    virtual ~CCCounterLabel();

    void updateString();
    void enableCounter();
    void updateCounter(float);
    void disableCounter();
    void getTargetCount();
    void setTargetCount(int);
    void calculateStepSize(int);
    void fastUpdateCounter();
    void init(int, char const*, FormatterType);
    void create(int, char const*, FormatterType);

protected:
    int m_targetCount;

};

#endif // CCCOUNTERLABEL_H_
