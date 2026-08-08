// ============================================================
// xml_named_node_iterator.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PUGI_XML_NAMED_NODE_ITERATOR_H_
#define PUGI_XML_NAMED_NODE_ITERATOR_H_

namespace pugi {

class xml_named_node_iterator {
public:
    xml_named_node_iterator(pugi::xml_node_struct*, pugi::xml_node_struct*, char const*);
    xml_named_node_iterator(pugi::xml_node const&, char const*);
    xml_named_node_iterator();
    xml_named_node_iterator(pugi::xml_node_struct*, pugi::xml_node_struct*, char const*);
    xml_named_node_iterator(pugi::xml_node const&, char const*);
    xml_named_node_iterator();


    // Operators
    operator--(int);
    operator--();
    operator++(int);
    operator++();
    operator*() const;
    operator==(pugi::xml_named_node_iterator const&) const;
    operator!=(pugi::xml_named_node_iterator const&) const;
    operator->() const;

};

} // namespace pugi

#endif // PUGI_XML_NAMED_NODE_ITERATOR_H_
