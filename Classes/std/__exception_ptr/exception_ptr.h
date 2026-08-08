// ============================================================
// exception_ptr.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef STD___EXCEPTION_PTR_EXCEPTION_PTR_H_
#define STD___EXCEPTION_PTR_EXCEPTION_PTR_H_

namespace std {
namespace __exception_ptr {

class exception_ptr {
public:
    exception_ptr(void (std::__exception_ptr::exception_ptr::*)());
    exception_ptr(void*);
    exception_ptr(std::__exception_ptr::exception_ptr const&);
    exception_ptr();
    exception_ptr(void (std::__exception_ptr::exception_ptr::*)());
    exception_ptr(void*);
    exception_ptr(std::__exception_ptr::exception_ptr const&);
    exception_ptr();

    virtual ~exception_ptr();
    virtual ~exception_ptr();

    void __cxa_exception_type()) const;
    void _M_get()) const;
    void _M_release();
    void _M_safe_bool_dummy();
    void swap(std::__exception_ptr::exception_ptr&);
    void _M_addref();

    // Operators
    operator void (std::__exception_ptr::exception_ptr::*)()() const;
    operator!() const;
    operator=(std::__exception_ptr::exception_ptr const&);

};

} // namespace __exception_ptr
} // namespace std

#endif // STD___EXCEPTION_PTR_EXCEPTION_PTR_H_
