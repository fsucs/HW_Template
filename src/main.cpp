/**
 * @brief Example driver program for class Roman
 *  You can test your Roman class here.
 */

#include <iostream>
#include "roman.hpp"

int main () {
    Roman p;
    Roman s(1900);
    std::cout << "Roman for 1900: " << s.GetRoman() << std::endl;

    Roman q("MCMXCV");
    Roman r("MCM");
    p.SetRoman("VII");
    std::cout << p.GetInt() << std::endl;
    std::cout << q.GetInt() << std::endl;
    std::cout << r.GetInt() << std::endl;
}

