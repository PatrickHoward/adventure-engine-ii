#pragma once

#include <string>

enum class ActorType
{
    PLAYER,
    ENEMY,
    ITEM,
    WEAPON,
    UPGRADE,
    COLLECTABLE,
    TOTAL
};

class Actor
{
public:
    ActorType type;
    std::string name;
    std::string desc;

private:

};

class APlayer : Actor
{

};

class AEnemy : Actor 
{

};

class AItem : Actor
{

};

class AWeapon : Actor
{

};

class AUpgrade : Actor
{

};

class ACollectable : Actor 
{

};