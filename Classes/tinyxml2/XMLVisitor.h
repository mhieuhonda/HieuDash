// ============================================================
// XMLVisitor.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TINYXML2_XMLVISITOR_H_
#define TINYXML2_XMLVISITOR_H_

namespace tinyxml2 {

class XMLVisitor {
public:
    virtual ~XMLVisitor();
    virtual ~XMLVisitor();
    virtual ~XMLVisitor();

    void VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*);
    void VisitEnter(tinyxml2::XMLDocument const&);
    void Visit(tinyxml2::XMLComment const&);
    void Visit(tinyxml2::XMLUnknown const&);
    void Visit(tinyxml2::XMLDeclaration const&);
    void Visit(tinyxml2::XMLText const&);
    void VisitExit(tinyxml2::XMLElement const&);
    void VisitExit(tinyxml2::XMLDocument const&);

};

} // namespace tinyxml2

#endif // TINYXML2_XMLVISITOR_H_
