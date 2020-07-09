#include "Buttons.h"

void Buttons::horizontalClicked(Fl_Widget* w, void* ptr)
{
    Buttons* b = static_cast<Buttons*>(ptr);
    if (b->modeChangedCallback) {
        b->modeChangedCallback(Mode::Horizontal);
    }
}

void Buttons::verticalClicked(Fl_Widget* w, void* ptr)
{
    Buttons* b = static_cast<Buttons*>(ptr);
    if (b->modeChangedCallback) {
        b->modeChangedCallback(Mode::Vertical);
    }
}

Buttons::Buttons(int x, int y, int w, int h)
    :xCoordinate(x), yCoordinate(y), groupWeight(w), groupHeight(h)
{
    constexpr int buttonWidth = 75;
    constexpr int buttonHeight = 25;

    resultButtonsGroup = new Fl_Group(xCoordinate, yCoordinate, groupWeight, groupHeight);

    horCalcButton = new Fl_Button(x + 120, y + 20, buttonWidth, buttonHeight, "Horizontal");
    verCalcButton = new Fl_Button(x + 120, y + 60, buttonWidth, buttonHeight, "Vertical");

    resultButtonsGroup->add(horCalcButton);
    resultButtonsGroup->add(verCalcButton);

    horCalcButton->callback(horizontalClicked, this);
    verCalcButton->callback(verticalClicked, this);
}

Buttons::~Buttons()
{
    delete resultButtonsGroup;
    delete horCalcButton;
    delete verCalcButton;
}

void Buttons::onModeChanged(const ModeChangedCallback& callback)
{
    modeChangedCallback = callback;
}
