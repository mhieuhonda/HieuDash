// ============================================================
// XMLUtil.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef TINYXML2_XMLUTIL_H_
#define TINYXML2_XMLUTIL_H_

namespace tinyxml2 {

class XMLUtil {
public:
    void ToUnsigned(char const*, unsigned int*);
    void GetCharacterRef(char const*, char*, int*);
    void ConvertUTF32ToUTF8(unsigned long, char*, int*);
    void ToInt(char const*, int*);
    void ToStr(bool, char*, int);
    void ToStr(double, char*, int);
    void ToStr(float, char*, int);
    void ToStr(int, char*, int);
    void ToStr(unsigned int, char*, int);
    void ToBool(char const*, bool*);
    void ReadBOM(char const*, bool*);
    void ToFloat(char const*, float*);
    void ToDouble(char const*, double*);

};

} // namespace tinyxml2

#endif // TINYXML2_XMLUTIL_H_
