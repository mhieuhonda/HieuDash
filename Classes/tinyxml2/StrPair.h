// ============================================================
// StrPair.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TINYXML2_STRPAIR_H_
#define TINYXML2_STRPAIR_H_

namespace tinyxml2 {

class StrPair {
public:
    virtual ~StrPair();
    virtual ~StrPair();

    void CollapseWhitespace();
    void Reset();
    void GetStr();
    void SetStr(char const*, int);
    void ParseName(char*);
    void ParseText(char*, char const*, int);

};

} // namespace tinyxml2

#endif // TINYXML2_STRPAIR_H_
