/**
 * @brief Osm Class header
 */
#ifndef OSM_H
#define OSM_H

#include <string>
#include <vector>
#include "osmnode.hpp"

class Osm {
    public:
        Osm(const std::string &);

        // Path finding
        // The two parameters are nodeid, you can use other data types if it works
        std::vector<OsmNode> computeRoute(const std::string &, const std::string &) const;
};

#endif
