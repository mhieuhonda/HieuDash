
#ifndef PUGI_H_
#define PUGI_H_

#include <string>

class pugi {
public:
    void get_memory_allocation_function();
    void set_memory_management_functions(void* (*)(unsigned long), void (*)(void*));
    void get_memory_deallocation_function();
    void as_utf8(wchar_t const*);
    void as_utf8(std::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t> > const&);
    void as_wide(char const*);
    void as_wide(std::string const&);

};

#endif // PUGI_H_
