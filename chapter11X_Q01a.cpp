/*
    a) Write a class named Point2d. Point2d should contain two member variables of type double: m_x, and m_y, 
    both defaulted to 0.0. Provide a constructor and a print function.
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

class Point2d
{
    private:
        double m_x{ };
        double m_y{ };
        
    public:
        Point2d(double x = 0.0, double y = 0.0) : m_x{ x }, m_y{ y }
        {

        }

        void print() const
        {
            std::cout << "Point2d(" << m_x << ", " << m_y << ")\n"; 
        }

};


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    first.print();
    second.print();

    return 0;
}