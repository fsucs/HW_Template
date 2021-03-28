/**
 * @brief Image Class implementation
 */

#include <iostream>
#include "image.hpp"

Image::Image() {
    // initialize empty canvas
    numRows = 5000;
    numColumns = 5000;
    minLat = 0; maxLat = 0; minLon = 0; maxLon = 0;
    m = new int*[numRows];
    for (unsigned i = 0; i < numRows; i++) {
        m[i] = new int[numColumns];
        for (unsigned j = 0; j < numColumns; j++) {
            m[i][j] = 255;
        }
    }
}

Image::Image(const Osm &osm, unsigned r, unsigned c) {
    // initialize internal matrix
    numRows = r;
    numColumns = c;
    m = new int*[numRows];
    for (unsigned i = 0; i < numRows; i++) {
        m[i] = new int[numColumns];
        for (unsigned j = 0; j < numColumns; j++) {
            m[i][j] = 255;
        }
    }
    // draw osm to your image: nodes and highways
}

Image::~Image() {
    if (m != nullptr) {
        for (unsigned i = 0; i < numRows; i++) {
            delete[] m[i];
            m[i] = nullptr;
        }
        delete[] m;
        m = nullptr;
    }
}

void Image::drawRoute(const std::vector<OsmNode> &route) {
    // draw each OsmNode in route to your image
    // including nodes and highways connecting those nodes
}

void Image::saveImage(const std::string& pgmPath) const {
   // save the matrix to a valid PGM file
}
