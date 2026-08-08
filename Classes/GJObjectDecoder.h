
#ifndef GJOBJECTDECODER_H_
#define GJOBJECTDECODER_H_

class GJObjectDecoder : public cocos2d::CCNode {
public:
    virtual ~GJObjectDecoder();

    void sharedDecoder();
    void getDecodedObject(int, DS_Dictionary*);
    bool init();

};

#endif // GJOBJECTDECODER_H_
