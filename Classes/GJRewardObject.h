// ============================================================
// GJRewardObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef GJREWARDOBJECT_H_
#define GJREWARDOBJECT_H_

class GJRewardObject {
public:
    virtual ~GJRewardObject();
    virtual ~GJRewardObject();
    virtual ~GJRewardObject();

    void dataLoaded(DS_Dictionary*);
    void isSpecialType();
    void createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    void createItemUnlock(UnlockType, int);
    void init(SpecialRewardItem, int, int);
    void create(SpecialRewardItem, int, int);
    void create();
    void canEncode();

};

#endif // GJREWARDOBJECT_H_
