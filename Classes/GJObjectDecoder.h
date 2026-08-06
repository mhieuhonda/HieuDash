#ifndef HIEUDASH_GJOBJECTDECODER_H_
#define HIEUDASH_GJOBJECTDECOD_H_

// Reverse-engineered from libgame.so (Geometry Dash 1.0, com.robtopx.geometryjump)
// Cross-referenced with gd_reference/headers/GJObjectDecoder.h (v0.4 port).
//
// GJObjectDecoder is a tiny helper class that maps a CoderKey enum value
// (kCoderKeyGameLevel, kCoderKeySongInfo, kCoderKeyChallengeItem, …) to
// the concrete CCObject subclass that should be instantiated during
// level/save deserialization. It is the runtime "factory" side of the
// GD 1.0 save-file format and is used by GameLevelManager, GJAccountManager,
// GJChallengeItem, GJRewardItem, GJRewardObject, and SongInfoObject when
// they decode their respective plist/xml blobs.

#include "cocos2d.h"
#include "HieuDashEnums.h"

// Forward declarations of classes decoded by this factory.
class GJGameLevel;
class SongInfoObject;
class GJChallengeItem;
class GJRewardItem;
class GJRewardObject;

class GJObjectDecoder : public cocos2d::CCObject {
public:
    GJObjectDecoder();
    virtual ~GJObjectDecoder();

    // Decodes a CCObject subclass instance for the given CoderKey.
    // Returns nullptr if the key is not recognised or decoding fails.
    // The caller is responsible for releasing the returned object
    // (CCObject::autorelease is called by this method before return).
    static cocos2d::CCObject* decodeObjectForKey(CoderKey key,
                                                  const char* data);

    // Encodes a CCObject subclass instance into a string suitable for
    // writing to the save file. Returns an empty string on failure.
    static std::string encodeObjectForKey(CoderKey key,
                                          cocos2d::CCObject* object);

    // Returns the human-readable class name registered for a CoderKey,
    // e.g. kCoderKeyGameLevel -> "GJGameLevel". Returns an empty string
    // if the key is not recognised. Used for debug logging.
    static const char* classNameForKey(CoderKey key);

private:
    // Initializes the decoder instance. Returns true on success.
    bool init();

    // Internal helper that performs the actual decoding dispatch.
    cocos2d::CCObject* decodeInternal(CoderKey key, const char* data);

    // Internal helper that performs the actual encoding dispatch.
    std::string encodeInternal(CoderKey key, cocos2d::CCObject* object);
};

#endif // HIEUDASH_GJOBJECTDECODER_H_
