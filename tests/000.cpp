#include <string>
#include <cassert>
#include <iostream>
#include "../src/matrix.hpp"

/* test constructors and general matrix information */
int main() {

    Matrix m1;
    Matrix m2(0, 0);
    Matrix m3(3, 3, "1 2 3 4 5 6 7 8 9");
    Matrix m4(2, 3, "1 2 3 4 5 6");
    Matrix m0(3, 3);
    Matrix m5(4, 2, "4 1 7 6 5 1 9 2");
    Matrix m6(m5);


    assert(m1.IsEmpty());
    assert(m2.IsEmpty());
    assert(m3.IsSquare());
    assert(!m4.IsSquare());
    assert(m0.IsZero());
    assert((m4.NumRows() == 2) && (m4.NumColumns() == 3));
    assert(m6.Size() == "4x2");

    return 0;
}
