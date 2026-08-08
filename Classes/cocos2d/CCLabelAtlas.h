// ============================================================
// CCLabelAtlas.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCLABELATLAS_H_
#define COCOS2D_CCLABELATLAS_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLabelAtlas {
public:
    virtual ~CCLabelAtlas();
    virtual ~CCLabelAtlas();
    virtual ~CCLabelAtlas();

    void initWithString(char const*, cocos2d::CCTexture2D*, unsigned int, unsigned int, unsigned int);
    void initWithString(char const*, char const*);
    void initWithString(char const*, char const*, unsigned int, unsigned int, unsigned int);
    void updateAtlasValues();
    void create(char const*, char const*);
    void create(char const*, char const*, unsigned int, unsigned int, unsigned int);
    void getString();
    void setString(char const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCLABELATLAS_H_
