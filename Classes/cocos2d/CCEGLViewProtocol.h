// ============================================================
// CCEGLViewProtocol.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCEGLVIEWPROTOCOL_H_
#define COCOS2D_CCEGLVIEWPROTOCOL_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCEGLViewProtocol {
public:
    CCEGLViewProtocol();
    CCEGLViewProtocol();

    virtual ~CCEGLViewProtocol();
    virtual ~CCEGLViewProtocol();
    virtual ~CCEGLViewProtocol();

    void getViewName();
    void setViewName(char const*);
    void setFrameSize(float, float);
    void getScissorRect();
    void pollInputEvents();
    void handleTouchesEnd(int, int*, float*, float*, double);
    void isScissorEnabled();
    void setTouchDelegate(cocos2d::EGLTouchDelegate*);
    void handleTouchesMove(int, int*, float*, float*, double);
    void handleTouchesBegin(int, int*, float*, float*, double);
    void setScissorInPoints(float, float, float, float);
    void handleTouchesCancel(int, int*, float*, float*, double);
    void setViewPortInPoints(float, float, float, float);
    void setDesignResolutionSize(float, float, ResolutionPolicy);
    void getSetOfTouchesEndOrCancel(cocos2d::CCSet&, int, int*, float*, float*, double);
    void updateDesignResolutionSize();
    void getFrameSize()) const;
    void getVisibleSize()) const;
    void getViewPortRect()) const;
    void getVisibleOrigin()) const;
    void getDesignResolutionSize()) const;
    void getScaleX()) const;
    void getScaleY()) const;

protected:
    std::string m_viewName;

};

} // namespace cocos2d

#endif // COCOS2D_CCEGLVIEWPROTOCOL_H_
