#pragma once
#include <FL\Fl_Group.H>
#include <FL\Fl_Button.H>
#include <functional>

class Buttons
{
public:
    enum class Mode {
        Horizontal, Vertical
    };
    
    using ModeChangedCallback = std::function<void(Mode)>;

    Buttons(int x, int y, int w, int h);
    ~Buttons();

    void onModeChanged(const ModeChangedCallback& callback);

private:
    int xCoordinate;
    int yCoordinate;
    int groupWeight;
    int groupHeight;

    Fl_Group* resultButtonsGroup;
    Fl_Button* horCalcButton;
    Fl_Button* verCalcButton;

    ModeChangedCallback modeChangedCallback;

    static void horizontalClicked(Fl_Widget* w, void* ptr);
    static void verticalClicked(Fl_Widget* w, void* ptr);
};