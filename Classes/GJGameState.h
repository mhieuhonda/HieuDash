
#ifndef GJGAMESTATE_H_
#define GJGAMESTATE_H_

class GJGameState {
public:
    GJGameState();
    GJGameState();

    virtual ~GJGameState();

    void tweenValue(float, float, int, float, int, float, int, int);
    void stopTweenAction(int);
    void updateTweenAction(float, int);
    void controlTweenAction(int, int, GJActionCommand);
    void updateTweenActions(float);
    void getGameObjectPhysics(GameObject*);
    void processStateTriggers();

    // Operators
    operator=(GJGameState&&);
    operator=(GJGameState const&);

};

#endif // GJGAMESTATE_H_
