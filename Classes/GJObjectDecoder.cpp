#include "GJObjectDecoder.h"
#include "GJGameLevel.h"
#include "SongInfoObject.h"
#include "GJChallengeItem.h"
#include "GJRewardItem.h"
#include "GJRewardObject.h"

// Stub implementations — signatures recovered from libgame.so dynamic
// symbol table and cross-referenced against gd_reference/headers/GJObjectDecoder.h
// (v0.4 port). Bodies are placeholders and must be re-implemented by
// following the GD-Decompiled reference in gd_reference/src/.

GJObjectDecoder::GJObjectDecoder() {
    // TODO: implement (recovered from binary, body unknown)
}

GJObjectDecoder::~GJObjectDecoder() {
    // TODO: implement (recovered from binary, body unknown)
}

bool GJObjectDecoder::init() {
    // CCObject in cocos2d-x 2.2.3 has no init() method - it's a pure
    // base class. Just return true.
    return true;
}

cocos2d::CCObject* GJObjectDecoder::decodeObjectForKey(CoderKey key,
                                                        const char* data) {
    // TODO: dispatch to the appropriate subclass decoder based on `key`.
    // See gd_reference/headers/GJObjectDecoder.h for the canonical
    // key→class mapping:
    //   kCoderKeyGameLevel     -> GJGameLevel::createWithDescription(...)
    //   kCoderKeySongInfo      -> SongInfoObject::createWithDescription(...)
    //   kCoderKeyChallengeItem -> GJChallengeItem::createWithDescription(...)
    //   kCoderKeyRewardItem    -> GJRewardItem::createWithDescription(...)
    //   kCoderKeyRewardObject  -> GJRewardObject::createWithDescription(...)
    (void)key;
    (void)data;
    return nullptr;
}

std::string GJObjectDecoder::encodeObjectForKey(CoderKey key,
                                                cocos2d::CCObject* object) {
    // TODO: dispatch to the appropriate subclass encoder based on `key`.
    // See the corresponding `getSaveString()` method on each subclass.
    (void)key;
    (void)object;
    return std::string();
}

const char* GJObjectDecoder::classNameForKey(CoderKey key) {
    switch (key) {
        case kCoderKeyGameLevel:     return "GJGameLevel";
        case kCoderKeyUnused:        return "";
        case kCoderKeySongInfo:      return "SongInfoObject";
        case kCoderKeyChallengeItem: return "GJChallengeItem";
        case kCoderKeyRewardItem:    return "GJRewardItem";
        case kCoderKeyRewardObject:  return "GJRewardObject";
        default:                     return "";
    }
}

cocos2d::CCObject* GJObjectDecoder::decodeInternal(CoderKey key,
                                                    const char* data) {
    // TODO: implement (recovered from binary, body unknown)
    (void)key;
    (void)data;
    return nullptr;
}

std::string GJObjectDecoder::encodeInternal(CoderKey key,
                                            cocos2d::CCObject* object) {
    // TODO: implement (recovered from binary, body unknown)
    (void)key;
    (void)object;
    return std::string();
}
