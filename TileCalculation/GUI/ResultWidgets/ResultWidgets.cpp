#include "ResultWidgets.h"

ResultWidgets::ResultWidgets(int x, int y, int w, int h, const char* l)
    : xCoordinate(x), yCoordinate(y), groupWeight(w), groupHeight(h), groupLabel(l)
{
    constexpr int fieldWidth = 60;
    constexpr int fieldHeight = 25;

    resultOutputGroup = new Fl_Group(xCoordinate, yCoordinate, groupWeight, groupHeight, groupLabel);
    roomSquare = new Fl_Output(x + 120, y + 20, fieldWidth, fieldHeight, "Room Square, m2:");
    tileAmount = new Fl_Output(x + 120, y + 60, fieldWidth, fieldHeight, "Tile Amount:");
    tileCost = new Fl_Output(x + 120, y + 100, fieldWidth, fieldHeight, "Tile Cost, $:");

    resultOutputGroup->add(roomSquare);
    resultOutputGroup->add(tileAmount);
    resultOutputGroup->add(tileCost);
}

ResultWidgets::~ResultWidgets()
{
    delete resultOutputGroup;
    delete roomSquare;
    delete tileAmount;
    delete tileCost;
}
