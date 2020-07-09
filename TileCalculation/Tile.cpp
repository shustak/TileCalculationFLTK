#include "Tile.h"

double Tile::readTileData(const std::string& st_tile_length, const std::string& st_tile_width, const std::string& st_seam, const std::string& st_cost)
{
    tileLength = strtod(st_tile_length.c_str(), NULL);
    tileWidth = strtod(st_tile_width.c_str(), NULL);
    seam = strtod(st_seam.c_str(), NULL);
    cost = strtod(st_cost.c_str(), NULL);

    tileSquare = tileLength * tileWidth;

    return tileLength, tileWidth, seam, cost, tileSquare;
}
