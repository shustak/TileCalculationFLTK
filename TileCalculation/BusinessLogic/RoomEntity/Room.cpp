#include "Room.h"

double Room::readRoomData(const std::string& stLengthW1, const std::string& stLengthW2, const std::string& stHeight)
{
    roomLengthWall1 = strtod(stLengthW1.c_str(), NULL);
    roomLengthWall2 = strtod(stLengthW2.c_str(), NULL);
    roomHeight = strtod(stHeight.c_str(), NULL);

    return roomLengthWall1, roomLengthWall2, roomHeight;
}

double Room::roomSquareCalculation()
{
    square = 2*(roomLengthWall1 * roomHeight)+ (roomLengthWall2 * roomHeight);
    return square;
}
