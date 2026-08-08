// ============================================================
// GJGameLoadingLayer.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJGAMELOADINGLAYER_H_
#define GJGAMELOADINGLAYER_H_

class GJGameLoadingLayer {
public:
    virtual ~GJGameLoadingLayer();
    virtual ~GJGameLoadingLayer();
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
