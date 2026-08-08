
#ifndef CCCOUNTERLABEL_H_
#define CCCOUNTERLABEL_H_

class CCCounterLabel {
public:
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
