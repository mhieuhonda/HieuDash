// ============================================================
// CCTextureAtlas.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCTEXTUREATLAS_H_
#define COCOS2D_CCTEXTUREATLAS_H_

#include "cocos2d.h"

namespace cocos2d {

class CCTextureAtlas {
public:
    CCTextureAtlas();
    CCTextureAtlas();

    virtual ~CCTextureAtlas();
    virtual ~CCTextureAtlas();
    virtual ~CCTextureAtlas();

    void getTexture();
    void insertQuad(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int);
    void mapBuffers();
    void setTexture(cocos2d::CCTexture2D*);
    void updateQuad(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int);
    void description();
    void getCapacity();
    void insertQuads(cocos2d::_ccV3F_C4B_T2F_Quad*, unsigned int, unsigned int);
    void initWithFile(char const*, unsigned int);
    void setupIndices();
    void getTotalQuads();
    void removeAllQuads();
    void resizeCapacity(unsigned int);
    void initWithTexture(cocos2d::CCTexture2D*, unsigned int);
    void createWithTexture(cocos2d::CCTexture2D*, unsigned int);
    void drawNumberOfQuads(unsigned int);
    void drawNumberOfQuads(unsigned int, unsigned int);
    void removeQuadAtIndex(unsigned int);
    void moveQuadsFromIndex(unsigned int, unsigned int);
    void moveQuadsFromIndex(unsigned int, unsigned int, unsigned int);
    void removeQuadsAtIndex(unsigned int, unsigned int);
    void insertQuadFromIndex(unsigned int, unsigned int);
    void increaseTotalQuadsWith(unsigned int);
    void listenBackToForeground(cocos2d::CCObject*);
    void fillWithEmptyQuadsFromIndex(unsigned int, unsigned int);
    void create(char const*, unsigned int);
    void getQuads();
    void setQuads(cocos2d::_ccV3F_C4B_T2F_Quad*);
    void setupVBO();
    void drawQuads();

};

} // namespace cocos2d

#endif // COCOS2D_CCTEXTUREATLAS_H_
