/*

1) Let’s implement our Fruit example that we talked about in our introduction to inheritance. Create a Fruit base class that contains 
two private members: a name (std::string), and a color (std::string). Create an Apple class that inherits Fruit. Apple should have an 
additional private member: fiber (double). Create a Banana class that also inherits Fruit. Banana has no additional members.

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

class Fruit
{
    private:
        std::string m_name{ };
        std::string m_color{ };
    
    public:
        Fruit(std::string name = "", std::string color = "")
        : m_name{ name }, m_color{ color }
        {

        }

        const std::string& get_name() const { return m_name; }
        const std::string& get_color() const { return m_color; }
};

class Apple: public Fruit
{
    private:
        double m_fiber{ };

    public:
        Apple(std::string name, std::string color, double fiber)
        : Fruit(name, color), m_fiber{ fiber }
        {

        }
        double get_fiber() const { return m_fiber; }

};

class Banana : public Fruit
{
    public:
        Banana(std::string name, std::string color) : Fruit(name, color)
        {

        }
};

std::ostream& operator<<(std::ostream& out, const Apple& apple)
{
    out << "Apple(";
    out << apple.get_name() <<", " << apple.get_color() << ", " << apple.get_fiber() << ")";
    return out;
}

std::ostream& operator<<(std::ostream& out, const Banana& b)
{
    out << "Banana(";
    out << b.get_name() << ", " << b.get_color() << ")";
    return out;
}

int main()
{
    const Apple a{"Red delicious", "red", 4.2};
    std::cout << a << '\n';

    const Banana b{" Cavendish", "Yellow"};
    std::cout << b << '\n';
 

 
	return 0;
}