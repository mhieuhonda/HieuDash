// ============================================================
// CCArrayForObjectSorting.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_EXTENSION_CCARRAYFOROBJECTSORTING_H_
#define COCOS2D_EXTENSION_CCARRAYFOROBJECTSORTING_H_

#include "cocos2d.h"

namespace cocos2d {
namespace extension {

class CCArrayForObjectSorting {
public:
    virtual ~CCArrayForObjectSorting();
    virtual ~CCArrayForObjectSorting();
    virtual ~CCArrayForObjectSorting();

    void insertSortedObject(cocos2d::extension::CCSortableObject*);
    void objectWithObjectID(unsigned int);
    void removeSortedObject(cocos2d::extension::CCSortableObject*);
    void indexOfSortedObject(cocos2d::extension::CCSortableObject*);
    void setObjectID_ofSortedObject(unsigned int, cocos2d::extension::CCSortableObject*);

protected:
    int m_objectID_ofSortedObject;

};

} // namespace extension
} // namespace cocos2d

#endif // COCOS2D_EXTENSION_CCARRAYFOROBJECTSORTING_H_
