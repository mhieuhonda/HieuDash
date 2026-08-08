
#ifndef GJREWARDOBJECT_H_
#define GJREWARDOBJECT_H_

class GJRewardObject {
public:
    virtual ~GJRewardObject();

    void dataLoaded(DS_Dictionary*);
    bool isSpecialType();
    GJRewardObject* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    GJRewardObject* createItemUnlock(UnlockType, int);
    void init(SpecialRewardItem, int, int);
    void create(SpecialRewardItem, int, int);
    void create();
    bool canEncode();

};

#endif // GJREWARDOBJECT_H_
