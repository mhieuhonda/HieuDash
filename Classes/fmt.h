
#ifndef FMT_H_
#define FMT_H_

class fmt {
public:
    void print_colored(fmt::Color, fmt::BasicStringRef<char>, fmt::ArgList const&);
    void ReportSystemError(int, fmt::BasicStringRef<char>);
    void print(fmt::BasicStringRef<char>, fmt::ArgList const&);
    void print(__sFILE*, fmt::BasicStringRef<char>, fmt::ArgList const&);
    void print(std::ostream&, fmt::BasicStringRef<char>, fmt::ArgList const&);
    void format(fmt::BasicStringRef<char>, fmt::ArgList const&);
    void printf(fmt::BasicStringRef<char>, fmt::ArgList const&);

};

#endif // FMT_H_
