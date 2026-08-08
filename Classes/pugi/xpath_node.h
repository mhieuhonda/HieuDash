// ============================================================
// xpath_node.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef PUGI_XPATH_NODE_H_
#define PUGI_XPATH_NODE_H_

namespace pugi {

class xpath_node {
public:
    xpath_node(pugi::xml_attribute const&, pugi::xml_node const&);
    xpath_node(pugi::xml_node const&);
    xpath_node();
    xpath_node(pugi::xml_attribute const&, pugi::xml_node const&);
    xpath_node(pugi::xml_node const&);
    xpath_node();

    void node()) const;
    void parent()) const;
    void attribute()) const;

    // Operators
    operator void (*)(pugi::xpath_node***)() const;
    operator==(pugi::xpath_node const&) const;
    operator!=(pugi::xpath_node const&) const;
    operator!() const;

};

} // namespace pugi

#endif // PUGI_XPATH_NODE_H_
