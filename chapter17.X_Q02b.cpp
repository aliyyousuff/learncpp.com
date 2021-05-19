/*

Question #2


a) Write an Apple class and a Banana class that are derived from a common Fruit class. Fruit should have two members: a name, and a color.

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
        Fruit(const std::string& name = "", const std::string& color = "")
        : m_name{ name }, m_color{ color }
        {

        }

        const std::string& get_name() const { return m_name; }
        const std::string& get_color() const { return m_color; }
};

class Apple: public Fruit
{
    private:
        //double m_fiber{ };

    public:
        Apple(const std::string& name="apple", const std::string& color="red")
        : Fruit(name, color)
        {

        }
        //double get_fiber() const { return m_fiber; }

};

class Banana : public Fruit
{
    public:
        Banana(const std::string& name="banana", const std::string& color="yellow") : Fruit(name, color)
        {

        }
};

class GrannySmith : public Apple
{
    public:
        GrannySmith() : Apple("granny smith apple", "green")
        {

        }
};

int main()
{
 
	Apple a{ "red" };
	Banana b;
	GrannySmith c;
 
	std::cout << "My " << a.get_name() << " is " << a.get_color() << ".\n";
	std::cout << "My " << b.get_name() << " is " << b.get_color() << ".\n";
	std::cout << "My " << c.get_name() << " is " << c.get_color() << ".\n";

	return 0;
}