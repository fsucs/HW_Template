#include <iostream>
#include <string>
#include <cassert>
#include "../src/osm.hpp"

int main() {
   Osm test = Osm("tests/map1.osm");

   assert(test.getNumNodes() == 174 &&
          test.getNumWays() == 2 &&
          test.getNumHighways() == 0 &&
          test.getMeanLat() == 52 &&
          test.getMeanLon() == 0);

   test.ParseOsmFile("tests/map2.osm");
   assert(test.getNumNodes() == 1341 &&
          test.getNumWays() == 141 &&
          test.getNumHighways() == 130 &&
          test.getMeanLat() == 35 &&
          test.getMeanLon() == -89);


   test.ParseOsmFile("tests/map3.osm");
   assert(test.getNumNodes() == 3830 &&
          test.getNumWays() == 567 &&
          test.getNumHighways() == 263 &&
          test.getMeanLat() == 19 &&
          test.getMeanLon() == -99);


   return 0;
}
