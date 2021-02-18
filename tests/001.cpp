#include <string>
#include <cassert>
#include <iostream>
#include "../src/matrix.hpp"

/* test element access, general matrix operations and comparison */
int main() {

    Matrix m1(3, 3, "1 2 3 4 5 6 7 8 9");
    Matrix m2(3, 3, "9 8 7 6 5 4 3 2 1");
    Matrix m3(3, 3, "10 10 10 10 10 10 10 10 10");
    Matrix m4(3, 3, "-8 -6 -4 -2 0 2 4 6 8");
    Matrix m5(3, 3, "30 24 18 84 69 54 138 114 90");
    Matrix m6(3, 3, "2 4 6 8 10 12 14 16 18");
    Matrix m7(4, 2, "4 1 7 6 5 1 9 2");
    Matrix m8(4, 2, "3 0 1 2 4 8 7 3");
    Matrix m9(3, 3, "1 4 7 2 5 8 3 6 9");
    Matrix m0(m9);
    Matrix a0(2, 2, "102 81 27 26");
    Matrix a1(4, 4, "12 21 15 27 6 19 7 13 24 76 28 52 31 67 38 69");
    Matrix a2(3, 3, "-174 48 270 -390 111 612 -606 174 954");

    assert(m1.NumRows() == 3);
    assert(a1.NumColumns() == 4);
    assert(m0 == m9);
    assert(m1 != m7);
    assert(m4 != m5);
    assert(m1 + m2 == m3);
    assert(m1 - m2 == m4);
    assert(m1 * m2 == m5);
    assert(2 * m1 == m6);
    assert(m1(1, 1) == 1);
    assert(Transpose(m1) == m9);
    assert((m2(2, 3) = 12) == 12);
    assert(Transpose(m7) * m8 == a0);
    assert(m8 * Transpose(m7) == a1);
    assert(m1 * Transpose(m9) * m4 - m5 == a2);

    Matrix m10;
    assert(m10.IsEmpty());
    m10 = m7;
    assert(m10 == m7);
    Matrix m11 = a2;
    assert(m11 == a2);

    return 0;
}
