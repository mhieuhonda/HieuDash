// ============================================================
// CCUserDefault.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCUSERDEFAULT_H_
#define COCOS2D_CCUSERDEFAULT_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCUserDefault {
public:
    CCUserDefault();
    CCUserDefault();

    virtual ~CCUserDefault();
    virtual ~CCUserDefault();

    void createXMLFile();
    void getBoolForKey(char const*);
    void getBoolForKey(char const*, bool);
    void setBoolForKey(char const*, bool);
    void getFloatForKey(char const*);
    void getFloatForKey(char const*, float);
    void getXMLFilePath();
    void isXMLFileExist();
    void setFloatForKey(char const*, float);
    void getDoubleForKey(char const*);
    void getDoubleForKey(char const*, double);
    void getStringForKey(char const*);
    void getStringForKey(char const*, std::string const&);
    void initXMLFilePath();
    void setDoubleForKey(char const*, double);
    void setStringForKey(char const*, std::string const&);
    void getIntegerForKey(char const*);
    void getIntegerForKey(char const*, int);
    void setIntegerForKey(char const*, int);
    void sharedUserDefault();
    void purgeSharedUserDefault();
    void flush();

protected:
    std::string m_boolForKey;
    std::string m_doubleForKey;
    std::string m_floatForKey;
    std::string m_integerForKey;
    std::string m_stringForKey;

};

} // namespace cocos2d

#endif // COCOS2D_CCUSERDEFAULT_H_
