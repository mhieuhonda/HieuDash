
#ifndef DRAWGRIDLAYER_H_
#define DRAWGRIDLAYER_H_

#include "cocos2d.h"
#include <string>

class DrawGridLayer {
public:
    virtual ~DrawGridLayer();

    void posForTime(float);
    void postUpdate();
    void timeForPos(cocos2d::CCPoint, int, int, bool, bool, bool, int);
    void addToGuides(GameObject*);
    void addToEffects(EffectGameObject*);
    void getPortalMinMax(GameObject*);
    void loadTimeMarkers(std::string);
    void removeFromGuides(GameObject*);
    void sortSpeedObjects();
    void addToSpeedObjects(EffectGameObject*);
    void removeFromEffects(EffectGameObject*);
    void updateTimeMarkers();
    void addAudioLineObject(AudioLineGuideGameObject*);
    void updateMusicGuideTime(float);
    void removeAudioLineObject(AudioLineGuideGameObject*);
    void removeFromSpeedObjects(EffectGameObject*);
    void draw();
    void init(cocos2d::CCNode*, LevelEditorLayer*);
    void create(cocos2d::CCNode*, LevelEditorLayer*);
    void update(float);

};

#endif // DRAWGRIDLAYER_H_
