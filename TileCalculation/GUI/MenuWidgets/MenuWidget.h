#pragma once
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Widget.H>

class MenuWidget
	:public Fl_Menu_Bar
{
public:
	MenuWidget(int w2, int h2, int ww, int hh, const char* l);
};