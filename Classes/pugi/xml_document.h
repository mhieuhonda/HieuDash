// ============================================================
// xml_document.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PUGI_XML_DOCUMENT_H_
#define PUGI_XML_DOCUMENT_H_

namespace pugi {

class xml_document {
public:
    xml_document();
    xml_document();

    virtual ~xml_document();
    virtual ~xml_document();

    void load_buffer(void const*, unsigned long, unsigned int, pugi::xml_encoding);
    void load_buffer_inplace(void*, unsigned long, unsigned int, pugi::xml_encoding);
    void load_buffer_inplace_own(void*, unsigned long, unsigned int, pugi::xml_encoding);
    void load(char const*, unsigned int);
    void load(std::istream&, unsigned int, pugi::xml_encoding);
    void load(std::basic_istream<wchar_t, std::char_traits<wchar_t> >&, unsigned int);
    void reset(pugi::xml_document const&);
    void reset();
    void create();
    void destroy();
    void load_file(char const*, unsigned int, pugi::xml_encoding);
    void load_file(wchar_t const*, unsigned int, pugi::xml_encoding);
    void save_string(char const*, unsigned int, pugi::xml_encoding)) const;
    void document_element()) const;
    void save(pugi::xml_writer&, char const*, unsigned int, pugi::xml_encoding)) const;
    void save(std::ostream&, char const*, unsigned int, pugi::xml_encoding)) const;
    void save(std::basic_ostream<wchar_t, std::char_traits<wchar_t> >&, char const*, unsigned int)) const;
    void save_file(char const*, char const*, unsigned int, pugi::xml_encoding)) const;
    void save_file(wchar_t const*, char const*, unsigned int, pugi::xml_encoding)) const;

};

} // namespace pugi

#endif // PUGI_XML_DOCUMENT_H_
