// ============================================================
// CCLayerMultiplex.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCLAYERMULTIPLEX_H_
#define COCOS2D_CCLAYERMULTIPLEX_H_

#include "cocos2d.h"

namespace cocos2d {

class CCLayerMultiplex {
public:
    CCLayerMultiplex();
    CCLayerMultiplex();

    virtual ~CCLayerMultiplex();
    virtual ~CCLayerMultiplex();
    virtual ~CCLayerMultiplex();

    void initWithArray(cocos2d::CCArray*);
    void initWithLayers(cocos2d::CCLayer*, std::__va_list);
    void createWithArray(cocos2d::CCArray*);
    void createWithLayer(cocos2d::CCLayer*);
    void switchToAndReleaseMe(unsigned int);
    void create(cocos2d::CCLayer*, ...);
    void create();
    void addLayer(cocos2d::CCLayer*);
    void switchTo(unsigned int);

};

} // namespace cocos2d

#endif // COCOS2D_CCLAYERMULTIPLEX_H_
