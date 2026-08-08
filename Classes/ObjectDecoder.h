
#ifndef OBJECTDECODER_H_
#define OBJECTDECODER_H_

class ObjectDecoder : public cocos2d::CCNode {
public:
    virtual ~ObjectDecoder();

    void sharedDecoder();
    void getDecodedObject(int, DS_Dictionary*);
    bool init();

};

#endif // OBJECTDECODER_H_
