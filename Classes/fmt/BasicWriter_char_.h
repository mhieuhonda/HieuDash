// ============================================================
// BasicWriter_char_.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FMT_BASICWRITER_CHAR__H_
#define FMT_BASICWRITER_CHAR__H_

namespace fmt {

class BasicWriter<char> {
public:
    void FillPadding(char*, unsigned int, unsigned long, wchar_t);

    // Operators
    operator<<(fmt::BasicStringRef<char>);

};

} // namespace fmt

#endif // FMT_BASICWRITER_CHAR__H_
