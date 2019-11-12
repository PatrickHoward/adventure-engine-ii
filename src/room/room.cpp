
#include "room.hpp"
#include "actor.hpp"

using namespace std;

Room::Room(const string& name_, const string& description_, ExitDirections exits_[])
    : name(name_),
    description(description_)
{

}

void Room::addActor(Actor& actor)
{
    actors[actor.type].push_back(actor);
}

vector<Actor> Room::getActorsInRoom()
{
    std::vector<Actor> actorsInRoom;

    for(int i = 0; i < (int)ActorType::TOTAL; ++i)
    {
        for(int j = 0; i < actors[(ActorType)i].size(); ++j)
        {
            actorsInRoom.push_back(actors[(ActorType)i][j]);
        }
    }
}
