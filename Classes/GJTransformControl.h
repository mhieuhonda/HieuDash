
#ifndef GJTRANSFORMCONTROL_H_
#define GJTRANSFORMCONTROL_H_

#include "cocos2d.h"
#include <unordered_map>

class GJTransformControl : public cocos2d::CCNode {
public:
    virtual ~GJTransformControl();

    void loadValues(GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>, std::equal_to<int>, std::allocator<std::pair<const int, GameObjectEditorState> > >&);
    void finishTouch();
    void saveToState(GJTransformState&);
    void spriteByTag(int);
    void ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void scaleButtons(float);
    void applyRotation(float);
    void loadFromState(GJTransformState&);
    void updateButtons(bool, bool);
    void refreshControl();
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void logCurrentZeroPos();
    void onToggleLockScale(cocos2d::CCObject*);
    void updateAnchorSprite(cocos2d::CCPoint);
    void updateMinMaxPositions();
    void calculateRotationOffset();
    bool init();
    void create();

};

#endif // GJTRANSFORMCONTROL_H_
