// ============================================================
// XMLDocument.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TINYXML2_XMLDOCUMENT_H_
#define TINYXML2_XMLDOCUMENT_H_

namespace tinyxml2 {

class XMLDocument {
public:
    XMLDocument(bool, tinyxml2::Whitespace);
    XMLDocument(bool, tinyxml2::Whitespace);

    virtual ~XMLDocument();
    virtual ~XMLDocument();
    virtual ~XMLDocument();

    void NewComment(char const*);
    void NewElement(char const*);
    void NewUnknown(char const*);
    void ToDocument();
    void InitDocument();
    void NewDeclaration(char const*);
    void Parse(char const*, unsigned long);
    void Print(tinyxml2::XMLPrinter*);
    void NewText(char const*);
    void Identify(char*, tinyxml2::XMLNode**);
    void LoadFile(__sFILE*);
    void LoadFile(char const*);
    void SaveFile(__sFILE*, bool);
    void SaveFile(char const*, bool);
    void SetError(tinyxml2::XMLError, char const*, char const*);
    void PrintError()) const;
    void ToDocument()) const;
    void ShallowClone(tinyxml2::XMLDocument*)) const;
    void ShallowEqual(tinyxml2::XMLNode const*)) const;
    void Accept(tinyxml2::XMLVisitor*)) const;

};

} // namespace tinyxml2

#endif // TINYXML2_XMLDOCUMENT_H_
