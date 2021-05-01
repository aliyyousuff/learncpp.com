/*
 e) Now we want to be able to print our monster so we can validate it’s correct. To do that, we’re going to need to write a function 
 that converts a Monster::Type into a string. Write that function (called getTypeString()), as well as a print() member function.
 
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
            VAMPIRE,
            ZOMBIE,
            MAX_MONSTER_TYPES
        };

        Monster(Type monster, std::string name, std::string roar, int hit)
        : m_type{ monster }, m_name{ name }, m_roar{ roar }, m_hit_point{ hit }
        { }

        std::string_view get_type_string() const
        {
            switch (m_type)
            {
                case Type::DRAGON:
                    return "dragon";
                case Type::GOBLIN:
                    return "goblin";
                case Type::OGRE:
                    return "ogre";
                case Type::ORC:
                    return "orc";
                case Type::SKELETAN:
                    return "skeleton";
                case Type::TROLL:
                    return "troll";
                case Type::VAMPIRE:
                    return "vampire";
                case Type::ZOMBIE:
                    return "zombie";
                default:
                    return "???";
            }
           
        }

        void print() const
        {
            std::cout << m_name <<" the " << get_type_string() << " has " << m_hit_point
            << " hit points and says " << m_roar << '\n';
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
    skeleton.print();
    

    return 0;
}