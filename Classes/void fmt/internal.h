// ============================================================
// internal.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef VOID FMT_INTERNAL_H_
#define VOID FMT_INTERNAL_H_

namespace void fmt {

class internal {
public:
    void FormatDecimal<unsigned int, char>(char*, unsigned int, unsigned int);
    void FormatDecimal<unsigned int, wchar_t>(wchar_t*, unsigned int, unsigned int);
    void FormatDecimal<unsigned long, char>(char*, unsigned long, unsigned int);
    void FormatDecimal<unsigned long, wchar_t>(wchar_t*, unsigned long, unsigned int);

};

} // namespace void fmt

#endif // VOID FMT_INTERNAL_H_
