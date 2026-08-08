// ============================================================
// xml_attribute_iterator.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef PUGI_XML_ATTRIBUTE_ITERATOR_H_
#define PUGI_XML_ATTRIBUTE_ITERATOR_H_

namespace pugi {

class xml_attribute_iterator {
public:
    xml_attribute_iterator(pugi::xml_attribute_struct*, pugi::xml_node_struct*);
    xml_attribute_iterator(pugi::xml_attribute const&, pugi::xml_node const&);
    xml_attribute_iterator();
    xml_attribute_iterator(pugi::xml_attribute_struct*, pugi::xml_node_struct*);
    xml_attribute_iterator(pugi::xml_attribute const&, pugi::xml_node const&);
    xml_attribute_iterator();


    // Operators
    operator--(int);
    operator--();
    operator++(int);
    operator++();
    operator*() const;
    operator==(pugi::xml_attribute_iterator const&) const;
    operator!=(pugi::xml_attribute_iterator const&) const;
    operator->() const;

};

} // namespace pugi

#endif // PUGI_XML_ATTRIBUTE_ITERATOR_H_
