// ============================================================
// CCDirector.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCDIRECTOR_H_
#define COCOS2D_CCDIRECTOR_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCDirector {
public:
    CCDirector();
    CCDirector();

    virtual ~CCDirector();
    virtual ~CCDirector();
    virtual ~CCDirector();

    void getWinSize();
    void sceneCount();
    void convertToGL(cocos2d::CCPoint const&);
    void convertToUI(cocos2d::CCPoint const&);
    void setDelegate(cocos2d::CCDirectorDelegate*);
    void setViewport();
    void calculateMPF();
    void getDeltaTime();
    void getScheduler();
    void getScreenTop();
    void replaceScene(cocos2d::CCScene*);
    void runWithScene(cocos2d::CCScene*);
    void setDeltaTime(float);
    void setDepthTest(bool);
    void setNextScene();
    void setScheduler(cocos2d::CCScheduler*);
    void showFPSLabel();
    void getScreenLeft();
    void purgeDirector();
    void setOpenGLView(cocos2d::CCEGLView*);
    void setProjection(cocos2d::ccDirectorProjection);
    void toggleShowFPS(bool, std::string, cocos2d::CCPoint);
    void applySmoothFix();
    void getScreenRight();
    void getVisibleSize();
    void popToRootScene();
    void sharedDirector();
    void getFPSImageData(unsigned char**, unsigned int*);
    void getScreenBottom();
    void purgeCachedData();
    void createStatsLabel();
    void getAccelerometer();
    void getActionManager();
    void getClassTypeInfo();
    void getVisibleOrigin();
    void removeStatsLabel();
    void setAccelerometer(cocos2d::CCAccelerometer*);
    void setActionManager(cocos2d::CCActionManager*);
    void setAlphaBlending(bool);
    void setDefaultValues();
    void setSceneDelegate(cocos2d::CCSceneDelegate*);
    void setupScreenScale(cocos2d::CCSize, cocos2d::CCSize, cocos2d::TextureQuality);
    void popToSceneInStack(cocos2d::CCScene*);
    void reshapeProjection(cocos2d::CCSize const&);
    void updateScreenScale(cocos2d::CCSize);
    void willSwitchToScene(cocos2d::CCScene*);
    void calculateDeltaTime();
    void getMouseDispatcher();
    void getTouchDispatcher();
    void getWinSizeInPixels();
    void setGLDefaultValues();
    void setMouseDispatcher(cocos2d::CCMouseDispatcher*);
    void setTouchDispatcher(cocos2d::CCTouchDispatcher*);
    void updateContentScale(cocos2d::TextureQuality);
    void checkSceneReference();
    void getKeypadDispatcher();
    void getNotificationNode();
    void setKeypadDispatcher(cocos2d::CCKeypadDispatcher*);
    void setNotificationNode(cocos2d::CCNode*);
    void getScreenScaleFactor();
    void levelForSceneInStack(cocos2d::CCScene*);
    void popToSceneStackLevel(int);
    void setNextDeltaTimeZero(bool);
    void getContentScaleFactor();
    void getKeyboardDispatcher();
    void getScreenScaleFactorH();
    void getScreenScaleFactorW();
    void resetSmoothFixCounter();
    void setContentScaleFactor(float);
    void setKeyboardDispatcher(cocos2d::CCKeyboardDispatcher*);
    void popSceneWithTransition(float, cocos2d::PopTransition);
    void getScreenScaleFactorMax();
    void end();
    void init();
    void pause();
    void resume();
    void getZEye();
    void popScene();
    void drawScene();
    void pushScene(cocos2d::CCScene*);
    void showStats();
    void getDelegate()) const;
    void getSceneDelegate()) const;

};

} // namespace cocos2d

#endif // COCOS2D_CCDIRECTOR_H_
