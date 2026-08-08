// ============================================================
// xml_node.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef PUGI_XML_NODE_H_
#define PUGI_XML_NODE_H_

namespace pugi {

class xml_node {
public:
    xml_node(pugi::xml_node_struct*);
    xml_node();
    xml_node(pugi::xml_node_struct*);
    xml_node();

    void append_copy(pugi::xml_attribute const&);
    void append_copy(pugi::xml_node const&);
    void append_child(pugi::xml_node_type);
    void append_child(char const*);
    void prepend_copy(pugi::xml_attribute const&);
    void prepend_copy(pugi::xml_node const&);
    void remove_child(char const*);
    void remove_child(pugi::xml_node const&);
    void append_buffer(void const*, unsigned long, unsigned int, pugi::xml_encoding);
    void prepend_child(pugi::xml_node_type);
    void prepend_child(char const*);
    void append_attribute(char const*);
    void remove_attribute(char const*);
    void remove_attribute(pugi::xml_attribute const&);
    void insert_copy_after(pugi::xml_attribute const&, pugi::xml_attribute const&);
    void insert_copy_after(pugi::xml_node const&, pugi::xml_node const&);
    void prepend_attribute(char const*);
    void insert_child_after(pugi::xml_node_type, pugi::xml_node const&);
    void insert_child_after(char const*, pugi::xml_node const&);
    void insert_copy_before(pugi::xml_attribute const&, pugi::xml_attribute const&);
    void insert_copy_before(pugi::xml_node const&, pugi::xml_node const&);
    void insert_child_before(pugi::xml_node_type, pugi::xml_node const&);
    void insert_child_before(char const*, pugi::xml_node const&);
    void insert_attribute_after(char const*, pugi::xml_attribute const&);
    void insert_attribute_before(char const*, pugi::xml_attribute const&);
    void set_name(char const*);
    void traverse(pugi::xml_tree_walker&);
    void set_value(char const*);
    void attributes()) const;
    void hash_value()) const;
    void last_child()) const;
    void child_value(char const*)) const;
    void child_value()) const;
    void first_child()) const;
    void next_sibling(char const*)) const;
    void next_sibling()) const;
    void offset_debug()) const;
    void select_nodes(char const*, pugi::xpath_variable_set*)) const;
    void select_nodes(pugi::xpath_query const&)) const;
    void attributes_end()) const;
    void last_attribute()) const;
    void first_attribute()) const;
    void internal_object()) const;
    void attributes_begin()) const;
    void previous_sibling(char const*)) const;
    void previous_sibling()) const;
    void select_single_node(char const*, pugi::xpath_variable_set*)) const;
    void select_single_node(pugi::xpath_query const&)) const;
    void first_element_by_path(char const*, char)) const;
    void find_child_by_attribute(char const*, char const*)) const;
    void find_child_by_attribute(char const*, char const*, char const*)) const;
    void end()) const;
    void name()) const;
    void path(char)) const;
    void root()) const;
    void text()) const;
    void type()) const;
    void begin()) const;
    void child(char const*)) const;
    void empty()) const;
    void print(pugi::xml_writer&, char const*, unsigned int, pugi::xml_encoding, unsigned int)) const;
    void print(std::ostream&, char const*, unsigned int, pugi::xml_encoding, unsigned int)) const;
    void print(std::basic_ostream<wchar_t, std::char_traits<wchar_t> >&, char const*, unsigned int, unsigned int)) const;
    void value()) const;
    void parent()) const;
    void children(char const*)) const;
    void children()) const;
    void attribute(char const*)) const;

    // Operators
    operator void (*)(pugi::xml_node***)() const;
    operator==(pugi::xml_node const&) const;
    operator>=(pugi::xml_node const&) const;
    operator>(pugi::xml_node const&) const;
    operator<=(pugi::xml_node const&) const;
    operator<(pugi::xml_node const&) const;
    operator!=(pugi::xml_node const&) const;
    operator!() const;

};

} // namespace pugi

#endif // PUGI_XML_NODE_H_
