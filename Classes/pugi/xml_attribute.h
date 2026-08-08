// ============================================================
// xml_attribute.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PUGI_XML_ATTRIBUTE_H_
#define PUGI_XML_ATTRIBUTE_H_

namespace pugi {

class xml_attribute {
public:
    xml_attribute(pugi::xml_attribute_struct*);
    xml_attribute();
    xml_attribute(pugi::xml_attribute_struct*);
    xml_attribute();

    void set_name(char const*);
    void set_value(char const*);
    void set_value(bool);
    void set_value(double);
    void set_value(int);
    void set_value(unsigned int);
    void set_value(long long);
    void set_value(unsigned long long);
    void hash_value()) const;
    void next_attribute()) const;
    void internal_object()) const;
    void previous_attribute()) const;
    void name()) const;
    void empty()) const;
    void value()) const;
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
    operator void (*)(pugi::xml_attribute***)() const;
    operator==(pugi::xml_attribute const&) const;
    operator>=(pugi::xml_attribute const&) const;
    operator>(pugi::xml_attribute const&) const;
    operator<=(pugi::xml_attribute const&) const;
    operator<(pugi::xml_attribute const&) const;
    operator!=(pugi::xml_attribute const&) const;
    operator!() const;

};

} // namespace pugi

#endif // PUGI_XML_ATTRIBUTE_H_
