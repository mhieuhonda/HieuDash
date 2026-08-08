// ============================================================
// CCTexturePVR.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTEXTUREPVR_H_
#define COCOS2D_CCTEXTUREPVR_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTexturePVR {
public:
    CCTexturePVR();
    CCTexturePVR();

    virtual ~CCTexturePVR();
    virtual ~CCTexturePVR();
    virtual ~CCTexturePVR();

    void createGLTexture();
    void unpackPVRv2Data(unsigned char*, unsigned int);
    void unpackPVRv3Data(unsigned char*, unsigned int);
    void initWithContentsOfFile(char const*);
    void create(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCTEXTUREPVR_H_
