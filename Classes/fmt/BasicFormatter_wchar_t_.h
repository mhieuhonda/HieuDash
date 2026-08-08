// ============================================================
// BasicFormatter_wchar_t_.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef FMT_BASICFORMATTER_WCHAR_T__H_
#define FMT_BASICFORMATTER_WCHAR_T__H_

namespace fmt {

class BasicFormatter<wchar_t> {
public:
    void Format(fmt::BasicStringRef<wchar_t>, fmt::ArgList const&);
    void format(wchar_t const*, fmt::internal::Arg const&);
    void CheckSign(wchar_t const*&, fmt::internal::Arg const&);

};

} // namespace fmt

#endif // FMT_BASICFORMATTER_WCHAR_T__H_
