// ============================================================
// PrintfParser_char_.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef FMT_INTERNAL_PRINTFPARSER_CHAR__H_
#define FMT_INTERNAL_PRINTFPARSER_CHAR__H_

namespace fmt {
namespace internal {

class PrintfParser<char> {
public:
    void HandleArgIndex(unsigned int, char const*&);
    void Format(fmt::BasicWriter<char>&, fmt::BasicStringRef<char>, fmt::ArgList const&);

};

} // namespace internal
} // namespace fmt

#endif // FMT_INTERNAL_PRINTFPARSER_CHAR__H_
