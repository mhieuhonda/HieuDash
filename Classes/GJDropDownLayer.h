#ifndef HIEUDASH_GJDROPDOWNLAYER_H_
#define HIEUDASH_GJDROPDOWNLAYER_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Method signatures reconstructed from the ELF dynamic symbol table.
// Method bodies are not recovered - they must be re-implemented.

#include "cocos2d.h"
#include "HieuDashEnums.h"

class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    GJDropDownLayer();

    // --- Animation positions ---
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;

    // --- Sublayers ---
    cocos2d::CCLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;

    // --- State ---
    bool m_hidden;
    GJDropDownLayerDelegate* m_delegate;

    // --- Methods ---
    bool ccTouchBegan(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchCancelled(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchEnded(cocos2d::CCTouch*, cocos2d::CCEvent*);
    void ccTouchMoved(cocos2d::CCTouch*, cocos2d::CCEvent*);
    GJDropDownLayer* create(char const*);
    GJDropDownLayer* create(char const*, float);
    void customSetup();
    void disableUI();
    void draw();
    void enableUI();
    void enterAnimFinished();
    void enterLayer();
    void exitLayer();
    int getInternalLayer();
    int getRemoveOnExit();
    void hideLayer(bool);
    bool init(char const*);
    bool init(char const*, float);
    void keyBackClicked();
    void layerHidden();
    void layerVisible();
    void registerWithTouchDispatcher();
    void setRemoveOnExit(bool);
    void showLayer(bool);
    ~GJDropDownLayer();
};

#endif // HIEUDASH_GJDROPDOWNLAYER_H_
