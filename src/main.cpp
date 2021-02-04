#include <iostream>
#include <string>
#include "osm.hpp"

int main() {
   std::string fileName;
   std::cout << "Enter file name: ";
   std::cin >> fileName;

   Osm osm = Osm(fileName);

   std::cout << osm.getNumNodes() << std::endl;
   std::cout << osm.getNumWays() << std::endl;
   std::cout << osm.getNumHighways() << std::endl;
   std::cout << osm.getMeanLat() << std::endl;
   std::cout << osm.getMeanLon() << std::endl;

   return 0;
}
