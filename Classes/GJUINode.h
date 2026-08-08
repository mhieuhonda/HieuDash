// ============================================================
// GJUINode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJUINODE_H_
#define GJUINODE_H_

#include "cocos2d.h"

class GJUINode {
public:
    virtual ~GJUINode();
    virtual ~GJUINode();
    virtual ~GJUINode();

    void getOpacity();
    void resetState();
    void setOpacity(unsigned char);
    void touchEnded();
    void updateSize(float, float);
    void toggleModeB(bool);
    void updateWidth(float);
    void saveToConfig(UIButtonConfig&);
    void updateHeight(float);
    void getButtonScale();
    void loadFromConfig(UIButtonConfig&);
    void updateDeadzone(int);
    void updateRangePos(cocos2d::CCPoint);
    void activeTouchTest(cocos2d::CCPoint);
    void highlightButton(int);
    void toggleHighlight(int, bool);
    void updateDragRadius(float);
    void updateButtonScale(float);
    void updateButtonFrames();
    void activeRangeTouchTest(cocos2d::CCPoint);
    void updateButtonPositions();
    void draw();
    void init(UIButtonConfig&);
    void create(UIButtonConfig&);
    void touchTest(cocos2d::CCPoint);

};

#endif // GJUINODE_H_
