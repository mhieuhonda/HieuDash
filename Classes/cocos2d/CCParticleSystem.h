// ============================================================
// CCParticleSystem.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCPARTICLESYSTEM_H_
#define COCOS2D_CCPARTICLESYSTEM_H_

#include "cocos2d.h"

namespace cocos2d {

class CCParticleSystem {
public:
    CCParticleSystem();
    CCParticleSystem();

    virtual ~CCParticleSystem();
    virtual ~CCParticleSystem();
    virtual ~CCParticleSystem();

    void getEndSize();
    void getEndSpin();
    void getGravity();
    void getLifeVar();
    void getTexture();
    void setEndSize(float);
    void setEndSpin(float);
    void setGravity(cocos2d::CCPoint const&);
    void setLifeVar(float);
    void setTexture(cocos2d::CCTexture2D*);
    void setVisible(bool);
    void stopSystem();
    void addParticle();
    void getAngleVar();
    void getDuration();
    void getEndColor();
    void getSpeedVar();
    void resetSystem();
    void setAngleVar(float);
    void setDuration(float);
    void setEndColor(cocos2d::_ccColor4F const&);
    void setRotation(float);
    void setSpeedVar(float);
    void getBatchNode();
    void getBlendFunc();
    void getEndRadius();
    void getStartSize();
    void getStartSpin();
    void initParticle(cocos2d::sCCParticle*);
    void initWithFile(char const*, bool);
    void loadDefaults();
    void resumeSystem();
    void saveDefaults();
    void setBatchNode(cocos2d::CCParticleBatchNode*);
    void setBlendFunc(cocos2d::_ccBlendFunc);
    void setEndRadius(float);
    void setStartSize(float);
    void setStartSpin(float);
    void getEndSizeVar();
    void getEndSpinVar();
    void getStartColor();
    void setEndSizeVar(float);
    void setEndSpinVar(float);
    void setStartColor(cocos2d::_ccColor4F const&);
    void updateVisible();
    void getEmitterMode();
    void getEndColorVar();
    void getRadialAccel();
    void getStartRadius();
    void getTimeElapsed();
    void setEmitterMode(int);
    void setEndColorVar(cocos2d::_ccColor4F const&);
    void setRadialAccel(float);
    void setStartRadius(float);
    void getEmissionRate();
    void getEndRadiusVar();
    void getPositionType();
    void getStartSizeVar();
    void getStartSpinVar();
    void isBlendAdditive();
    void setEmissionRate(float);
    void setEndRadiusVar(float);
    void setPositionType(cocos2d::tCCPositionType);
    void setStartSizeVar(float);
    void setStartSpinVar(float);
    void updateBlendFunc();
    void getParticleCount();
    void getRotationIsDir();
    void getStartColorVar();
    void setBlendAdditive(bool);
    void setRotationIsDir(bool);
    void setStartColorVar(cocos2d::_ccColor4F const&);
    void updateWithNoTime();
    void getRadialAccelVar();
    void getSourcePosition();
    void getStartRadiusVar();
    void getTotalParticles();
    void setRadialAccelVar(float);
    void setSourcePosition(cocos2d::CCPoint const&);
    void setStartRadiusVar(float);
    void setTotalParticles(unsigned int);
    void getRotatePerSecond();
    void getTangentialAccel();
    void initWithDictionary(cocos2d::CCDictionary*, char const*, bool);
    void initWithDictionary(cocos2d::CCDictionary*, bool);
    void loadScaledDefaults(float);
    void setRotatePerSecond(float);
    void setTangentialAccel(float);
    void updateEmissionRate();
    void calculateWorldSpace();
    void getOpacityModifyRGB();
    void getParticleDrawCost();
    void setOpacityModifyRGB(bool);
    void isAutoRemoveOnFinish();
    void getRotatePerSecondVar();
    void getTangentialAccelVar();
    void setAutoRemoveOnFinish(bool);
    void setRotatePerSecondVar(float);
    void setTangentialAccelVar(float);
    void initWithTotalParticles(unsigned int, bool);
    void updateQuadWithParticle(cocos2d::sCCParticle*, cocos2d::CCPoint const&);
    void createWithTotalParticles(unsigned int);
    void init();
    void create(char const*);
    void isFull();
    void update(float);
    void getLife();
    void setLife(float);
    void getAngle();
    void getSpeed();
    void isActive();
    void postStep();
    void setAngle(float);
    void setScale(float);
    void setSpeed(float);
    void getPosVar();
    void setPosVar(cocos2d::CCPoint const&);
    void setScaleX(float);
    void setScaleY(float);

protected:
    float m_emissionRate;
    cocos2d::_ccColor3B m_endColor;
    cocos2d::_ccColor3B m_endColorVar;
    int m_particleCount;
    cocos2d::CCPoint m_positionType;
    float m_scale;
    float m_scaleX;
    float m_scaleY;
    cocos2d::CCPoint m_sourcePosition;
    float m_speed;
    float m_speedVar;
    cocos2d::_ccColor3B m_startColor;
    cocos2d::_ccColor3B m_startColorVar;
    bool m_visible;

};

} // namespace cocos2d

#endif // COCOS2D_CCPARTICLESYSTEM_H_
