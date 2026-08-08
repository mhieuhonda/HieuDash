// ============================================================
// xpath_variable.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef PUGI_XPATH_VARIABLE_H_
#define PUGI_XPATH_VARIABLE_H_

namespace pugi {

class xpath_variable {
public:
    xpath_variable();
    xpath_variable();

    void set(char const*);
    void set(pugi::xpath_node_set const&);
    void set(bool);
    void set(double);
    void get_number()) const;
    void get_string()) const;
    void get_boolean()) const;
    void get_node_set()) const;
    void name()) const;
    void type()) const;

};

} // namespace pugi

#endif // PUGI_XPATH_VARIABLE_H_
