
#ifndef LEVELEDITORLAYER_H_
#define LEVELEDITORLAYER_H_

#include "EditorUI.h"
#include "GJBaseGameLayer.h"
#include "GJGameLevel.h"
#include "cocos2d.h"
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// Forward declarations
class EditorUI;
class GJGameLevel;

class LevelEditorLayer : public GJBaseGameLayer {
public:
    virtual ~LevelEditorLayer();

    void addSpecial(GameObject*);
    void addToGroup(GameObject*, int, bool);
    void getGridPos(cocos2d::CCPoint);
    void getSongIDs(bool&);
    void onPlaytest();
    void posForTime(float);
    void postUpdate(float);
    void timeForPos(cocos2d::CCPoint, int, int, bool, int);
    void toggleGrid(bool);
    void validGroup(GameObject*, bool);
    void addKeyframe(KeyframeGameObject*);
    void objectMoved(GameObject*);
    void shouldBlend(int);
    void updateColor(cocos2d::_ccColor3B&, float, int, bool, float, cocos2d::_ccHSVValue&, int, bool, EffectGameObject*, int, int);
    void createObject(int, cocos2d::CCPoint, bool);
    void handleAction(bool, cocos2d::CCArray*);
    void removeObject(GameObject*, bool);
    void stopPlayback();
    void toggleGround(bool);
    void updateEditor(float);
    void addToRedoList(UndoObject*);
    void addToUndoList(UndoObject*, bool);
    void addTouchPoint(cocos2d::CCPoint);
    void canPasteState();
    void getAllObjects();
    void getObjectRect(GameObject*, bool, bool);
    void isLayerLocked(int);
    void objectsInRect(cocos2d::CCRect, bool);
    void removeSpecial(GameObject*);
    void resetPlayback();
    void updateOptions();
    void addPlayerPoint(cocos2d::CCPoint);
    void findGameObject(int);
    void getLastObjectX();
    void getLevelString();
    void onStopPlaytest();
    void recreateGroups();
    void redoLastAction();
    void refreshSpecial(GameObject*);
    void runColorEffect(EffectGameObject*, int, float, float, bool);
    void undoLastAction();
    void addDelayedSpawn(EffectGameObject*, float);
    void addPlayer2Point(cocos2d::CCPoint, bool);
    void applyGroupState(GameObject*, GameObject*);
    void copyObjectState(GameObject*);
    void dirtifyTriggers();
    void getLockedLayers();
    void getSectionCount();
    void getTriggerGroup(int);
    void onPausePlaytest();
    void pasteColorState(GameObject*, cocos2d::CCArray*);
    void pasteGroupState(GameObject*, cocos2d::CCArray*);
    void removeFromGroup(GameObject*, int);
    void unlockAllLayers();
    void updateDebugDraw();
    void updateGridLayer();
    void updateLevelFont(int);
    void addExclusionList(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&, std::unordered_set<int>, std::equal_to<int>, std::allocator<int> >&);
    void addObjectToGroup(GameObject*, int);
    void addObjectsInRect(cocos2d::CCRect, bool, cocos2d::CCArray*, cocos2d::CCArray*);
    void clearTouchPoints();
    void getNextFreeSFXID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void objectAtPosition(cocos2d::CCPoint);
    void onResumePlaytest();
    void playerTookDamage(PlayerObject*);
    void removeAllObjects();
    void resetSPTriggered();
    void toggleBackground(bool);
    void updateEditorMode();
    void updateVisibility(float);
    void clearPlayerPoints();
    void copyParticleState(ParticleGameObject*);
    void didRotateGameplay();
    void getNextFreeItemID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getRelativeOffset(GameObject*);
    void objectsAtPosition(cocos2d::CCPoint);
    void resetObjectVector();
    void spawnGroupPreview(int, float, float, float, float, float, bool, bool);
    void timeObjectChanged();
    void updateBlendValues();
    void updateGameObjects();
    void updateObjectLabel(GameObject*);
    void updatePreviewAnim();
    void findStartPosObject();
    void getNextFreeBlockID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getNextFreeGroupID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void pasteParticleState(ParticleGameObject*, cocos2d::CCArray*);
    void resetMovingObjects();
    void resetToggledGroups();
    void saveEditorPosition(cocos2d::CCPoint&, int);
    void toggleGroupPreview(int, bool);
    void updateObjectColors(cocos2d::CCArray*);
    void addObjectFromVector(std::vector<std::string>&, std::vector<void*>&);
    void applyAttributeState(GameObject*, GameObject*);
    void checkpointActivated(CheckpointGameObject*);
    void claimCustomParticle(std::string const&, cocos2d::ParticleStruct const&, int, int, int, bool);
    void getDelayedSpawnNode();
    void getNextColorChannel();
    void pasteAttributeState(GameObject*, cocos2d::CCArray*);
    void stopTriggersInGroup(int, float);
    void updateObjectSection(GameObject*);
    void updateToggledGroups();
    void addObjectsAtPosition(cocos2d::CCPoint, cocos2d::CCArray*, cocos2d::CCArray*);
    void breakApartTextObject(TextGameObject*);
    void getSelectedEffectPos();
    void levelSettingsUpdated();
    void reverseObjectChanged(EffectGameObject*);
    void triggerFollowCommand(EffectGameObject*);
    void triggerRotateCommand(EffectGameObject*);
    void tryUpdateSpeedObject(EffectGameObject*, bool);
    void typeExistsAtPosition(int, cocos2d::CCPoint, bool, bool, float);
    void activateTriggerEffect(EffectGameObject*, float, float, float, bool);
    void activatedAudioTrigger(SFXTriggerGameObject*);
    void getNextFreeGradientID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getNextFreeSFXGroupID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void sortBatchnodeChildren(float);
    void toggleLockActiveLayer();
    void transferDefaultColors(GJEffectManager*, GJEffectManager*);
    void unclaimCustomParticle(std::string const&, cocos2d::CCParticleSystemQuad*);
    void updateGridLayerParent();
    void updateKeyframeObjects();
    void updatePreviewParticle(ParticleGameObject*);
    void addTriggersWithGroupID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> >&, cocos2d::CCArray*, std::unordered_map<int, int>, std::equal_to<int>, std::allocator<std::pair<const int, int> > >&, int);
    void createObjectsFromSetup(std::string&);
    void getNextFreeEditorLayer(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getSavedEditorPosition(int);
    void getSelectedEditorOrder();
    void removeAllObjectsOfType(int);
    void resetDelayedSpawnNodes();
    void updatePreviewParticles();
    void addPlayerCollisionBlock();
    void createObjectsFromString(std::string const&, bool, bool);
    void getNextFreeAreaEffectID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getNextFreeEnterChannel(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getNextFreeOrderChannel(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> > const&);
    void getSavedEditorPositions();
    void getSelectedOrderChannel();
    void quickUpdateAllPositions();
    void resetEffectTriggerOptim(GameObject*, cocos2d::CCArray*);
    void fastUpdateDisabledGroups();
    void forceShowSelectedObjects(bool);
    void fullUpdateDisabledGroups();
    void manualUpdateObjectColors(GameObject*);
    void processLoadedMoveActions();
    void resetUnusedColorChannels();
    void updateKeyframeVisibility(bool);
    void duplicateKeyframeAnimation(int);
    void removePlayerCollisionBlock();
    void rotationForSlopeNearObject(GameObject*);
    void triggerPlayerFollowCommand(EffectGameObject*);
    void addTriggersWithTargetGroupID(std::unordered_set<int>, std::equal_to<int>, std::allocator<int> >&, std::unordered_set<int>, std::equal_to<int>, std::allocator<int> >&, cocos2d::CCArray*, std::unordered_map<int, int>, std::equal_to<int>, std::allocator<std::pair<const int, int> > >&, int);
    void resetToggledGroupsAndObjects();
    void updateDisabledObjectsLastPos(cocos2d::CCArray*);
    void reverseKeyframeAnimationOrder(int);
    void updateAnimateOnTriggerObjects(bool);
    void draw() override;
    void init(GJGameLevel*, bool) override;
    void scene(GJGameLevel*, bool);
    void create(GJGameLevel*, bool);
    void getSFXIDs();
    void hasAction(bool);
    void updateArt(float);

protected:
    EditorUI* m_editorUI;
    float m_gridSize;
    GJGameLevel* m_level;
    std::string m_levelString;
    cocos2d::_ccColor3B m_nextColorChannel;
    int m_nextFreeAreaEffectID;
    int m_nextFreeBlockID;
    int m_nextFreeGradientID;
    int m_nextFreeGroupID;
    int m_nextFreeItemID;
    int m_nextFreeSFXGroupID;
    int m_nextFreeSFXID;
    int m_objectCount;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_redoStack;
    int m_sFXIDs;
    cocos2d::CCPoint m_savedEditorPosition;
    cocos2d::CCPoint m_savedEditorPositions;
    int m_sectionCount;
    int m_songIDs;
    cocos2d::CCArray* m_triggers;
    cocos2d::CCArray* m_undoStack;

};

#endif // LEVELEDITORLAYER_H_
