
#ifndef GJOBJECTDECODER_H_
#define GJOBJECTDECODER_H_

class GJObjectDecoder {
public:
    virtual ~GJObjectDecoder();

    void sharedDecoder();
    void getDecodedObject(int, DS_Dictionary*);
    void init();

};

#endif // GJOBJECTDECODER_H_
