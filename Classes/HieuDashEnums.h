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

class PremiumPopup;
class AnimatedSpriteDelegate;
class GhostTrailDelegate;
class SlideInLayerDelegate;

#endif // _HIEUDASH_ENUMS_H_
