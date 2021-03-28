/**
 * @brief Osm Class implementation
 */

#include "osm.hpp"

Osm::Osm(const std::string &osmFileName) {
    // read in the OSM file and parse nodes and highways
}

std::vector<OsmNode> Osm::computeRoute(const std::string &srcId, const std::string &destId) const {    
    std::vector<OsmNode> route;
    // find a path between src and dest, then fill route with nodes in the path
    return route;
}
