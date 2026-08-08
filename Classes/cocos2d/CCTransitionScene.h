// ============================================================
// CCTransitionScene.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCTRANSITIONSCENE_H_
#define COCOS2D_CCTRANSITIONSCENE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTransitionScene {
public:
    CCTransitionScene();
    CCTransitionScene();

    virtual ~CCTransitionScene();
    virtual ~CCTransitionScene();
    virtual ~CCTransitionScene();

    void sceneOrder();
    void setNewScene(float);
    void hideOutShowIn();
    void initWithDuration(float, cocos2d::CCScene*);
    void draw();
    void create(float, cocos2d::CCScene*);
    void finish();
    void onExit();
    void cleanup();
    void onEnter();

};

} // namespace cocos2d

#endif // COCOS2D_CCTRANSITIONSCENE_H_
