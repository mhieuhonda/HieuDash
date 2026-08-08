// ============================================================
// xml_document.cpp — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.14 decompilation project
// ============================================================

#include "xml_document.h"

namespace pugi {

xml_document::xml_document() {
    // 0xb5a000
}

xml_document::xml_document() {
    // 0xb5a000
}

xml_document::~xml_document() {
    // 0xb5a0c4
    this->cleanup();
}

xml_document::~xml_document() {
    // 0xb5a0c4
    this->cleanup();
}

void xml_document::load_buffer(void const*, unsigned long, unsigned int, pugi::xml_encoding) {
    // 0xb5a17c
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::load_buffer_inplace(void*, unsigned long, unsigned int, pugi::xml_encoding) {
    // 0xb5a254
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::load_buffer_inplace_own(void*, unsigned long, unsigned int, pugi::xml_encoding) {
    // 0xb5a2d8
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::load(char const*, unsigned int) {
    // 0xb5a200
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::load(std::istream&, unsigned int, pugi::xml_encoding) {
    // 0xb5a604
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::load(std::basic_istream<wchar_t, std::char_traits<wchar_t> >&, unsigned int) {
    // 0xb5a998
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::reset(pugi::xml_document const&) {
    // 0xb5a0ec
    // TODO: Implement
}

void xml_document::reset() {
    // 0xb5a0c8
    // TODO: Implement
}

void xml_document::create() {
    // 0xb59f90
    xml_document* ret = new xml_document();
    if (ret && ret->init()) {
        ret->autorelease();
        return ret;
    }
    CC_SAFE_DELETE(ret);
    return nullptr;
}

void xml_document::destroy() {
    // 0xb5a028
    // TODO: Implement
}

void xml_document::load_file(char const*, unsigned int, pugi::xml_encoding) {
    // 0xb5a544
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::load_file(wchar_t const*, unsigned int, pugi::xml_encoding) {
    // 0xb5a5a4
    // Load from file/storage
    // TODO: Implement loading
}

void xml_document::save_string(char const*, unsigned int, pugi::xml_encoding)) const {
    // 0xb5b228
    // Save to file/storage
    // TODO: Implement saving
}

void xml_document::document_element()) const {
    // 0xb5b324
    // TODO: Implement
}

void xml_document::save(pugi::xml_writer&, char const*, unsigned int, pugi::xml_encoding)) const {
    // 0xb5acc4
    // Save to file/storage
    // TODO: Implement saving
}

void xml_document::save(std::ostream&, char const*, unsigned int, pugi::xml_encoding)) const {
    // 0xb5af7c
    // Save to file/storage
    // TODO: Implement saving
}

void xml_document::save(std::basic_ostream<wchar_t, std::char_traits<wchar_t> >&, char const*, unsigned int)) const {
    // 0xb5aff4
    // Save to file/storage
    // TODO: Implement saving
}

void xml_document::save_file(char const*, char const*, unsigned int, pugi::xml_encoding)) const {
    // 0xb5b068
    // Save to file/storage
    // TODO: Implement saving
}

void xml_document::save_file(wchar_t const*, char const*, unsigned int, pugi::xml_encoding)) const {
    // 0xb5b148
    // Save to file/storage
    // TODO: Implement saving
}

} // namespace pugi
