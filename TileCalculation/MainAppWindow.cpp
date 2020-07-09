#include "MainAppWindow.h"
#include "RoomGL_Window.h"

MainAppWindow::MainAppWindow(int w, int h, const char* l)
    :Fl_Window(w, h, l)
{
    applicationMenu = new MenuWidget(0, 0, 1000, 25, "menu");
    roomInputGroup = new RoomInputWidget(800, 50, 1000, 800, "Room parameters:");
    tileInputGroup = new TileInputWidgets(800, 220, 800, 500, "Tile parameters:");
    buttonsGroup = new  Buttons(780, 400, 800, 500);
    resultGroup = new ResultWidgets(800, 600, 800, 500, "Calculation Results:");
    glWindow = new RoomGL_Window(20, 30, 770, 750, "Room Visualization");

    bussinesRules = new BusinessRules;
    room = new Room;
    tile = new Tile;

    glWindow->draw();

    buttonsGroup->onModeChanged([&mw=*this](Buttons::Mode m) mutable {
        //Room
        mw.room->readRoomData(
            mw.roomInputGroup->lengthWall_1->value(),
            mw.roomInputGroup->lengthWall_2->value(),
            mw.roomInputGroup->height->value());
        //Tile
        mw.tile->readTileData(
            mw.tileInputGroup->tileLenght->value(),
            mw.tileInputGroup->tileWidth->value(),
            mw.tileInputGroup->tileSeam->value(),
            mw.tileInputGroup->tileCost->value());
        //Check Validation Rules
        if (mw.bussinesRules->inputValidationRule(mw.room, mw.tile, mw.roomInputGroup, mw.tileInputGroup) == false) {
            return;
        }
        //Room Square Output
        std::string strRoomSquare = std::to_string(mw.room->roomSquareCalculation());
        const char* roomSquareOutput = strRoomSquare.c_str();
        mw.resultGroup->roomSquare->value(roomSquareOutput);
        //Calculation
        mw.bussinesRules->horOkrLenght(mw.room, mw.tile);
        mw.bussinesRules->horOkrWidth(mw.room, mw.tile);
        mw.bussinesRules->verOkrLenght(mw.room, mw.tile);
        mw.bussinesRules->verOkrWidth(mw.room, mw.tile);

        if (m == Buttons::Mode::Horizontal) {
            mw.resultGroup->tileAmount->clear_output();
            mw.resultGroup->tileCost->clear_output();
            //Tile Amount Output
            std::string strTileAmountHorizontal = std::to_string(mw.bussinesRules->tileAmountHorizontal(mw.room, mw.tile));
            const char* tileAmountOutputH = strTileAmountHorizontal.c_str();
            mw.resultGroup->tileAmount->value(tileAmountOutputH);
            //Tile Cost Calculation
            std::string strTileCostHorizontal = std::to_string(mw.bussinesRules->tileAmountHorizontal(mw.room, mw.tile)*mw.tile->cost);
            const char* tileCostOutputH = strTileCostHorizontal.c_str();
            mw.resultGroup->tileCost->value(tileCostOutputH);
        }

        if (m == Buttons::Mode::Vertical) {
            mw.resultGroup->tileAmount->clear_output();
            mw.resultGroup->tileCost->clear_output();
            //Tile Amount Output
            std::string strTileAmountVertical = std::to_string(mw.bussinesRules->tileAmountVertical(mw.room, mw.tile));
            const char* tileAmountOutputV = strTileAmountVertical.c_str();
            mw.resultGroup->tileAmount->value(tileAmountOutputV);
            //Tile Cost Calculation
            std::string strTileCostVertical = std::to_string(mw.bussinesRules->tileAmountVertical(mw.room, mw.tile) * mw.tile->cost);
            const char* tileCostOutputV = strTileCostVertical.c_str();
            mw.resultGroup->tileCost->value(tileCostOutputV);
        }
    });

    end();
    show();
}
