#pragma once

#include <string>
#include <vector>
#include <unordered_map>

#include "actor.hpp"

enum class ExitDirections
{
    NORTH,
    SOUTH,
    EAST,
    WEST,
    NORTHEAST,
    NORTHWEST,
    SOUTHEAST,
    SOUTHWEST,
    UP,
    DOWN
};

class Room
{
public:
    Room(const std::string& name_, const std::string& description_, ExitDirections exits_[]);

    void addActor(Actor& actor);
    
private:
    std::string name;
    std::string description;

    std::unordered_map<ExitDirections, Room*> exits;
    std::unordered_map<std::string, std::vector<Actor>> actors;
};