#pragma once
#include <iostream>
#include <FL/fl_ask.H>
#include <FL/fl_draw.H>
#include <math.h>
#include <FL/Fl_Menu_Bar.H>
#include <string.h>

class Room
{
public:
    double roomLengthWall1;
    double roomLengthWall2;
    double roomHeight;
    double square;

    double readRoomData(const std::string& stLengthW1, const std::string& stLengthW2, const std::string& stHeight);
    double roomSquareCalculation();
};
