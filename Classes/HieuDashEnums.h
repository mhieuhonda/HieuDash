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

enum CoderKey {
    kCoderKeyLevelIDSeed = 0,
    kCoderKeyLevelIDRand,
    kCoderKeyUserIDSeed,
    kCoderKeyUserIDRand,
    kCoderKeyAccountIDSeed,
    kCoderKeyAccountIDRand,
    kCoderKeyIconSeed,
    kCoderKeyIconRand
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

#endif // _HIEUDASH_ENUMS_H_
