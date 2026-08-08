
#ifndef PARTICLEGAMEOBJECT_H_
#define PARTICLEGAMEOBJECT_H_

#include "cocos2d.h"
#include <string>
#include <vector>

class ParticleGameObject {
public:
    virtual ~ParticleGameObject();

    void customSetup();
    void resetObject();
    void setRotation(float);
    void setRotationX(float);
    void setRotationY(float);
    void claimParticle();
    void getSaveString(GJBaseGameLayer*);
    void setChildColor(cocos2d::_ccColor3B const&);
    void setObjectColor(cocos2d::_ccColor3B const&);
    void updateParticle();
    void unclaimParticle();
    void blendModeChanged();
    void deactivateObject(bool);
    void customObjectSetup(std::vector<std::string>&, std::vector<void*>&);
    void setParticleString(std::string);
    void updateParticleAngle(float, cocos2d::CCParticleSystemQuad*);
    void updateParticleColor(cocos2d::_ccColor3B const&);
    void updateParticleScale(float);
    void particleWasActivated();
    void updateParticleStruct();
    void addMainSpriteToParent(bool);
    void applyParticleSettings(cocos2d::CCParticleSystemQuad*);
    void updateParticleOpacity(unsigned char);
    void updateSyncedAnimation(float, int);
    void updateAnimateOnTrigger(bool);
    void createParticlePreviewArt();
    void updateMainParticleOpacity(unsigned char);
    void createAndAddCustomParticle();
    void updateSecondaryParticleOpacity(unsigned char);
    void updateParticlePreviewArtOpacity(float);
    void init();
    void create();
    void setScale(float);
    void setScaleX(float);
    void setScaleY(float);

protected:
    cocos2d::_ccColor3B m_childColor;
    cocos2d::_ccColor3B m_objectColor;
    std::string m_particleString;
    std::string m_saveString;
    float m_scale;
    float m_scaleX;
    float m_scaleY;

};

#endif // PARTICLEGAMEOBJECT_H_
