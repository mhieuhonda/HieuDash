
#ifndef SECRETNUMBERLAYER_H_
#define SECRETNUMBERLAYER_H_

class SecretNumberLayer : public cocos2d::CCLayer {
public:
    virtual ~SecretNumberLayer();

    void playNumberEffect(int);
    bool init();
    void create();

};

#endif // SECRETNUMBERLAYER_H_
