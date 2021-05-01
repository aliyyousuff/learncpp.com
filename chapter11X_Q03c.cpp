/*
  b) Now, let’s create our Monster class. Our Monster will have 4 attributes (member variables): a type (MonsterType), a name (std::string), 
  a roar (std::string), and the number of hit points (int). Create a Monster class that has these 4 member variables.

*/


#include <iostream>
#include <string>
#include <chrono>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <array>
#include <vector>
#include <string_view>
#include <functional>
#include <cmath>
#include <random>
#include <cassert>
#include <cstdint>

class Monster
{
    private:

        std::string m_name{ };
        std::string m_roar{ };
        int m_hit_point{ };

    public:
        enum class Monstertype
        {
            DRAGON,
            GOBLIN,
            OGRE,
            ORC,
            SKELETAN,
            TROLL,
            ZOMBIE,
            MAX_MONSTER_TYPES
        };
};

int main()
{
    

    return 0;
}