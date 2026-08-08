// ============================================================
// SFXInfoObject.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef SFXINFOOBJECT_H_
#define SFXINFOOBJECT_H_

#include <string>

class SFXInfoObject {
public:
    virtual ~SFXInfoObject();
    virtual ~SFXInfoObject();
    virtual ~SFXInfoObject();

    void getLowerCaseName();
    void init(int, std::string, int, int, int);
    void create(int, std::string, int, int, int);

protected:
    std::string m_lowerCaseName;

};

#endif // SFXINFOOBJECT_H_
