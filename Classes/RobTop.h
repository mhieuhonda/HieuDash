#ifndef HIEUDASH_ROBTOP_H_
#define HIEUDASH_ROBTOP_H_

// Reverse-engineered from GD-Decompiled (Geometry Dash)
// String parsing utilities + Globals namespace with XOR keys

#include "cocos2d.h"
#include "HieuDashEnums.h"
#include <string>
#include <vector>

namespace Globals {
    // XOR keys used for encoding/decoding level strings and save data
    static const int LEVEL_XOR_KEY = 11;
    static const int LEVEL_PASS_XOR_KEY = 0x1A;
    static const int ACCOUNT_XOR_KEY = 11;
    static const int LEVEL_ID_XOR_KEY = 26356;
    static const int USER_ID_XOR_KEY = 26356;
    static const int LEVEL_SCORE_XOR_KEY = 1985;
    static const int USER_SCORE_XOR_KEY = 1985;
    static const int COMMENT_XOR_KEY = 1985;
    static const int LEVEL_STRING_XOR_KEY = 11;
    static const int SAVE_XOR_KEY = 11;
    static const int REWARD_XOR_KEY = 1985;
    static const int CHALLENGE_XOR_KEY = 1985;

    // Seed values for anti-cheat
    static const int LEVEL_ID_SEED = 0x6B;
    static const int LEVEL_ID_RAND = 0x6F;
    static const int USER_ID_SEED = 0x6B;
    static const int USER_ID_RAND = 0x6F;
    static const int ICON_SEED = 0x6B;
    static const int ICON_RAND = 0x6F;
}

class RobTop {
public:
    // String splitting/parsing utilities
    static std::vector<std::string> splitString(std::string str, char delimiter);
    static std::string joinString(std::vector<std::string> vec, char delimiter);

    // XOR encryption/decryption
    static std::string xorString(std::string str, int key);
    static std::string decodeBase64(std::string str);
    static std::string encodeBase64(std::string str);
    static std::string decodeGJLevel(std::string str);
    static std::string encodeGJLevel(std::string str);

    // GJ compression
    static std::string decompressString(std::string str);
    static std::string compressString(std::string str);

    // Save data encoding
    static std::string encryptSaveData(std::string str);
    static std::string decryptSaveData(std::string str);

    // Anti-cheat ID generation
    static int generateLevelID(int id);
    static int generateUserID(int id);
    static bool verifyLevelID(int id);
    static bool verifyUserID(int id);

    // URL encoding
    static std::string urlEncode(std::string str);
    static std::string urlDecode(std::string str);

    // Parsing helpers
    static int parseInt(std::string str, int defaultVal = 0);
    static float parseFloat(std::string str, float defaultVal = 0.0f);
    static bool parseBool(std::string str, bool defaultVal = false);
};

#endif // HIEUDASH_ROBTOP_H_
