// ============================================================
// CCNode.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCNODE_H_
#define COCOS2D_CCNODE_H_

#include "cocos2d.h"

namespace cocos2d {

class CCNode {
public:
    CCNode();
    CCNode();

    virtual ~CCNode();
    virtual ~CCNode();
    virtual ~CCNode();

    void _setZOrder(int);
    void getVertexZ();
    void setVertexZ(float);
    void setVisible(bool);
    void stopAction(cocos2d::CCAction*);
    void unschedule(void (cocos2d::CCObject::*)(float));
    void boundingBox();
    void description();
    void detachChild(cocos2d::CCNode*, bool);
    void getChildren();
    void getPosition(float*, float*);
    void getPosition();
    void getRotation();
    void getUserData();
    void insertChild(cocos2d::CCNode*, int);
    void removeChild(cocos2d::CCNode*);
    void removeChild(cocos2d::CCNode*, bool);
    void setPosition(cocos2d::CCPoint const&);
    void setPosition(float, float);
    void setRotation(float);
    void setUserData(void*);
    void addComponent(cocos2d::CCComponent*);
    void getPositionX();
    void getPositionY();
    void getRotationX();
    void getRotationY();
    void getScheduler();
    void reorderChild(cocos2d::CCNode*, int);
    void scheduleOnce(void (cocos2d::CCObject::*)(float), float);
    void setPositionX(float);
    void setPositionY(float);
    void setRotationX(float);
    void setRotationY(float);
    void setScheduler(cocos2d::CCScheduler*);
    void childrenAlloc();
    void getChildByTag(int);
    void getUserObject();
    void setUserObject(cocos2d::CCObject*);
    void getActionByTag(int);
    void getAnchorPoint();
    void scheduleUpdate();
    void setAnchorPoint(cocos2d::CCPoint const&);
    void setContentSize(cocos2d::CCSize const&);
    void stopAllActions();
    void removeComponent(char const*);
    void removeComponent(cocos2d::CCComponent*);
    void sortAllChildren();
    void stopActionByTag(int);
    void updateTransform();
    void getActionManager();
    void getGLServerState();
    void getShaderProgram();
    void removeChildByTag(int);
    void removeChildByTag(int, bool);
    void removeFromParent();
    void setActionManager(cocos2d::CCActionManager*);
    void setGLServerState(cocos2d::ccGLServerState);
    void setShaderProgram(cocos2d::CCGLProgram*);
    void setUseChildIndex(bool);
    void unscheduleUpdate();
    void getOrderOfArrival();
    void removeAllChildren();
    void setOrderOfArrival(unsigned int);
    void updateTweenAction(float, char const*);
    void convertToNodeSpace(cocos2d::CCPoint const&);
    void removeMeAndCleanup();
    void transformAncestors();
    void updateChildIndexes();
    void convertToWorldSpace(cocos2d::CCPoint const&);
    void removeAllComponents();
    void convertToNodeSpaceAR(cocos2d::CCPoint const&);
    void convertToWindowSpace(cocos2d::CCPoint const&);
    void getScaledContentSize();
    void nodeToWorldTransform();
    void updateTweenActionInt(float, int);
    void worldToNodeTransform();
    void convertToWorldSpaceAR(cocos2d::CCPoint const&);
    void nodeToParentTransform();
    void parentToNodeTransform();
    void registerScriptHandler(int);
    void getAnchorPointInPoints();
    void numberOfRunningActions();
    void setAdditionalTransform(cocos2d::CCAffineTransform const&);
    void sortAllChildrenNoIndex();
    void unscheduleAllSelectors();
    void convertTouchToNodeSpace(cocos2d::CCTouch*);
    void unregisterScriptHandler();
    void nodeToWorldTransformFast();
    void onExitTransitionDidStart();
    void pauseSchedulerAndActions();
    void sortAllChildrenWithIndex();
    void convertTouchToNodeSpaceAR(cocos2d::CCTouch*);
    void nodeToParentTransformFast();
    void qsortAllChildrenWithIndex();
    void resetGlobalOrderOfArrival();
    void resumeSchedulerAndActions();
    void onEnterTransitionDidFinish();
    void removeFromParentAndCleanup(bool);
    void scheduleUpdateWithPriority(int);
    void ignoreAnchorPointForPosition(bool);
    void removeAllChildrenWithCleanup(bool);
    void scheduleUpdateWithPriorityLua(int, int);
    void isIgnoreAnchorPointForPosition();
    void draw();
    void init();
    void visit();
    void create();
    void onExit();
    void update(float);
    void cleanup();
    void getGrid();
    void onEnter();
    void setGrid(cocos2d::CCGridBase*);
    void addChild(cocos2d::CCNode*);
    void addChild(cocos2d::CCNode*, int);
    void addChild(cocos2d::CCNode*, int, int);
    void getScale();
    void getSkewX();
    void getSkewY();
    void schedule(void (cocos2d::CCObject::*)(float));
    void schedule(void (cocos2d::CCObject::*)(float), float);
    void schedule(void (cocos2d::CCObject::*)(float), float, unsigned int, float);
    void setScale(float);
    void setScale(float, float);
    void setSkewX(float);
    void setSkewY(float);
    void getCamera();
    void getParent();
    void getScaleX();
    void getScaleY();
    void getZOrder();
    void isRunning();
    void isVisible();
    void runAction(cocos2d::CCAction*);
    void setParent(cocos2d::CCNode*);
    void setScaleX(float);
    void setScaleY(float);
    void setZOrder(int);
    void transform();
    void getComponent(char const*)) const;
    void getContentSize()) const;
    void getChildrenCount()) const;

protected:
    int m_actionByTag;
    cocos2d::CCPoint m_anchorPoint;
    cocos2d::CCPoint m_anchorPointInPoints;
    int m_childByTag;
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_positionX;
    cocos2d::CCPoint m_positionY;
    float m_scale;
    float m_scaleX;
    float m_scaleY;
    float m_scaledContentSize;
    int m_useChildIndex;
    bool m_visible;

};

} // namespace cocos2d

#endif // COCOS2D_CCNODE_H_
