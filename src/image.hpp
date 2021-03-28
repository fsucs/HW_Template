/**
 * @brief Image Class header
 */

#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include "osm.hpp"

class Image {
    public:
        // constructors and destructor
        Image();
        Image(const Osm &osm, unsigned r = 5000, unsigned c = 5000);
        ~Image();

        // Image drawing utilities
        void drawRoute(const std::vector<OsmNode> &);
        void saveImage(const std::string& pgmPath) const;

    private:
        int **m;
        unsigned numRows, numColumns;
        // canvas size (bounding lat/lon)
        double minLat, maxLat, minLon, maxLon;
};

#endif
