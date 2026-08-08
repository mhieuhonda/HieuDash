// ============================================================
// XmlSaxHander.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_XMLSAXHANDER_H_
#define COCOS2D_XMLSAXHANDER_H_

#include "cocos2d.h"

namespace cocos2d {

class XmlSaxHander {
public:
    virtual ~XmlSaxHander();
    virtual ~XmlSaxHander();
    virtual ~XmlSaxHander();

    void VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*);
    void Visit(tinyxml2::XMLUnknown const&);
    void Visit(tinyxml2::XMLText const&);
    void VisitExit(tinyxml2::XMLElement const&);

};

} // namespace cocos2d

#endif // COCOS2D_XMLSAXHANDER_H_
