// ============================================================
// XMLAttribute.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TINYXML2_XMLATTRIBUTE_H_
#define TINYXML2_XMLATTRIBUTE_H_

namespace tinyxml2 {

class XMLAttribute {
public:
    virtual ~XMLAttribute();
    virtual ~XMLAttribute();
    virtual ~XMLAttribute();

    void SetAttribute(char const*);
    void SetAttribute(bool);
    void SetAttribute(double);
    void SetAttribute(float);
    void SetAttribute(int);
    void SetAttribute(unsigned int);
    void SetName(char const*);
    void ParseDeep(char*, bool);
    void QueryIntValue(int*)) const;
    void QueryBoolValue(bool*)) const;
    void QueryFloatValue(float*)) const;
    void QueryDoubleValue(double*)) const;
    void QueryUnsignedValue(unsigned int*)) const;

};

} // namespace tinyxml2

#endif // TINYXML2_XMLATTRIBUTE_H_
