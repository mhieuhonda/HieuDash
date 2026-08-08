// ============================================================
// XMLElement.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TINYXML2_XMLELEMENT_H_
#define TINYXML2_XMLELEMENT_H_

namespace tinyxml2 {

class XMLElement {
public:
    XMLElement(tinyxml2::XMLDocument*);
    XMLElement(tinyxml2::XMLDocument*);

    virtual ~XMLElement();
    virtual ~XMLElement();
    virtual ~XMLElement();

    void FindAttribute(char const*);
    void DeleteAttribute(char const*);
    void ParseAttributes(char*);
    void FindOrCreateAttribute(char const*);
    void ParseDeep(char*, tinyxml2::StrPair*);
    void ToElement();
    void QueryIntText(int*)) const;
    void ShallowClone(tinyxml2::XMLDocument*)) const;
    void ShallowEqual(tinyxml2::XMLNode const*)) const;
    void FindAttribute(char const*)) const;
    void QueryBoolText(bool*)) const;
    void QueryFloatText(float*)) const;
    void QueryDoubleText(double*)) const;
    void QueryUnsignedText(unsigned int*)) const;
    void Accept(tinyxml2::XMLVisitor*)) const;
    void GetText()) const;
    void Attribute(char const*, char const*)) const;
    void ToElement()) const;

};

} // namespace tinyxml2

#endif // TINYXML2_XMLELEMENT_H_
