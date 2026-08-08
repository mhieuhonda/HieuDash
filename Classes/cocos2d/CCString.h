// ============================================================
// CCString.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSTRING_H_
#define COCOS2D_CCSTRING_H_

#include "cocos2d.h"
#include <string>

namespace cocos2d {

class CCString {
public:
    CCString(char const*);
    CCString(cocos2d::CCString const&);
    CCString(std::string const&);
    CCString();
    CCString(char const*);
    CCString(cocos2d::CCString const&);
    CCString(std::string const&);
    CCString();

    virtual ~CCString();
    virtual ~CCString();
    virtual ~CCString();

    void copyWithZone(cocos2d::CCZone*);
    void acceptVisitor(cocos2d::CCDataVisitor&);
    void createWithData(unsigned char const*, unsigned long);
    void initWithFormat(char const*, ...);
    void createWithFormat(char const*, ...);
    void initWithFormatAndValist(char const*, std::__va_list);
    void createWithContentsOfFile(char const*);
    void create(std::string const&);
    void isEqual(cocos2d::CCObject const*);
    void floatValue()) const;
    void getCString()) const;
    void doubleValue()) const;
    void length()) const;
    void compare(char const*)) const;
    void intValue()) const;
    void boolValue()) const;
    void uintValue()) const;

    // Operators
    operator=(cocos2d::CCString const&);

};

} // namespace cocos2d

#endif // COCOS2D_CCSTRING_H_
