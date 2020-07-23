#include "RoomInputWidget.h"

RoomInputWidget::RoomInputWidget(int x, int y, int w, int h, const char* l)
    :xCoordinate(x), yCoordinate(y), groupWeight(w), groupHeight(h), groupLabel(l)
{
    constexpr int fieldWidth = 60;
    constexpr int fieldHeight = 25;

    roomInputGroup = new Fl_Group(xCoordinate, yCoordinate, groupWeight, groupHeight, groupLabel);
    lengthWall_1 = new Fl_Float_Input(x + 120, y + 20, fieldWidth, fieldHeight, "Length Wall 1, m:");
    lengthWall_2 = new Fl_Float_Input(x + 120, y + 60, fieldWidth, fieldHeight, "Length Wall 2, m:");
    height = new Fl_Float_Input(x + 120, y + 100, fieldWidth, fieldHeight, "Height, m:");

    roomInputGroup->add(lengthWall_1);
    roomInputGroup->add(lengthWall_2);
    roomInputGroup->add(height);
}

RoomInputWidget::~RoomInputWidget()
{
    delete roomInputGroup;
    delete lengthWall_1;
    delete lengthWall_2;
    delete height;
}


