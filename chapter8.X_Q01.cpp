/*
Question #1

In designing a game, we decide we want to have monsters, because everyone likes fighting monsters. Declare a struct that represents your monster. 
The monster should have a type that can be one of the following: an ogre, a dragon, an orc, a giant spider, or a slime. Use an enum class for this.
Each individual monster should also have a name (use a std::string), as well as an amount of health that represents how much damage they can take 
before they die. Write a function named printMonster() that prints out all of the struct’s members. Instantiate an ogre and a slime, initialize them 
using an initializer list, and pass them to printMonster().

Your program should produce the following output:

This Ogre is named Torg and has 145 health.
This Slime is named Blurp and has 23 health.
*/

#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>

enum class Monsters_t
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,

};

struct Monster
{
    Monsters_t monster;
    std::string monster_name;
    int health;
};

std::string get_monster_type(Monsters_t type)
{
    switch(type)
    {
        case Monsters_t::ogre:
            return "Ogre";
        case Monsters_t::dragon:
            return "Dragon";
        case Monsters_t::orc:
            return "Orc";
        case Monsters_t::giant_spider:
            return "Giant Spider";
        case Monsters_t::slime:
            return "Slime";
        default:
            return "Not found";
    }
}

void printMonster(Monster monster)
{
    std::cout << "This ogre is named " << get_monster_type(monster.monster) << " and has " << monster.health << " health.\n";
}

int main()
{
    Monster torg{ Monsters_t::ogre, "Torg", 145};
    Monster blurp{ Monsters_t::slime, "Blurp", 23};

    printMonster(torg);
    printMonster(blurp);

	return 0;
}