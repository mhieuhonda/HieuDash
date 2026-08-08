// ============================================================
// band_matrix.h — Reconstructed from libcocos2dcpp.so symbols
// ============================================================

#ifndef INTERNAL_BAND_MATRIX_H_
#define INTERNAL_BAND_MATRIX_H_

#include <vector>

namespace internal {

class band_matrix {
public:
    band_matrix(int, int, int);
    band_matrix(int, int, int);

    void saved_diag(int);
    void lu_decompose();
    void resize(int, int, int);
    void lu_solve(std::vector<double> const&, bool);
    void saved_diag(int)) const;
    void dim()) const;
    void l_solve(std::vector<double> const&)) const;
    void r_solve(std::vector<double> const&)) const;

    // Operators
    operator()(int, int);
    operator()(int, int) const;

};

} // namespace internal

#endif // INTERNAL_BAND_MATRIX_H_
