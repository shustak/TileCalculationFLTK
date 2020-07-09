#include <FL/Fl_Gl_Window.H>


class RoomScene : public Fl_Gl_Window {
    void draw();
    int handle(int);

public:
    RoomScene(int X, int Y, int W, int H, const char* L)
        : Fl_Gl_Window(X, Y, W, H, L) {}

};