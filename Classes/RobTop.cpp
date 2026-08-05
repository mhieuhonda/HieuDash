#include "RobTop.h"
#include <sstream>
#include <cstdlib>

std::vector<std::string> RobTop::splitString(std::string str, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string item;
    while (std::getline(ss, item, delimiter)) {
        result.push_back(item);
    }
    return result;
}

std::string RobTop::joinString(std::vector<std::string> vec, char delimiter) {
    std::string result;
    for (size_t i = 0; i < vec.size(); i++) {
        if (i > 0) result += delimiter;
        result += vec[i];
    }
    return result;
}

std::string RobTop::xorString(std::string str, int key) {
    std::string result = str;
    for (size_t i = 0; i < result.size(); i++) {
        result[i] ^= key;
    }
    return result;
}

std::string RobTop::decodeBase64(std::string str) {
    // stub - needs base64 implementation
    return str;
}

std::string RobTop::encodeBase64(std::string str) {
    // stub - needs base64 implementation
    return str;
}

std::string RobTop::decodeGJLevel(std::string str) {
    return decompressString(xorString(decodeBase64(str), Globals::LEVEL_XOR_KEY));
}

std::string RobTop::encodeGJLevel(std::string str) {
    return encodeBase64(xorString(compressString(str), Globals::LEVEL_XOR_KEY));
}

std::string RobTop::decompressString(std::string str) {
    // stub - needs zlib implementation
    return str;
}

std::string RobTop::compressString(std::string str) {
    // stub - needs zlib implementation
    return str;
}

std::string RobTop::encryptSaveData(std::string str) {
    return encodeBase64(xorString(str, Globals::SAVE_XOR_KEY));
}

std::string RobTop::decryptSaveData(std::string str) {
    return xorString(decodeBase64(str), Globals::SAVE_XOR_KEY);
}

int RobTop::generateLevelID(int id) {
    return id * Globals::LEVEL_ID_SEED + Globals::LEVEL_ID_RAND;
}

int RobTop::generateUserID(int id) {
    return id * Globals::USER_ID_SEED + Globals::USER_ID_RAND;
}

bool RobTop::verifyLevelID(int id) {
    return (id - Globals::LEVEL_ID_RAND) % Globals::LEVEL_ID_SEED == 0;
}

bool RobTop::verifyUserID(int id) {
    return (id - Globals::USER_ID_RAND) % Globals::USER_ID_SEED == 0;
}

std::string RobTop::urlEncode(std::string str) {
    // stub
    return str;
}

std::string RobTop::urlDecode(std::string str) {
    // stub
    return str;
}

int RobTop::parseInt(std::string str, int defaultVal) {
    if (str.empty()) return defaultVal;
    return atoi(str.c_str());
}

float RobTop::parseFloat(std::string str, float defaultVal) {
    if (str.empty()) return defaultVal;
    return (float)atof(str.c_str());
}

bool RobTop::parseBool(std::string str, bool defaultVal) {
    if (str.empty()) return defaultVal;
    return str == "1" || str == "true";
}
