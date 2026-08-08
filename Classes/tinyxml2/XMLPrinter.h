// ============================================================
// XMLPrinter.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TINYXML2_XMLPRINTER_H_
#define TINYXML2_XMLPRINTER_H_

namespace tinyxml2 {

class XMLPrinter {
public:
    XMLPrinter(__sFILE*, bool);
    XMLPrinter(__sFILE*, bool);

    virtual ~XMLPrinter();
    virtual ~XMLPrinter();
    virtual ~XMLPrinter();

    void PrintSpace(int);
    void PushHeader(bool, bool);
    void VisitEnter(tinyxml2::XMLElement const&, tinyxml2::XMLAttribute const*);
    void VisitEnter(tinyxml2::XMLDocument const&);
    void OpenElement(char const*);
    void PrintString(char const*, bool);
    void PushComment(char const*);
    void PushUnknown(char const*);
    void SealElement();
    void CloseElement();
    void PushAttribute(char const*, char const*);
    void PushAttribute(char const*, bool);
    void PushAttribute(char const*, double);
    void PushAttribute(char const*, int);
    void PushAttribute(char const*, unsigned int);
    void PushDeclaration(char const*);
    void Print(char const*, ...);
    void Visit(tinyxml2::XMLComment const&);
    void Visit(tinyxml2::XMLUnknown const&);
    void Visit(tinyxml2::XMLDeclaration const&);
    void Visit(tinyxml2::XMLText const&);
    void PushText(char const*, bool);
    void PushText(bool);
    void PushText(double);
    void PushText(float);
    void PushText(int);
    void PushText(unsigned int);
    void VisitExit(tinyxml2::XMLElement const&);
    void VisitExit(tinyxml2::XMLDocument const&);

};

} // namespace tinyxml2

#endif // TINYXML2_XMLPRINTER_H_
