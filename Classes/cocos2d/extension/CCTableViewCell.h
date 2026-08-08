// ============================================================
// CCTableViewCell.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCTABLEVIEWCELL_H_
#define COCOS2D_EXTENSION_CCTABLEVIEWCELL_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCTableViewCell {
public:
    virtual ~CCTableViewCell();
    virtual ~CCTableViewCell();
    virtual ~CCTableViewCell();

    void getObjectID();
    void setObjectID(unsigned int);
    void reset();
    void getIdx();
    void setIdx(unsigned int);

protected:
    int m_objectID;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCTABLEVIEWCELL_H_
