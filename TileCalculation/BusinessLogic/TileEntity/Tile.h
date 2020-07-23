#pragma once
#include <iostream>
#include <FL/fl_ask.H>
#include <FL/fl_draw.H>
#include <math.h>
#include <FL/Fl_Menu_Bar.H>
#include <string.h>

class Tile
{
public:
    double tileLength;
    double tileWidth;
    double tileSquare;
    double seam;
    double cost;

    double readTileData(const std::string& st_tile_length, const std::string& st_tile_width, const std::string& st_seam, const std::string& st_cost);
};

