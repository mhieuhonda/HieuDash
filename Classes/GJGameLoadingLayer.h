
#ifndef GJGAMELOADINGLAYER_H_
#define GJGAMELOADINGLAYER_H_

class GJGameLoadingLayer {
public:
    virtual ~GJGameLoadingLayer();

    void gameLayerDidUnload();
    void transitionToLoadingLayer(GJGameLevel*, bool);
    void onEnterTransitionDidFinish();
    void init(GJGameLevel*, bool);
    void create(GJGameLevel*, bool);
    void onEnter();
    void loadLevel();

};

#endif // GJGAMELOADINGLAYER_H_
