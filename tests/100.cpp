#include <string>
#include <cassert>
#include <iostream>
#include <fstream>
#include "../src/matrix.hpp"

/* test general matrix operations, matrix printing and save matrix to file */

int main() {
    std::string m1Path = "./tests/m1.pgm";
    std::string m2Path = "./tests/m2.pgm";
    std::string m3Path = "./tests/m3.pgm";
    std::string m4Path = "./tests/m4.pgm";
    Matrix m1(m1Path);
    Matrix m2(m2Path);
    Matrix m3(m3Path);
    Matrix m4(m4Path);

    std::cout << "m1:\n" << m1 << std::endl;
    std::cout << "m2:\n" << m2 << std::endl;

    Matrix(m1 * m2).Save("./tests/t_m12.pgm");
    Matrix m34(m3 * m4);
    Matrix m34t = Transpose(m34);
    Matrix m34s = m34 - m34t;
    m34.Save("./tests/t_m34.pgm");
    m34t.Save("./tests/t_m34t.pgm");
    m34s.Save("./tests/t_m34s.pgm");
    
    return 0;
}
