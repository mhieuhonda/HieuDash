// ============================================================
// BasicWriter_wchar_t_.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef VOID FMT_BASICWRITER_WCHAR_T__H_
#define VOID FMT_BASICWRITER_WCHAR_T__H_

namespace void fmt {

class BasicWriter<wchar_t> {
public:
    void FormatDouble<double>(double, fmt::FormatSpec const&);
    void FormatDouble<long double>(long double, fmt::FormatSpec const&);
    void write_str<char>(fmt::internal::StringValue<char> const&, fmt::FormatSpec const&);
    void write_str<wchar_t>(fmt::internal::StringValue<wchar_t> const&, fmt::FormatSpec const&);

};

} // namespace void fmt

#endif // VOID FMT_BASICWRITER_WCHAR_T__H_
