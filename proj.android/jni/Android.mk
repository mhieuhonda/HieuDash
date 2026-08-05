LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := game_shared

LOCAL_MODULE_FILENAME := libgame

# Cocos2d-x 2.2.3 engine sources. The cocos2d/ directory must contain
# the official cocos2d-x v2.2.3 release (download from
# https://github.com/niclas/cocos2d-x/archive/refs/tags/cocos2d-x-2.2.3.zip
# and unzip into ./cocos2d at the project root).
COCOS2DX_ROOT := $(LOCAL_PATH)/../../cocos2d

LOCAL_C_INCLUDES := \
    $(COCOS2DX_ROOT)/cocos2dx/include \
    $(COCOS2DX_ROOT)/cocos2dx/platform/android \
    $(COCOS2DX_ROOT)/cocos2dx/platform/third_party/android \
    $(COCOS2DX_ROOT)/CocosDenshion/include \
    $(COCOS2DX_ROOT)/extensions \
    $(LOCAL_PATH)/../../Classes

LOCAL_SRC_FILES := \
    main.cpp \
    ../../Classes/AccountHelpLayer.cpp \
    ../../Classes/AccountLayer.cpp \
    ../../Classes/AccountLoginLayer.cpp \
    ../../Classes/AccountRegisterLayer.cpp \
    ../../Classes/AchievementBar.cpp \
    ../../Classes/AchievementCell.cpp \
    ../../Classes/AchievementManager.cpp \
    ../../Classes/AchievementNotifier.cpp \
    ../../Classes/AchievementsLayer.cpp \
    ../../Classes/AdToolbox.cpp \
    ../../Classes/AppDelegate.cpp \
    ../../Classes/ArtistCell.cpp \
    ../../Classes/AudioEffectsLayer.cpp \
    ../../Classes/BitmapFontCache.cpp \
    ../../Classes/BonusDropdown.cpp \
    ../../Classes/BoomListLayer.cpp \
    ../../Classes/BoomListView.cpp \
    ../../Classes/BoomScrollLayer.cpp \
    ../../Classes/ButtonPage.cpp \
    ../../Classes/ButtonSprite.cpp \
    ../../Classes/CCAlertCircle.cpp \
    ../../Classes/CCAnimateFrameCache.cpp \
    ../../Classes/CCAnimatedSprite.cpp \
    ../../Classes/CCBlockLayer.cpp \
    ../../Classes/CCCircleAlert.cpp \
    ../../Classes/CCCircleWave.cpp \
    ../../Classes/CCContentLayer.cpp \
    ../../Classes/CCContentManager.cpp \
    ../../Classes/CCCountdown.cpp \
    ../../Classes/CCCounterLabel.cpp \
    ../../Classes/CCExtenderNode.cpp \
    ../../Classes/CCIndexPath.cpp \
    ../../Classes/CCLightFlash.cpp \
    ../../Classes/CCLightStrip.cpp \
    ../../Classes/CCMenuItemSpriteExtra.cpp \
    ../../Classes/CCMenuItemToggler.cpp \
    ../../Classes/CCPartAnimSprite.cpp \
    ../../Classes/CCScrollLayerExt.cpp \
    ../../Classes/CCSpritePart.cpp \
    ../../Classes/CCTableView.cpp \
    ../../Classes/CCTableViewCell.cpp \
    ../../Classes/CheckpointObject.cpp \
    ../../Classes/ColorPickerPopup.cpp \
    ../../Classes/ColorSelectPopup.cpp \
    ../../Classes/ColoredSection.cpp \
    ../../Classes/CommentCell.cpp \
    ../../Classes/CommentUploadDelegate.cpp \
    ../../Classes/CreateMenuItem.cpp \
    ../../Classes/CreatorLayer.cpp \
    ../../Classes/CustomListView.cpp \
    ../../Classes/CustomSongCell.cpp \
    ../../Classes/DS_Dictionary.cpp \
    ../../Classes/DelaySection.cpp \
    ../../Classes/DialogDelegate.cpp \
    ../../Classes/DialogLayer.cpp \
    ../../Classes/DialogObject.cpp \
    ../../Classes/DrawGridLayer.cpp \
    ../../Classes/EditButtonBar.cpp \
    ../../Classes/EditLevelLayer.cpp \
    ../../Classes/EditorPauseLayer.cpp \
    ../../Classes/EditorUI.cpp \
    ../../Classes/EffectGameObject.cpp \
    ../../Classes/EndLevelLayer.cpp \
    ../../Classes/EndPortalObject.cpp \
    ../../Classes/ExtendedLayer.cpp \
    ../../Classes/FLAlertLayer.cpp \
    ../../Classes/FileOperation.cpp \
    ../../Classes/FileSaveManager.cpp \
    ../../Classes/FontObject.cpp \
    ../../Classes/GJAccountBackupDelegate.cpp \
    ../../Classes/GJAccountDelegate.cpp \
    ../../Classes/GJAccountLoginDelegate.cpp \
    ../../Classes/GJAccountManager.cpp \
    ../../Classes/GJAccountRegisterDelegate.cpp \
    ../../Classes/GJAccountSettingsDelegate.cpp \
    ../../Classes/GJAccountSyncDelegate.cpp \
    ../../Classes/GJBaseGameLayer.cpp \
    ../../Classes/GJComment.cpp \
    ../../Classes/GJDropDownLayer.cpp \
    ../../Classes/GJEffectManager.cpp \
    ../../Classes/GJGameLevel.cpp \
    ../../Classes/GJGarageLayer.cpp \
    ../../Classes/GJGroundLayer.cpp \
    ../../Classes/GJListLayer.cpp \
    ../../Classes/GJMapPack.cpp \
    ../../Classes/GJMoreGamesLayer.cpp \
    ../../Classes/GJSearchObject.cpp \
    ../../Classes/GJChallengeItem.cpp \
    ../../Classes/GJLevelScoreCell.cpp \
    ../../Classes/GJMessageCell.cpp \
    ../../Classes/GJRewardItem.cpp \
    ../../Classes/GJRewardObject.cpp \
    ../../Classes/GJScoreCell.cpp \
    ../../Classes/GJUserCell.cpp \
    ../../Classes/GJUserMessage.cpp \
    ../../Classes/GJUserScore.cpp \
    ../../Classes/GJRequestCell.cpp \
    ../../Classes/GJStoreItem.cpp \
    ../../Classes/GManager.cpp \
    ../../Classes/GameCell.cpp \
    ../../Classes/GameEffectsManager.cpp \
    ../../Classes/GameLevelManager.cpp \
    ../../Classes/GameManager.cpp \
    ../../Classes/GameObject.cpp \
    ../../Classes/GameSoundManager.cpp \
    ../../Classes/GameStatsManager.cpp \
    ../../Classes/GameStoreManager.cpp \
    ../../Classes/GameToolbox.cpp \
    ../../Classes/GhostTrailEffect.cpp \
    ../../Classes/InfoLayer.cpp \
    ../../Classes/InstantSection.cpp \
    ../../Classes/LevelBrowserLayer.cpp \
    ../../Classes/LevelCell.cpp \
    ../../Classes/LevelCommentDelegate.cpp \
    ../../Classes/LevelEditorLayer.cpp \
    ../../Classes/LevelInfoLayer.cpp \
    ../../Classes/LevelPage.cpp \
    ../../Classes/LevelSearchLayer.cpp \
    ../../Classes/LevelSelectLayer.cpp \
    ../../Classes/LevelSettingsLayer.cpp \
    ../../Classes/LevelSettingsObject.cpp \
    ../../Classes/LevelTools.cpp \
    ../../Classes/LikeItemDelegate.cpp \
    ../../Classes/ListCell.cpp \
    ../../Classes/LoadingCircle.cpp \
    ../../Classes/LoadingLayer.cpp \
    ../../Classes/MapPackCell.cpp \
    ../../Classes/MenuGameLayer.cpp \
    ../../Classes/MenuLayer.cpp \
    ../../Classes/MoreGamesLayer.cpp \
    ../../Classes/MoreGamesManager.cpp \
    ../../Classes/MultilineBitmapFont.cpp \
    ../../Classes/MyLevelsLayer.cpp \
    ../../Classes/NumberInputLayer.cpp \
    ../../Classes/OBB2D.cpp \
    ../../Classes/ObjectDecoder.cpp \
    ../../Classes/ObjectManager.cpp \
    ../../Classes/ObjectToolbox.cpp \
    ../../Classes/OpenSLEngine.cpp \
    ../../Classes/OptionsLayer.cpp \
    ../../Classes/PauseLayer.cpp \
    ../../Classes/PlatformToolbox.cpp \
    ../../Classes/PlayLayer.cpp \
    ../../Classes/PlayerCheckpoint.cpp \
    ../../Classes/PlayerObject.cpp \
    ../../Classes/PriceLabel.cpp \
    ../../Classes/RateLevelLayer.cpp \
    ../../Classes/RingObject.cpp \
    ../../Classes/RobTop.cpp \
    ../../Classes/SavedLevelsLayer.cpp \
    ../../Classes/SearchButton.cpp \
    ../../Classes/SecretLayer.cpp \
    ../../Classes/SetGroupIDLayer.cpp \
    ../../Classes/SetIDLayer.cpp \
    ../../Classes/ShareLevelLayer.cpp \
    ../../Classes/SimpleAudioEngineOpenSL.cpp \
    ../../Classes/SimplePlayer.cpp \
    ../../Classes/SlideInLayer.cpp \
    ../../Classes/Slider.cpp \
    ../../Classes/SliderThumb.cpp \
    ../../Classes/SliderTouchLogic.cpp \
    ../../Classes/SongCell.cpp \
    ../../Classes/SongInfoLayer.cpp \
    ../../Classes/SongInfoObject.cpp \
    ../../Classes/SongObject.cpp \
    ../../Classes/SongsLayer.cpp \
    ../../Classes/Spinor.cpp \
    ../../Classes/SpriteAnimationManager.cpp \
    ../../Classes/SpriteDescription.cpp \
    ../../Classes/StatsCell.cpp \
    ../../Classes/StatsLayer.cpp \
    ../../Classes/StatsObject.cpp \
    ../../Classes/StoreToolbox.cpp \
    ../../Classes/SupportLayer.cpp \
    ../../Classes/TableViewCell.cpp \
    ../../Classes/TextArea.cpp \
    ../../Classes/TutorialLayer.cpp \
    ../../Classes/TutorialPopup.cpp \
    ../../Classes/UILayer.cpp \
    ../../Classes/UndoObject.cpp \
    ../../Classes/UploadPopup.cpp \
    ../../Classes/BoomScrollLayerDelegate.cpp \
    ../../Classes/CCScrollLayerExtDelegate.cpp \
    ../../Classes/CCTableViewDataSource.cpp \
    ../../Classes/CCTableViewDelegate.cpp \
    ../../Classes/CCTextInputNode.cpp \
    ../../Classes/CocosDenshion.cpp \
    ../../Classes/ColorPickerDelegate.cpp \
    ../../Classes/ColorSelectDelegate.cpp \
    ../../Classes/FLAlertLayerProtocol.cpp \
    ../../Classes/GameRateDelegate.cpp \
    ../../Classes/LevelDownloadDelegate.cpp \
    ../../Classes/LevelManagerDelegate.cpp \
    ../../Classes/LevelSettingsDelegate.cpp \
    ../../Classes/LevelUpdateDelegate.cpp \
    ../../Classes/LevelUploadDelegate.cpp \
    ../../Classes/RateLevelDelegate.cpp \
    ../../Classes/TextInputDelegate.cpp \
    ../../Classes/TriggerEffectDelegate.cpp

LOCAL_CFLAGS := -DCC_TARGET_PLATFORM=CC_PLATFORM_ANDROID \
                -DCOCOS2D_DEBUG=1 \
                -DCOCOS2DX_VERSION_MAJOR=2 \
                -DCOCOS2DX_VERSION_MINOR=2 \
                -DCOCOS2DX_VERSION_PATCH=3

LOCAL_CPPFLAGS := -fexceptions -frtti

LOCAL_WHOLE_STATIC_LIBRARIES := cocos2dx_static cocosdenshion_static
LOCAL_WHOLE_STATIC_LIBRARIES += cocos_extension_static

include $(BUILD_SHARED_LIBRARY)

$(call import-add-path,$(COCOS2DX_ROOT))
$(call import-module,cocos2dx)
$(call import-module,CocosDenshion/android)
$(call import-module,extensions)
