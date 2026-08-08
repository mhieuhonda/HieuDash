// ============================================================
// PrintfParser_wchar_t_.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FMT_INTERNAL_PRINTFPARSER_WCHAR_T__H_
#define FMT_INTERNAL_PRINTFPARSER_WCHAR_T__H_

namespace fmt {
namespace internal {

class PrintfParser<wchar_t> {
public:
    void HandleArgIndex(unsigned int, char const*&);
    void Format(fmt::BasicWriter<wchar_t>&, fmt::BasicStringRef<wchar_t>, fmt::ArgList const&);

};

} // namespace internal
} // namespace fmt

#endif // FMT_INTERNAL_PRINTFPARSER_WCHAR_T__H_
