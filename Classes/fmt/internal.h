// ============================================================
// internal.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef FMT_INTERNAL_H_
#define FMT_INTERNAL_H_

namespace fmt {

class internal {
public:
    void SignBitNoInline(double);
    void ReportUnknownType(char, char const*);
    void FormatSystemErrorMessage(fmt::BasicWriter<char>&, int, fmt::BasicStringRef<char>);
    void StrError(int, char*&, unsigned long);

};

} // namespace fmt

#endif // FMT_INTERNAL_H_
