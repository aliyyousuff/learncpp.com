/*
f) Now we can create a random monster generator. Let’s consider how our MonsterGenerator class will work. Ideally, we’ll ask it to give us a Monster, 
and it will create a random one for us. We don’t need more than one MonsterGenerator. This is a good candidate for a static class (one in which all 
functions are static). Create a static MonsterGenerator class. Create a static function named generateMonster(). This should return a Monster. 
For now, make it return anonymous Monster(Monster::Type::skeleton, “Bones”, “*rattle*”, 4);

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
};

int main()
{
   Monster m1{MonsterGenerator::generateMonster()};
   m1.print();
    

    return 0;
}