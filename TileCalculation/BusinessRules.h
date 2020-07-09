#pragma once
#include "Room.h"
#include "Tile.h"
#include "RoomInputWidget.h"
#include "TileInputWidgets.h"

class BusinessRules
{
public:
    int horOkrLenght(const Room* room, const Tile* tile);
    int horOkrWidth(const Room* room, const Tile* tile);
    int verOkrLenght(const Room* room, const Tile* tile);
    int verOkrWidth(const Room* room, const Tile* tile);
    int tileAmountHorizontal(const Room* room, const Tile* tile);
    int tileAmountVertical(const Room* room, const Tile* tile);
    bool inputValidationRule(const Room* room, const Tile* tile, const RoomInputWidget* roomInput, const TileInputWidgets* tileInput);
};

