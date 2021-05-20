/*

1) Our Animal/Cat/Dog example above doesn’t work like we want because a reference or pointer to an Animal can’t access the derived version of 
speak() needed to return the right value for the Cat or Dog. One way to work around this issue would be to make the data returned by the speak() 
function accessible as part of the Animal base class (much like the Animal’s name is accessible via member m_name).

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
#include <cstring>
#include <initializer_list>

class Animal
{
    protected:
        std::string m_name{ };
        std::string m_speak{ };

        Animal(std::string_view name, std::string_view speak)
            : m_name{ name }, m_speak{ speak }
            {

            }

            Animal(const Animal&) = delete;
            Animal& operator=(const Animal&) = delete;
    public:
        std::string get_name() const { return m_name; }
        std::string get_speak() const { return m_speak; }

};

class Dog : public Animal
{
    public:
        Dog(std::string_view name)
        : Animal(name, "Meow")
        {
            
        }
};

class Cat : public Animal 
{
    public:
        Cat(std::string_view name) : Animal(name, "Woof") { };
};

int main()
{
    const Cat fred{ "Fred" };
    const Cat misty{ "Misty" };
    const Cat zeke{ "Zeke" };
 
    const Dog garbo{ "Garbo" };
    const Dog pooky{ "Pooky" };
    const Dog truffle{ "Truffle" };
 
    const auto animals{ std::to_array<const Animal*>({ &fred, &garbo, &misty, &pooky, &truffle, &zeke }) };
    
   
    for (const auto animal : animals)
    {
        std::cout << animal->get_name() << " says " << animal->get_speak() << '\n';
    }
 
    return 0;
}
