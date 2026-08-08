// ============================================================
// CCDataVisitor.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCDATAVISITOR_H_
#define COCOS2D_CCDATAVISITOR_H_

#include "cocos2d.h"

namespace cocos2d {

class CCDataVisitor {
public:
    void visit(cocos2d::CCDictionary const*);
    void visit(cocos2d::CCSet const*);
    void visit(cocos2d::CCBool const*);
    void visit(cocos2d::CCArray const*);
    void visit(cocos2d::CCFloat const*);
    void visit(cocos2d::CCDouble const*);
    void visit(cocos2d::CCString const*);
    void visit(cocos2d::CCInteger const*);

};

} // namespace cocos2d

#endif // COCOS2D_CCDATAVISITOR_H_
