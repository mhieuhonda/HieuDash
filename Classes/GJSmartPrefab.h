
#ifndef GJSMARTPREFAB_H_
#define GJSMARTPREFAB_H_

class GJSmartPrefab : public cocos2d::CCNode {
public:
    virtual ~GJSmartPrefab();

    void dataLoaded(DS_Dictionary*);
    GJSmartPrefab* createWithCoder(DS_Dictionary*);
    void encodeWithCoder(DS_Dictionary*);
    bool init();
    void create();
    bool canEncode();

};

#endif // GJSMARTPREFAB_H_
