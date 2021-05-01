/*
   c) Change function distanceTo from a member function to a non-member friend function that takes two Points as parameters. 
   Also rename it “distanceFrom”.

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

        friend double distanceFrom(const Point2d &p1, const Point2d &p2);
};


double distanceFrom(const Point2d &p1, const Point2d &p2)
    {

        return std::sqrt((p1.m_x - p2.m_x) * (p1.m_x - p2.m_x) + (p1.m_y - p2.m_y) * (p1.m_y - p2.m_y) );
    }


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };


    first.print();
    second.print();

    std::cout << "Distance between two points: " << distanceFrom(first, second) << '\n';

    return 0;
}