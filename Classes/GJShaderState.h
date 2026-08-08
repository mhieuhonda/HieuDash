
#ifndef GJSHADERSTATE_H_
#define GJSHADERSTATE_H_

class GJShaderState {
public:
    void tweenValue(float, float, int, float, int, float);
    void stopTweenAction(int);
    void updateTweenAction(float, int);
    void updateTweenActions(float);
    void timesyncShaderAction(int);
    void timesyncShaderActions();
    void reset();

};

#endif // GJSHADERSTATE_H_
