#pragma once
#include <FL\Fl_Gl_Window.H>
#include <FL/gl.h>
#include <FL\Fl.H>

class RoomGL_Window :public Fl_Gl_Window
{
public:
    float rotation, rotationIncrement;
    bool  animating;

    RoomGL_Window(int x, int y, int w, int h, const char* l);

    double size;
    
    void v_angle(float angle) { vAng = angle; };
    
    float v_angle() { return vAng; };
    
    void h_angle(float angle) { hAng = angle; };
    
    float h_angle() { return hAng; };
    
    void panx(float x) { xshift = x; };
    
    void pany(float y) { yshift = y; };

    float vAng, hAng; float xshift, yshift;
    float boxv0[3]; float boxv1[3]; float boxv2[3]; float boxv3[3];
    float boxv4[3]; float boxv5[3]; float boxv6[3]; float boxv7[3];

    void draw();
    void drawCube();

    void InitializeGL();

    int handle(int event);
};
