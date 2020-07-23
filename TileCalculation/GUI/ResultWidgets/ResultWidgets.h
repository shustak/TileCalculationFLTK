#pragma once
#include<FL\Fl_Output.H>
#include<FL\Fl_Group.H>

class ResultWidgets
{
public:
    ResultWidgets(int x, int y, int w, int h, const char* l);
    ~ResultWidgets();

    Fl_Group* resultOutputGroup;
    Fl_Output* roomSquare;
    Fl_Output* tileAmount;
    Fl_Output* tileCost;

private:
    int xCoordinate;
    int yCoordinate;
    int groupWeight;
    int groupHeight;
    const char* groupLabel;
};

