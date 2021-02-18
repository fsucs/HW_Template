#include <string>
#include <cassert>
#include <iostream>
#include "../src/matrix.hpp"

/* test square matrix information */
int main() {

    Matrix m1(3, 3, "1 0 0 0 1 0 0 0 1");
    Matrix m2(3, 3, "1 0 1 0 0 0 0 0 1");
    Matrix m3(3, 3, "0 0 0 1 0 0 1 1 0");
    Matrix m4(3, 3, "0 2 -45 -2 0 -4 45 4 0");
    Matrix m5(3, 3, "0 0 1 0 1 0 0 0 0");

    assert(m1.IsDiagonal());
    assert(!m2.IsDiagonal());
    assert(!m2.IsLowerTriangular());
    assert(m3.IsLowerTriangular());
    assert(m4.IsSkewSymmetric());
    assert(!m4.IsSymmetric());
    assert(m1.IsSymmetric());
    assert(!m1.IsSkewSymmetric());
    assert(m5.IsUpperTriangular());
    
    return 0;
}
