/*
h) Now edit function generateMonster() to generate a random Monster::Type (between 0 and Monster::Type::max_monster_types-1) 
and a random hit points (between 1 and 100). This should be fairly straightforward. Once you’ve done that, define two static fixed 
arrays of size 6 inside the function (named s_names and s_roars) and initialize them with 6 names and 6 sounds of your choice. 
Pick a random name from these arrays.

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

        static constexpr std::array s_names{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };

        static constexpr std::array s_roars{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*"};

        static int getRandomNumber(int min, int max)
        {
            static constexpr double fraction{ 1.0 / (static_cast<double>(RAND_MAX) + 1.0)};
            return static_cast<int>(std::rand() * fraction * (max - min + 1) + min);
        }

        

        


        static Monster generateMonster()
        {
            static constexpr std::array s_names{ "Blarg", "Moog", "Pksh", "Tyrn", "Mort", "Hans" };

            static constexpr std::array s_roars{ "*ROAR*", "*peep*", "*squeal*", "*whine*", "*hum*", "*burp*"};
            auto type{ getRandomNumber(0, (static_cast<int>(Monster::Type::MAX_MONSTER_TYPES))-1)};
            int hit_point{ getRandomNumber(1, 100)  };
            std::string name{ s_names[static_cast<std::size_t>(getRandomNumber(0, s_names.size()-1))] };
		    std::string roar{ s_roars[static_cast<std::size_t>(getRandomNumber(0, s_roars.size()-1))] };

            return {static_cast<Monster::Type>(type), name, roar, hit_point};
        }

       
};

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
	std::rand(); // If using Visual Studio, discard first random value
 
	Monster m{ MonsterGenerator::generateMonster() };
	m.print();
    
    return 0;
}