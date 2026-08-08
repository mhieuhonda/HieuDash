// ============================================================
// ShaderLayer.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef SHADERLAYER_H_
#define SHADERLAYER_H_

#include "cocos2d.h"

class ShaderLayer {
public:
    virtual ~ShaderLayer();
    virtual ~ShaderLayer();
    virtual ~ShaderLayer();

    void tweenValue(float, float, int, float, int, float);
    void setupShader(bool);
    void triggerBulge(float, float, float, float, float, int, int, float, bool);
    void triggerSepia(float, float, int, float);
    void updateZLayer(int, int, bool);
    void triggerGlitch(float, float, float, float, float, float, float, bool);
    void triggerPinchX(float, float, float, float, float, bool, int, int, float, bool);
    void triggerPinchY(float, float, float, float, float, bool, int, int, float, bool);
    void preBulgeShader();
    void prePinchShader();
    void preSepiaShader();
    void tweenValueAuto(float, int, float, int, float);
    void preCommonShader();
    void preGlitchShader();
    void resetAllShaders();
    void toggleAntiAlias(bool);
    void triggerHueShift(float, float, int, float);
    void setupBulgeShader();
    void setupPinchShader();
    void setupSepiaShader();
    void triggerGrayscale(float, float, bool, int, int, float);
    void triggerPixelateX(float, float, bool, bool, int, float, bool);
    void triggerPixelateY(float, float, bool, bool, int, float, bool);
    void triggerShockLine(float, float, bool, bool, bool, bool, float, float, float, float, float, float, int, bool, bool, bool, float, bool, float, int, float);
    void triggerShockWave(float, float, float, float, float, float, float, bool, float, float, float, int, bool, bool, bool, float, float, bool, float, int, float);
    void preHueShiftShader();
    void prePixelateShader();
    void triggerChromaticX(float, float, int, float, bool);
    void triggerChromaticY(float, float, int, float, bool);
    void triggerLensCircle(float, float, float, float, int, int, float, float, int, float, bool);
    void triggerRadialBlur(float, float, float, float, int, float, float, bool, int, int, float, bool);
    void preChromaticShader();
    void preGrayscaleShader();
    void preShockLineShader();
    void preShockWaveShader();
    void triggerColorChange(float, float, float, float, float, float, float, int, float);
    void triggerInvertColor(float, float, float, float, float, bool, bool, bool, int, float);
    void triggerMotionBlurX(float, float, float, float, int, float, bool, int, int, float, bool, bool);
    void triggerMotionBlurY(float, float, float, float, int, float, bool, int, int, float, bool, bool);
    void performCalculations();
    void preLensCircleShader();
    void preMotionBlurShader();
    void preRadialBlurShader();
    void setupCommonUniforms();
    void setupGlitchUniforms();
    void setupHueShiftShader();
    void updateEffectOffsets(cocos2d::CCPoint);
    void objectPosToShaderPos(cocos2d::CCPoint);
    void preColorChangeShader();
    void preInvertColorShader();
    void preSplitScreenShader();
    void resetTargetContainer();
    void setupGrayscaleShader();
    void setupLensCircleShader();
    void setupMotionBlurShader();
    void setupRadialBlurShader();
    void updateShockLineCenter(cocos2d::CCPoint);
    void updateShockWaveCenter(cocos2d::CCPoint);
    void prepareTargetContainer();
    void setupChromaticUniforms();
    void setupColorChangeShader();
    void setupInvertColorShader();
    void setupShockLineUniforms();
    void setupShockWaveUniforms();
    void setupSplitScreenShader();
    void triggerChromaticGlitch(bool, float, float, float, float, float, float, float, int, float, bool, bool);
    void triggerSplitScreenCols(float, float, int, float);
    void triggerSplitScreenRows(float, float, int, float);
    void updateMotionBlurSpeedX(float, float);
    void updateMotionBlurSpeedY(float, float);
    void preChromaticGlitchShader();
    void setupChromaticGlitchUniforms();
    void init();
    void visit();
    void create();
    void update(float);

};

#endif // SHADERLAYER_H_
