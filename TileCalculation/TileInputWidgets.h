#pragma once
#include<FL\Fl_Float_Input.H>
#include<FL\Fl_Group.H>

class TileInputWidgets
{
public:
    Fl_Group* tileInputGroup;
    Fl_Float_Input* tileLenght;
    Fl_Float_Input* tileWidth;
    Fl_Float_Input* tileCost;
    Fl_Float_Input* tileSeam;

    TileInputWidgets(int x, int y, int w, int h, const char* l);
    ~TileInputWidgets();

private:
    int xCoordinate;
    int yCoordinate;
    int groupWeight;
    int groupHeight;
    const char* groupLabel;
};