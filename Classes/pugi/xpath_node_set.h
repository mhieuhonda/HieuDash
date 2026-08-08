// ============================================================
// xpath_node_set.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef PUGI_XPATH_NODE_SET_H_
#define PUGI_XPATH_NODE_SET_H_

namespace pugi {

class xpath_node_set {
public:
    xpath_node_set(pugi::xpath_node const*, pugi::xpath_node const*, pugi::xpath_node_set::type_t);
    xpath_node_set(pugi::xpath_node_set const&);
    xpath_node_set();
    xpath_node_set(pugi::xpath_node const*, pugi::xpath_node const*, pugi::xpath_node_set::type_t);
    xpath_node_set(pugi::xpath_node_set const&);
    xpath_node_set();

    virtual ~xpath_node_set();
    virtual ~xpath_node_set();

    void sort(bool);
    void _assign(pugi::xpath_node const*, pugi::xpath_node const*);
    void end()) const;
    void size()) const;
    void type()) const;
    void begin()) const;
    void empty()) const;
    void first()) const;

    // Operators
    operator=(pugi::xpath_node_set const&);
    operator[](unsigned long) const;

};

} // namespace pugi

#endif // PUGI_XPATH_NODE_SET_H_
