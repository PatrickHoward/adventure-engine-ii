#pragma once

#include <string>

#include "room.hpp"

class Level
{
public:
    std::string levelName;

private:
    Room* startingRoom;

};