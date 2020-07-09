#include "TileInputWidgets.h"

TileInputWidgets::TileInputWidgets(int x, int y, int w, int h, const char* l) 
    :xCoordinate(x), yCoordinate(y), groupWeight(w), groupHeight(h), groupLabel(l)
{
    constexpr int fieldWidth = 60;
    constexpr int fieldHeight = 25;

    tileInputGroup = new Fl_Group(xCoordinate, yCoordinate, groupWeight, groupHeight, groupLabel);
    tileLenght = new Fl_Float_Input(x + 120, y + 20, fieldWidth, fieldHeight, "Tile Lenght, m:");
    tileWidth = new Fl_Float_Input(x + 120, y + 60, fieldWidth, fieldHeight, "Tile Width, m:");
    tileCost = new Fl_Float_Input(x + 120, y + 100, fieldWidth, fieldHeight, "1 Tile Cost, $:");
    tileSeam = new Fl_Float_Input(x + 120, y + 140, fieldWidth, fieldHeight, "Seam, mm:");

    tileInputGroup->add(tileLenght);
    tileInputGroup->add(tileWidth);
    tileInputGroup->add(tileCost);
    tileInputGroup->add(tileSeam);
}

TileInputWidgets::~TileInputWidgets()
{
    delete tileInputGroup;
    delete tileLenght;
    delete tileWidth;
    delete tileCost;
    delete tileSeam;
}