// ============================================================
// XMLNode.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TINYXML2_XMLNODE_H_
#define TINYXML2_XMLNODE_H_

namespace tinyxml2 {

class XMLNode {
public:
    XMLNode(tinyxml2::XMLDocument*);
    XMLNode(tinyxml2::XMLDocument*);

    virtual ~XMLNode();
    virtual ~XMLNode();
    virtual ~XMLNode();

    void ToDocument();
    void DeleteChild(tinyxml2::XMLNode*);
    void ToDeclaration();
    void DeleteChildren();
    void InsertEndChild(tinyxml2::XMLNode*);
    void InsertAfterChild(tinyxml2::XMLNode*, tinyxml2::XMLNode*);
    void InsertFirstChild(tinyxml2::XMLNode*);
    void ToText();
    void Unlink(tinyxml2::XMLNode*);
    void SetValue(char const*, bool);
    void ParseDeep(char*, tinyxml2::StrPair*);
    void ToComment();
    void ToElement();
    void ToUnknown();
    void ToDocument()) const;
    void ToDeclaration()) const;
    void LastChildElement(char const*)) const;
    void FirstChildElement(char const*)) const;
    void NextSiblingElement(char const*)) const;
    void PreviousSiblingElement(char const*)) const;
    void ToText()) const;
    void ToComment()) const;
    void ToElement()) const;
    void ToUnknown()) const;

};

} // namespace tinyxml2

#endif // TINYXML2_XMLNODE_H_
