/*

1) Implement overloaded operator+ for the Point class.

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

class Point
{
    private:
        double m_x{ };
        double m_y{ };
        double m_z{ };
    public:
        Point(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x{ x }, m_y{ y }, m_z{ z }
        {

        }

        Point operator+ () const;

        void print() const
        {
            std::cout << m_x << " " << m_y << " " << m_z << '\n';
        }

        Point operator-() const;
};

Point Point::operator+ () const
{
    return Point(m_x, m_y, m_z);
}

int main() 
{
 

    return 0;
}