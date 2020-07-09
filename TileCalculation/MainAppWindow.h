#pragma once
#include <string>
#include "FL\Fl_Window.H"
#include "MenuWidget.h"
#include "RoomInputWidget.h"
#include "TileInputWidgets.h"
#include "Buttons.h"
#include"RoomGL_Window.h"
#include "ResultWidgets.h"
#include "BusinessRules.h"
#include "Room.h"
#include "Tile.h"
#include <FL/Fl.H>

class MainAppWindow :
    public Fl_Window
{
public:
    void cb_HorizontalButton(Fl_Widget* , void*);

    MainAppWindow(int w, int h, const char* l);

private:
    float roomLength_wall_1Value;
    double roomLength_wall_2Value;
    double roomHeightValue;

    MenuWidget* applicationMenu;
    RoomInputWidget* roomInputGroup;
    TileInputWidgets* tileInputGroup;
    Buttons* buttonsGroup;
    RoomGL_Window* glWindow;
    ResultWidgets* resultGroup;
    BusinessRules* bussinesRules;
    Room* room;
    Tile* tile;
};