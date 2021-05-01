/*

g) Now, MonsterGenerator needs to generate some random attributes. To do that, we’ll need to make use of this handy function:
However, because MonsterGenerator relies directly on this function, let’s put it inside the class, as a static function.

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

class MonsterGenerator
{
    public:
        static Monster generateMonster()
        {
            return {Monster::Type::SKELETAN, "Bones", "*rattle", 4};
        }

        int getRandomNumber(int min, int max)
        {
            static constexpr double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0)};
            return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
        }
};

int main()
{
   Monster m1{MonsterGenerator::generateMonster()};
   m1.print();
    

    return 0;
}