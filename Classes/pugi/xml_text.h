// ============================================================
// xml_text.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef PUGI_XML_TEXT_H_
#define PUGI_XML_TEXT_H_

namespace pugi {

class xml_text {
public:
    xml_text(pugi::xml_node_struct*);
    xml_text();
    xml_text(pugi::xml_node_struct*);
    xml_text();

    void set(char const*);
    void set(bool);
    void set(double);
    void set(int);
    void set(unsigned int);
    void set(long long);
    void set(unsigned long long);
    void _data_new();
    void get()) const;
    void data()) const;
    void _data()) const;
    void empty()) const;
    void as_int(int)) const;
    void as_bool(bool)) const;
    void as_uint(unsigned int)) const;
    void as_float(float)) const;
    void as_llong(long long)) const;
    void as_double(double)) const;
    void as_string(char const*)) const;
    void as_ullong(unsigned long long)) const;

    // Operators
    operator=(char const*);
    operator=(bool);
    operator=(double);
    operator=(int);
    operator=(unsigned int);
    operator=(long long);
    operator=(unsigned long long);
    operator void (*)(pugi::xml_text***)() const;
    operator!() const;

};

} // namespace pugi

#endif // PUGI_XML_TEXT_H_
