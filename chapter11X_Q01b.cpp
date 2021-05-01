/*
    b) Now add a member function named distanceTo that takes another Point2d as a parameter, and calculates the distance between them. 
    Given two points (x1, y1) and (x2, y2), the distance between them can be calculated as std::sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2)). 
    The std::sqrt function lives in header cmath.
    
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

        double distanceTo(const Point2d &p)
        {
            return std::sqrt((m_x - p.m_x) * (m_x - p.m_x) + (m_y - p.m_y) * (m_y - p.m_y));      
            
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

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    return 0;
}