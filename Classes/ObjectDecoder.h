
#ifndef OBJECTDECODER_H_
#define OBJECTDECODER_H_

class ObjectDecoder {
public:
    virtual ~ObjectDecoder();

    void sharedDecoder();
    void getDecodedObject(int, DS_Dictionary*);
    void init();

};

#endif // OBJECTDECODER_H_
