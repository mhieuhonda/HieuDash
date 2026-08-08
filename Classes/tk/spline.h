// ============================================================
// spline.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef TK_SPLINE_H_
#define TK_SPLINE_H_

#include <vector>

namespace tk {

class spline {
public:
    virtual ~spline();
    virtual ~spline();

    void set_points(std::vector<double> const&, std::vector<double> const&, tk::spline::spline_type);
    void set_boundary(tk::spline::bd_type, double, tk::spline::bd_type, double);
    void make_monotonic();
    void set_coeffs_from_b();
    void find_closest(double)) const;
    void deriv(int, double)) const;
    void solve(double, bool)) const;

    // Operators
    operator()(double) const;

};

} // namespace tk

#endif // TK_SPLINE_H_
