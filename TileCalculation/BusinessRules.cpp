#include "BusinessRules.h"

int BusinessRules::horOkrLenght(const Room* room, const Tile* tile)
{
    double tileLengthWithSeam = tile->tileLength + (tile->seam / 1000);
    double tileAmountHorizontalWall1 = room->roomLengthWall1 / tileLengthWithSeam;
    double tileAmountHorizontalWall2 = room->roomLengthWall2 / tileLengthWithSeam;

    int okrAmountHorLength = int(ceil(tileAmountHorizontalWall1)+ceil(tileAmountHorizontalWall2))*2;

    return okrAmountHorLength;
}

int BusinessRules::horOkrWidth(const Room* room, const Tile* tile)
{
    double tileLengthWithSeam = tile->tileWidth + (tile->seam / 1000);
    double amountHorizontal = room->roomHeight / tileLengthWithSeam;

    int okrAmountHorWidth = int(ceil(amountHorizontal))*4;

    return okrAmountHorWidth;
}

int BusinessRules::verOkrLenght(const Room* room, const Tile* tile)
{
    double tileWidthWithSeam = tile->tileWidth + (tile->seam / 1000);
    double amountHorizontalWall1 = room->roomLengthWall1 / tileWidthWithSeam;
    double amountHorizontalWall2 = room->roomLengthWall1 / tileWidthWithSeam;

    int okrAmountVerLength = int(ceil(amountHorizontalWall1)+ceil(amountHorizontalWall2))*2;

    return okrAmountVerLength;
}

int BusinessRules::verOkrWidth(const Room* room, const Tile* tile)
{
    double tileLengthWithSeam = tile->tileLength + (tile->seam / 1000);
    double amountHorizontal = room->roomHeight / tileLengthWithSeam;

    int okrAmountVerWidth = int(ceil(amountHorizontal))*4;

    return okrAmountVerWidth;
}

int BusinessRules::tileAmountHorizontal(const Room* room, const Tile* tile)
{
    int horizontal_answer = horOkrLenght(room, tile) * horOkrWidth(room, tile);
    return horizontal_answer;
}

int BusinessRules::tileAmountVertical(const Room* room, const Tile* tile)
{
    int vertical_answer = verOkrLenght(room, tile) * verOkrWidth(room, tile);
    return vertical_answer;
}

bool BusinessRules::inputValidationRule(const Room* room, const Tile* tile, const RoomInputWidget* roomInput, const TileInputWidgets* tileInput)
{
    if (roomInput->lengthWall_1->size()<=0 || room->roomLengthWall1<=0)
    {
        fl_choice("Please enter Room lenght wall1 value more than '0'!", "OK", 0, 0);
        return false;
    }
    if (roomInput->lengthWall_2->size() <= 0 || room->roomLengthWall2 <= 0)
    {
        fl_choice("Please enter Room lenght wall2 value more than '0'!", "OK", 0, 0);
        return false;
    }
    if (roomInput->height->size() <= 0 || room->roomHeight <= 0)
    {
        fl_choice("Please enter Room height value more than '0'!", "OK", 0, 0);
        return false;
    }
    if (tileInput->tileLenght->size() <= 0 || tile->tileLength <= 0)
    {
        fl_choice("Please enter Tile lenght value more than '0'!", "OK", 0, 0);
        return false;
    }
    if (tileInput->tileWidth->size() <= 0 || tile->tileWidth <= 0)
    {
        fl_choice("Please enter Tile width value more than '0'!", "OK", 0, 0);
        return false;
    }
    if (tileInput->tileSeam->size() <= 0 || tile->seam < 0)
    {
        fl_choice("Please enter Tile seam value!", "OK", 0, 0);
        return false;
    }
    if (tileInput->tileCost->size() <= 0 || tile->cost <= 0)
    {
        fl_choice("Please enter Tile cost value more than '0'!", "OK", 0, 0);
        return false;
    }

    if (
        room->roomLengthWall1 < tile->tileLength
        || room->roomLengthWall2 < tile->tileLength
        || room->roomHeight < tile->tileWidth
        || room->roomHeight < tile->tileLength
        || room->roomLengthWall1 < tile->tileWidth
        || room->roomLengthWall2 < tile->tileWidth)
    {
        fl_choice("You Tile size more than room size! Please enter correct value!", "OK", 0, 0);
        return false;
    }

    return true;
}