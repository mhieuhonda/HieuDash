// ============================================================
// CCSAXParser.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef COCOS2D_CCSAXPARSER_H_
#define COCOS2D_CCSAXPARSER_H_

#include "cocos2d.h"

namespace cocos2d {

class CCSAXParser {
public:
    CCSAXParser();
    CCSAXParser();

    virtual ~CCSAXParser();
    virtual ~CCSAXParser();

    void endElement(void*, unsigned char const*);
    void textHandler(void*, unsigned char const*, int);
    void setDelegator(cocos2d::CCSAXDelegator*);
    void startElement(void*, unsigned char const*, unsigned char const**);
    void init(char const*);
    void parse(char const*);
    void parse(char const*, unsigned int);

};

} // namespace cocos2d

#endif // COCOS2D_CCSAXPARSER_H_
