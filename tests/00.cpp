#include <iostream>
#include <string>
#include <cassert>
#include "../src/osm.hpp"

int main() {
   Osm test = Osm("tests/map1.osm");

   test.ParseOsmFile("tests/map2.osm");
   assert(test.getNumNodes() == 1341 &&
          test.getMeanLat() == 35 &&
          test.getMeanLon() == -89);

   return 0;
}
