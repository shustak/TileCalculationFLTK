#include "RoomScene.h"

void RoomScene::draw() {
    if (!valid()) {
        ... set up projection, viewport, etc ...
           
    }
    draw;
}

int MyWindow::handle(int event) {
    switch (event) {
    case FL_PUSH:
        mouse down event 
           
            return 1;
    case FL_DRAG:
       
            return 1;
    case FL_RELEASE:
       
            return 1;
    case FL_FOCUS:
    case FL_UNFOCUS:
       
            return 1;
    case FL_KEYBOARD:
        
            return 1;
    case FL_SHORTCUT:
      
            return 1;
    default:
        // pass other events to the base class...
        return Fl_Gl_Window::handle(event);
    }
}