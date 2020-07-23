#pragma once
#include<FL\Fl_Float_Input.H>
#include<FL\Fl_Group.H>

class RoomInputWidget
{
public:
    RoomInputWidget(int x, int y, int w, int h, const char* l);
    ~RoomInputWidget();

    Fl_Group* roomInputGroup;
    Fl_Float_Input* lengthWall_1;
    Fl_Float_Input* lengthWall_2;
    Fl_Float_Input* height;

private:
    int xCoordinate;
    int yCoordinate;
    int groupWeight;
    int groupHeight;
    const char* groupLabel;
};

