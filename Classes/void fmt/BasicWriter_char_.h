// ============================================================
// BasicWriter_char_.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef VOID FMT_BASICWRITER_CHAR__H_
#define VOID FMT_BASICWRITER_CHAR__H_

namespace void fmt {

class BasicWriter<char> {
public:
    void FormatDouble<double>(double, fmt::FormatSpec const&);
    void FormatDouble<long double>(long double, fmt::FormatSpec const&);
    void write_str<char>(fmt::internal::StringValue<char> const&, fmt::FormatSpec const&);

};

} // namespace void fmt

#endif // VOID FMT_BASICWRITER_CHAR__H_
