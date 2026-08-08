// ============================================================
// llvm.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef LLVM_H_
#define LLVM_H_

#include <string>

class llvm {
public:
    void ConvertUTF8toWide(unsigned int, std::string const&, char*&, unsigned char const*&);
    void hasUTF16ByteOrderMark(char const*, unsigned long);
    void ConvertCodePointToUTF8(unsigned int, char*&);
    void convertUTF16ToUTF8String(std::basic_string<unsigned short, std::char_traits<unsigned short>, std::allocator<unsigned short> > const&, std::string&);

};

#endif // LLVM_H_
