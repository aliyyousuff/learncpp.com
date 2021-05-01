/*
  d) Create a constructor that allows you to initialize all of the member variables.
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
    public:
        enum class Type
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

        Monster(Type monster, std::string name, std::string roar, int hit)
        : m_type{ monster }, m_name{ name }, m_roar{ roar }, m_hit_point{ hit }
        {

        }

    private:
        Type m_type{ };
        std::string m_name{ };
        std::string m_roar{ };
        int m_hit_point{ };

    
};

int main()
{
    Monster skeleton{ Monster::Type::SKELETAN, "Bones", "*rattle*", 4 };
    

    return 0;
}