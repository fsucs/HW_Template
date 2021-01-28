#include <cassert>
#include "../src/roman.hpp"

int main () {

	Roman p(100);
	Roman q(10);
	Roman r(370);

        p.IncreaseWith(q);
        r.IncreaseWith(p);

	/* Test getting coordinates. */
	assert(p.GetInt() == 110);
	assert(r.GetInt() == 480);

	return 0;
}

