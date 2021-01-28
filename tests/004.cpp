#include <cassert>
#include <cmath>
#include "../src/roman.hpp"

int main () {
        Roman p("LXXVIII");   // 78
        Roman q("LXX");       // 70

        p.IncreaseWith(q);

        assert(p.GetInt() == 148);
        assert(p.GetRoman() == "CXLVIII");

	return 0;
}

