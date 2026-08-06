// Auto-generated enum/type declarations for HieuDash
// Recovered from libgame.so symbol analysis and method signatures

#ifndef _HIEUDASH_ENUMS_H_
#define _HIEUDASH_ENUMS_H_

enum LastGameScene {
    kLastGameSceneMenu = 0,
    kLastGameSceneEditor,
    kLastGameSceneLevelSelect,
    kLastGameScenePlayLayer,
    kLastGameSceneLevelBrowser,
    kLastGameSceneGarage
};

enum EnterEffect {
    kEnterEffectNone = 0,
    kEnterEffectScale,
    kEnterEffectFade,
    kEnterEffectSlide
};

enum PlayerButton {
    kPlayerButtonLeft = 0,
    kPlayerButtonRight,
    kPlayerButtonJump
};

enum GhostType {
    kGhostTypeNone = 0,
    kGhostTypeTrail,
    kGhostTypeWave
};

enum EditMode {
    kEditModeSelect = 0,
    kEditModeCreate,
    kEditModeDelete,
    kEditModeTransform
};

enum EditCommand {
    kEditCommandFlipX = 0,
    kEditCommandFlipY,
    kEditCommandRotateCW,
    kEditCommandRotateCCW,
    kEditCommandScale,
    kEditCommandMove
};

enum SearchType {
    kSearchTypeMostRecent = 0,
    kSearchTypeMostDownloaded,
    kSearchTypeMostLiked,
    kSearchTypeTrending,
    kSearchTypeAwarded,
    kSearchTypeFollowed,
    kSearchTypeMyLevels,
    kSearchTypeSearch
};

enum GJLevelType {
    kGJLevelTypeLocal = 0,
    kGJLevelTypeMain,
    kGJLevelTypeOnline,
    kGJLevelTypeSaved
};

enum CCTableViewCellEditingStyle {
    kCCTableViewCellEditingStyleNone = 0,
    kCCTableViewCellEditingStyleInsert,
    kCCTableViewCellEditingStyleDelete
};

enum BoomListType {
    kBoomListTypeDefault = 0,
    kBoomListTypeLevels,
    kBoomListTypeScores,
    kBoomListTypeMapPacks,
    kBoomListTypeGauntlets,
    kBoomListTypeSearch
};

enum UpdateResponse {
    kUpdateResponseSuccess = 0,
    kUpdateResponseFailed,
    kUpdateResponseUpToDate,
    kUpdateResponseOldVersion
};

enum spriteMode {
    kSpriteModeNormal = 0,
    kSpriteModeLoop,
    kSpriteModeOnce
};

enum FormatterType {
    kFormatterTypeDefault = 0,
    kFormatterTypeTime,
    kFormatterTypePercent,
    kFormatterTypeScore
};

enum CircleMode {
    kCircleModeNormal = 0,
    kCircleModePulse,
    kCircleModeShockWave
};

enum UnlockType {
    kUnlockTypeColor = 0,
    kUnlockTypeIcon,
    kUnlockTypeTrail,
    kUnlockTypeSpecial
};

struct frameValues {
    int frameID;
    float delay;
    int loop;
};

// --- Missing enums from GD-Decompiled ---

enum AccountError {
    kAccountErrorNone = 0,
    kAccountErrorGeneral,
    kAccountErrorLoginFailed,
    kAccountErrorRegisterFailed,
    kAccountErrorAlreadyLoggedIn,
    kAccountErrorNotLoggedIn,
    kAccountErrorRateLimit,
    kAccountErrorBadLogin,
    kAccountErrorGeneric
};

enum BackupAccountError {
    kBackupAccountErrorNone = 0,
    kBackupAccountErrorGeneral,
    kBackupAccountErrorTooLarge,
    kBackupAccountErrorFailed,
    kBackupAccountErrorSyncFailed
};

enum EasingType {
    kEasingTypeNone = 0,
    kEasingTypeEaseIn,
    kEasingTypeEaseOut,
    kEasingTypeEaseInOut,
    kEasingTypeElasticIn,
    kEasingTypeElasticOut,
    kEasingTypeElasticInOut,
    kEasingTypeBounceIn,
    kEasingTypeBounceOut,
    kEasingTypeBounceInOut,
    kEasingTypeExponentialIn,
    kEasingTypeExponentialOut,
    kEasingTypeExponentialInOut,
    kEasingTypeSineIn,
    kEasingTypeSineOut,
    kEasingTypeSineInOut,
    kEasingTypeBackIn,
    kEasingTypeBackOut,
    kEasingTypeBackInOut
};

enum ComparisonType {
    kComparisonTypeEquals = 0,
    kComparisonTypeNotEquals,
    kComparisonTypeGreaterThan,
    kComparisonTypeLessThan,
    kComparisonTypeGreaterEquals,
    kComparisonTypeLessEquals
};

enum MoveTargetType {
    kMoveTargetTypeX = 0,
    kMoveTargetTypeY,
    kMoveTargetTypeBoth
};

enum TouchToggleMode {
    kTouchToggleModeNormal = 0,
    kTouchToggleModeToggleOn,
    kTouchToggleModeToggleOff
};

enum PickupMode {
    kPickupModeNormal = 0,
    kPickupModeToggle,
    kPickupModeHold
};

enum ButtonType {
    kButtonTypeBig = 0,
    kButtonTypeSmall,
    kButtonTypeNext,
    kButtonTypeBack,
    kButtonTypeLeft,
    kButtonTypeRight,
    kButtonTypeUp,
    kButtonTypeDown,
    kButtonTypePlay,
    kButtonTypeHelp,
    kButtonTypeAccount
};

enum LikeItemType {
    kLikeItemTypeLevel = 0,
    kLikeItemTypeComment,
    kLikeItemTypeAccountComment
};

enum GJChallengeType {
    kGJChallengeTypeDaily = 0,
    kGJChallengeTypeWeekly,
    kGJChallengeTypeEvent
};

enum GJRewardType {
    kGJRewardTypeSmall = 0,
    kGJRewardTypeLarge,
    kGJRewardTypeDaily,
    kGJRewardTypeWeekly
};

enum SpecialRewardItem {
    kSpecialRewardItemNone = 0,
    kSpecialRewardItemFireShard,
    kSpecialRewardItemIceShard,
    kSpecialRewardItemPoisonShard,
    kSpecialRewardItemShadowShard,
    kSpecialRewardItemLavaShard,
    kSpecialRewardItemBonusKey,
    kSpecialRewardItemOrbs,
    kSpecialRewardItemDiamonds,
    kSpecialRewardItemCustomIcon
};

enum ItemType {
    kItemTypeCube = 0,
    kItemTypeShip,
    kItemTypeBall,
    kItemTypeUfo,
    kItemTypeWave,
    kItemTypeRobot,
    kItemTypeSpider,
    kItemTypeTrail,
    kItemTypeDeathEffect,
    kItemTypeColor1,
    kItemTypeColor2
};

// CoderKey — values recovered from libgame.so and cross-referenced
// with the GD-Decompiled GJObjectDecoder header (v0.4 port).
enum CoderKey {
    kCoderKeyLevelIDSeed = 0,
    kCoderKeyLevelIDRand,
    kCoderKeyUserIDSeed,
    kCoderKeyUserIDRand,
    kCoderKeyAccountIDSeed,
    kCoderKeyAccountIDRand,
    kCoderKeyIconSeed,
    kCoderKeyIconRand,
    // GD-Decompiled canonical keys (gd_reference/headers/GJObjectDecoder.h)
    kCoderKeyGameLevel       = 0x4,
    kCoderKeyUnused          = 0x5,
    kCoderKeySongInfo        = 0x6,
    kCoderKeyChallengeItem   = 0x7,
    kCoderKeyRewardItem      = 0x8,
    kCoderKeyRewardObject    = 0x9
};

enum GJLength {
    kGJLengthTiny = 0,
    kGJLengthShort,
    kGJLengthMedium,
    kGJLengthLong,
    kGJLengthXL,
    kGJLengthPlat
};

enum GJDifficulty {
    kGJDifficultyAuto = -1,
    kGJDifficultyEasy = 1,
    kGJDifficultyNormal = 2,
    kGJDifficultyHard = 3,
    kGJDifficultyHarder = 4,
    kGJDifficultyInsane = 5,
    kGJDifficultyDemon = 6,
    kGJDifficultyDemonEasy = 7,
    kGJDifficultyDemonMedium = 8,
    kGJDifficultyDemonHard = 9,
    kGJDifficultyDemonInsane = 10,
    kGJDifficultyDemonExtreme = 11
};

enum Speed {
    kSpeedVerySlow = 0,
    kSpeedSlow,
    kSpeedNormal,
    kSpeedFast,
    kSpeedVeryFast,
    kSpeedFast3,
    kSpeedFast4
};

enum EditorTabType {
    kEditorTabTypeBuild = 0,
    kEditorTabTypeEdit,
    kEditorTabTypeDelete
};

enum GameMode {
    kGameModeCube = 0,
    kGameModeShip,
    kGameModeBall,
    kGameModeUfo,
    kGameModeWave,
    kGameModeRobot,
    kGameModeSpider
};

enum GameObjectType {
    kGameObjectTypeSolid = 0,
    kGameObjectTypeHazard,
    kGameObjectTypePortal,
    kGameObjectTypeDecor,
    kGameObjectTypeSpecial,
    kGameObjectTypeModifier
};

enum GJHttpType {
    kGJHttpTypeGetGJLevels = 0,
    kGJHttpTypeGetGJLevelScores,
    kGJHttpTypeGetGJUserInfo,
    kGJHttpTypeGetGJUserList,
    kGJHttpTypeUploadGJLevel,
    kGJHttpTypeGetGJLevel,
    kGJHttpTypeDeleteGJLevel,
    kGJHttpTypeRateGJLevel,
    kGJHttpTypeGetGJComments,
    kGJHttpTypeUploadGJComment,
    kGJHttpTypeDeleteGJComment,
    kGJHttpTypeRateGJComment,
    kGJHttpTypeGetGJAccountComments,
    kGJHttpTypeUploadGJAccountComment,
    kGJHttpTypeDeleteGJAccountComment,
    kGJHttpTypeLikeGJItem,
    kGJHttpTypeGetGJMapPacks,
    kGJHttpTypeGetGJGauntlets,
    kGJHttpTypeGetGJRewards,
    kGJHttpTypeGetGJChallenges,
    kGJHttpTypeGetGJDailyLevel,
    kGJHttpTypeUploadGJAccComment,
    kGJHttpTypeGetGJAccComments,
    kGJHttpTypeGetGJFriendRequests,
    kGJHttpTypeUploadGJFriendRequest,
    kGJHttpTypeAcceptGJFriendRequest,
    kGJHttpTypeDeleteGJFriendRequest,
    kGJHttpTypeReadGJFriendRequest,
    kGJHttpTypeGetGJMessages,
    kGJHttpTypeUploadGJMessage,
    kGJHttpTypeDeleteGJMessage,
    kGJHttpTypeDownloadGJMessage,
    kGJHttpTypeGetGJSearchWords,
    kGJHttpTypeGetGJQuests,
    kGJHttpTypeGetGJLevelLists,
    kGJHttpTypeUploadGJLevelList,
    kGJHttpTypeGetGJLevelList,
    kGJHttpTypeDeleteGJLevelList,
    kGJHttpTypeGetGJTopArtists,
    kGJHttpTypeGetGJLevelScores2,
    kGJHttpTypeGetGJLevelScores3,
    kGJHttpTypeLoginGJAccount,
    kGJHttpTypeRegisterGJAccount,
    kGJHttpTypeBackupGJAccount,
    kGJHttpTypeSyncGJAccount,
    kGJHttpTypeUpdateGJUserScore,
    kGJHttpTypeGetGJUserScore,
    kGJHttpTypeGetGJUserInfo20,
    kGJHttpTypeGetGJUserScore20,
    kGJHttpTypeUpdateGJUserScore20,
    kGJHttpTypeGetGJDailyLevelPage,
    kGJHttpTypeGetGJWeeklyLevel,
    kGJHttpTypeGetGJWeeklyLevelPage,
    kGJHttpTypeGetGJLevelScoresList,
    kGJHttpTypeGetGJLeaderboard,
    kGJHttpTypeGetGJCreatorLeaderboard,
    kGJHttpTypeGetGJMusicInfo,
    kGJHttpTypeGetGJCustomContent,
    kGJHttpTypeSuggestGJStars,
    kGJHttpTypeReportGJLevel,
    kGJHttpTypeGetGJAccountSync
};

enum GJSong {
    kGJSongMain = 0,
    kGJSongBackOnTrack,
    kGJSongPolargeist,
    kGJSongDryOut,
    kGJSongBaseAfterBase,
    kGJSongCantLetGo,
    kGJSongJumper,
    kGJSongTimeMachine,
    kGJSongCycles,
    kGJSongxStep,
    kGJSongClubstep,
    kGJSongElectromanAdventures,
    kGJSongBlastProcessing,
    kGJSongTheoryOfEverything,
    kGJSongGeometricalDominator,
    kGJSongDeadlocked,
    kGJSongFingerdash,
    // --- v0.5: Hieu Louis level — custom soundtrack "ĐỚN ĐAU VÔ CÙNG" ---
    // Song ID 17 is reserved for the Hieu Louis boss level.
    kGJSongHieuLouis = 17,
    kGJSongCustom
};

enum GJIconType {
    kGJIconTypeCube = 0,
    kGJIconTypeShip,
    kGJIconTypeBall,
    kGJIconTypeUfo,
    kGJIconTypeWave,
    kGJIconTypeRobot,
    kGJIconTypeSpider,
    kGJIconTypeDeathEffect,
    kGJIconTypeTrail
};

enum GJScoreType {
    kGJScoreTypeStars = 0,
    kGJScoreTypeCreator,
    kGJScoreTypeLevel,
    kGJScoreTypeFriends,
    kGJScoreTypeWeekly,
    kGJScoreTypeGlobal
};

enum ShopType {
    kShopTypeCube = 0,
    kShopTypeShip,
    kShopTypeBall,
    kShopTypeUfo,
    kShopTypeWave,
    kShopTypeRobot,
    kShopTypeSpider,
    kShopTypeTrail,
    kShopTypeDeathEffect,
    kShopTypeColors
};

enum GJDemonType {
    kGJDemonTypeEasy = 1,
    kGJDemonTypeMedium = 2,
    kGJDemonTypeHard = 3,
    kGJDemonTypeInsane = 4,
    kGJDemonTypeExtreme = 5
};

enum Scene {
    kSceneNone = 0,
    kSceneMainMenu,
    kSceneSelectLevel,
    kSceneEditor,
    kScenePlay,
    kSceneLevelBrowser,
    kSceneGarage,
    kSceneStats,
    kSceneSearch,
    kSceneAccount,
    kSceneLeaderboard,
    kSceneMessages,
    kSceneFriends,
    kSceneChallenges,
    kSceneDaily,
    kSceneWeekly,
    kSceneMapPacks,
    kSceneGauntlets
};

enum LeaderboardState {
    kLeaderboardStateDefault = 0,
    kLeaderboardStateMyLevels,
    kLeaderboardStateFriends,
    kLeaderboardStateGlobal,
    kLeaderboardStateCreator,
    kLeaderboardStateLevel
};

// --- Forward declarations ---

class PremiumPopup;
class AnimatedSpriteDelegate;
class GhostTrailDelegate;
class SlideInLayerDelegate;

// Missing forward declarations from GD-Decompiled
class GJRobotSprite;
class GJSpiderSprite;
class HardStreak;
class CCSpritePlus;
class GJSpriteColor;
class ColorChannelSprite;
class GJRotationControl;
class GJScaleControl;
class StartPosObject;
class CCNodeContainer;
class ColorSelectLiveOverlay;
class GJDropDownLayerDelegate;
class ListButtonBarDelegate;
class GooglePlayDelegate;
class DynamicScrollDelegate;
class OnlineListDelegate;
class LeaderboardManagerDelegate;
class LevelDeleteDelegate;
class UserInfoDelegate;
class FriendRequestDelegate;
class MessageListDelegate;
class DownloadMessageDelegate;
class UploadMessageDelegate;
class GJRewardDelegate;
class GJChallengeDelegate;
class GJDailyLevelDelegate;
class MusicDownloadDelegate;
class UploadPopupDelegate;
class UploadActionDelegate;
class TextAreaDelegate;
class CurrencyRewardDelegate;
class CCCircleWaveDelegate;
class LocalLevelManager;
class DailyLevelPage;
class InheritenceNode;
class ColorAction;
class ColorActionSprites;

// ---- Begin auto-generated forward declarations ----
class AccountHelpLayer;
class AccountLayer;
class AccountLoginLayer;
class AccountRegisterLayer;
class AchievementBar;
class AchievementCell;
class AchievementManager;
class AchievementNotifier;
class AchievementsLayer;
class AdToolbox;
class AppDelegate;
class ArtistCell;
class AudioEffectsLayer;
class BitmapFontCache;
class BonusDropdown;
class BoomListLayer;
class BoomListView;
class BoomScrollLayer;
class BoomScrollLayerDelegate;
class ButtonPage;
class ButtonSprite;
class CCAlertCircle;
class CCAnimateFrameCache;
class CCAnimatedSprite;
class CCBlockLayer;
class CCCircleAlert;
class CCCircleWave;
class CCContentLayer;
class CCContentManager;
class CCCountdown;
class CCCounterLabel;
class CCExtenderNode;
class CCIndexPath;
class CCLightFlash;
class CCLightStrip;
class CCMenuItemSpriteExtra;
class CCMenuItemToggler;
class CCPartAnimSprite;
class CCScrollLayerExt;
class CCScrollLayerExtDelegate;
class CCSpritePart;
class CCTableView;
class CCTableViewCell;
class CCTableViewDataSource;
class CCTableViewDelegate;
class CCTextInputNode;
class CheckpointObject;
class ColorPickerDelegate;
class ColorPickerPopup;
class ColorSelectDelegate;
class ColorSelectPopup;
class ColoredSection;
class CommentCell;
class CommentUploadDelegate;
class CreateMenuItem;
class CreatorLayer;
class CustomListView;
class CustomSongCell;
class DS_Dictionary;
class DelaySection;
class DialogDelegate;
class DialogLayer;
class DialogObject;
class DrawGridLayer;
class EditButtonBar;
class EditLevelLayer;
class EditorPauseLayer;
class EditorUI;
class EffectGameObject;
class EndLevelLayer;
class EndPortalObject;
class ExtendedLayer;
class FLAlertLayer;
class FLAlertLayerProtocol;
class FileOperation;
class FileSaveManager;
class FontObject;
class GJAccountBackupDelegate;
class GJAccountDelegate;
class GJAccountLoginDelegate;
class GJAccountManager;
class GJAccountRegisterDelegate;
class GJAccountSettingsDelegate;
class GJAccountSyncDelegate;
class GJBaseGameLayer;
class GJChallengeItem;
class GJComment;
class GJDropDownLayer;
class GJEffectManager;
class GJGameLevel;
class GJGarageLayer;
class GJGroundLayer;
class GJLevelScoreCell;
class GJListLayer;
class GJMapPack;
class GJMessageCell;
class GJMoreGamesLayer;
class GJObjectDecoder;
class GJRequestCell;
class GJRewardItem;
class GJRewardObject;
class GJScoreCell;
class GJSearchObject;
class GJStoreItem;
class GJUserCell;
class GJUserMessage;
class GJUserScore;
class GManager;
class GameCell;
class GameEffectsManager;
class GameLevelManager;
class GameManager;
class GameObject;
class GameRateDelegate;
class GameSoundManager;
class GameStatsManager;
class GameStoreManager;
class GameToolbox;
class GhostTrailEffect;
class HieuLouisLevel;
class InfoLayer;
class InstantSection;
class LevelBrowserLayer;
class LevelCell;
class LevelCommentDelegate;
class LevelDownloadDelegate;
class LevelEditorLayer;
class LevelInfoLayer;
class LevelManagerDelegate;
class LevelPage;
class LevelSearchLayer;
class LevelSelectLayer;
class LevelSettingsDelegate;
class LevelSettingsLayer;
class LevelSettingsObject;
class LevelTools;
class LevelUpdateDelegate;
class LevelUploadDelegate;
class LikeItemDelegate;
class ListCell;
class LoadingCircle;
class LoadingLayer;
class MapPackCell;
class MenuGameLayer;
class MenuLayer;
class MoreGamesLayer;
class MoreGamesManager;
class MultilineBitmapFont;
class MyLevelsLayer;
class NumberInputLayer;
class OBB2D;
class ObjectDecoder;
class ObjectManager;
class ObjectToolbox;
class OpenSLEngine;
class OptionsLayer;
class PauseLayer;
class PlatformToolbox;
class PlayLayer;
class PlayerCheckpoint;
class PlayerObject;
class PriceLabel;
class RateLevelDelegate;
class RateLevelLayer;
class RingObject;
class RobTop;
class SavedLevelsLayer;
class SearchButton;
class SecretLayer;
class SetGroupIDLayer;
class SetIDLayer;
class ShareLevelLayer;
class SimpleAudioEngineOpenSL;
class SimplePlayer;
class SlideInLayer;
class Slider;
class SliderThumb;
class SliderTouchLogic;
class SongCell;
class SongInfoLayer;
class SongInfoObject;
class SongObject;
class SongsLayer;
class Spinor;
class SpriteAnimationManager;
class SpriteDescription;
class StatsCell;
class StatsLayer;
class StatsObject;
class StoreToolbox;
class SupportLayer;
class TableViewCell;
class TextArea;
class TextInputDelegate;
class TriggerEffectDelegate;
class TutorialLayer;
class TutorialPopup;
class UILayer;
class UndoObject;
class UploadPopup;
// ---- End auto-generated forward declarations ----

#endif // _HIEUDASH_ENUMS_H_
