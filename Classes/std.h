// ============================================================
// std.h — Reconstructed from libcocos2dcpp.so
// Part of Geometry Dash v2.2.144 decompilation project
// ============================================================

#ifndef STD_H_
#define STD_H_

class std {
public:
    void _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_destroy();
    void function<void ()>::function(std::function<void ()> const&);
    void function<void ()>::function(std::function<void ()> const&);
    void unexpected();
    void get_terminate();
    void set_terminate(void (*)());
    void get_unexpected();
    void set_unexpected(void (*)());
    void get_new_handler();
    void set_new_handler(void (*)());
    void current_exception();
    void rethrow_exception(std::__exception_ptr::exception_ptr);
    void uncaught_exception();
    void terminate();

};

#endif // STD_H_
