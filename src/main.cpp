/**
 * @brief main program
 * This program is a simple test program for the path finding API and image drawing API.
 * You can compare the PGM image generated with the .jpg file in tests folder.
 */

#include <iostream>
#include "osm.hpp"
#include "image.hpp"

// route is not unique. Any valid route is accepted
int main() {
    Osm osm("./test/fsu.osm");
    Osm osm1("./test/innovation_park.osm");

    Image img(osm, 3000, 3000);
    Image img1(osm1, 3000, 3000);

    std::vector<OsmNode> route = osm.computeRoute("5162977672", "8062710380");
    std::vector<OsmNode> route1 = osm1.computeRoute("1994086682", "1989881837");

    img.drawRoute(route);
    img1.drawRoute(route);

    img.saveImage("./test/fsu_test_route.pgm");
    img1.saveImage("./test/innovation_test_route.pgm");

    return 0;
}
