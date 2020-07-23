#include "MenuWidget.h"

MenuWidget::MenuWidget(int w2, int h2, int ww, int hh, const char* l)
    :Fl_Menu_Bar(w2, h2, ww, hh, l)
{
    add("File/&Open");
    add("File/&Save");
    add("Edit/&Copy");
    draw();
}
