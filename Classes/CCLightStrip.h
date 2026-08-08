
#ifndef CCLIGHTSTRIP_H_
#define CCLIGHTSTRIP_H_

class CCLightStrip {
public:
    virtual ~CCLightStrip();

    void updateTweenAction(float, char const*);
    void draw();
    void init(float, float, float, float, float);
    void create(float, float, float, float, float);

};

#endif // CCLIGHTSTRIP_H_
