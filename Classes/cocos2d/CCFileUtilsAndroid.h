// ============================================================
// CCFileUtilsAndroid.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef COCOS2D_CCFILEUTILSANDROID_H_
#define COCOS2D_CCFILEUTILSANDROID_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCFileUtilsAndroid {
public:
    CCFileUtilsAndroid();
    CCFileUtilsAndroid();

    virtual ~CCFileUtilsAndroid();
    virtual ~CCFileUtilsAndroid();
    virtual ~CCFileUtilsAndroid();

    void getFileData(char const*, char const*, unsigned long*);
    void isFileExist(std::string const&);
    void doGetFileData(char const*, char const*, unsigned long*, bool);
    void isAbsolutePath(std::string const&);
    void getWritablePath();
    void getFileDataForAsync(char const*, char const*, unsigned long*);
    void init();

};

} // namespace cocos2d

#endif // COCOS2D_CCFILEUTILSANDROID_H_
