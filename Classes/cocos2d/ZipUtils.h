// ============================================================
// ZipUtils.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_ZIPUTILS_H_
#define COCOS2D_ZIPUTILS_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class ZipUtils {
public:
    void compressString(std::string const&, bool, int);
    void base64DecodeEnc(std::string const&, std::string);
    void base64EncodeEnc(std::string const&, std::string);
    void base64URLDecode(std::string const&);
    void base64URLEncode(std::string const&);
    void ccDeflateMemory(unsigned char*, unsigned int, unsigned char**);
    void ccInflateMemory(unsigned char*, unsigned int, unsigned char**);
    void ccInflateCCZFile(char const*, unsigned char**);
    void decompressString(std::string const&, bool, int);
    void ccInflateGZipFile(char const*, unsigned char**);
    void decompressString2(unsigned char*, bool, int, int);
    void ccSetPvrEncryptionKey(unsigned int, unsigned int, unsigned int, unsigned int);
    void ccInflateMemoryWithHint(unsigned char*, unsigned int, unsigned char**, unsigned int*, unsigned int);
    void ccInflateMemoryWithHint(unsigned char*, unsigned int, unsigned char**, unsigned int);
    void ccSetPvrEncryptionKeyPart(int, unsigned int);
    void hexToChar(std::string const&);
    void urlDecode(std::string const&);

};

} // namespace cocos2d

#endif // COCOS2D_ZIPUTILS_H_
