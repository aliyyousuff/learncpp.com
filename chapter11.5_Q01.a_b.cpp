/*
Question #1


Write a class named Ball. Ball should have two private member variables with default values: m_color (“black”) 
and m_radius (10.0). Ball should provide constructors to set only m_color, set only m_radius, set both, or set 
neither value. For this quiz question, do not use default parameters for your constructors. Also write a function 
to print out the color and radius of the ball.
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

class Ball
{
    private:
        std::string m_color{ };
        double m_radious{ };
        
    public:
        Ball(std::string color = "black", double radious = 10)
        {
            m_color = color;
            m_radious = radious;
        }

        Ball(double radious)
        {
            m_radious = radious;
            m_color = "black";
        }

        void print()
        {
            std::cout << "color: " << m_color <<", radious: " << m_radious <<'\n';
        }

};


int main()
{ 
    Ball def{};
	def.print();

    Ball blue{ "blue" };
	blue.print();

    Ball twenty{ 20.0 };
	twenty.print();

    Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();
    return 0;
}