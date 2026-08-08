// ============================================================
// GJChallengeItem.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef GJCHALLENGEITEM_H_
#define GJCHALLENGEITEM_H_

#include <string>

class GJChallengeItem {
public:
    virtual ~GJChallengeItem();
    virtual ~GJChallengeItem();
    virtual ~GJChallengeItem();

    void dataLoaded(DS_Dictionary*);
    void incrementCount(int);
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void createFromString(std::string);
    void init(GJChallengeType, int, int, int, std::string);
    void create(GJChallengeType, int, int, int, std::string);
    void create();
    void canEncode();

};

#endif // GJCHALLENGEITEM_H_
