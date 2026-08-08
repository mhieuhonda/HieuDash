// ============================================================
// BasicFormatter_char_.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef FMT_BASICFORMATTER_CHAR__H_
#define FMT_BASICFORMATTER_CHAR__H_

namespace fmt {

class BasicFormatter<char> {
public:
    void Format(fmt::BasicStringRef<char>, fmt::ArgList const&);
    void format(char const*, fmt::internal::Arg const&);
    void CheckSign(char const*&, fmt::internal::Arg const&);

};

} // namespace fmt

#endif // FMT_BASICFORMATTER_CHAR__H_
