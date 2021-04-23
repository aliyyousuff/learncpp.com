/*

Question #2


a) Write a simple class named Point3d. The class should contain:
* Three private member variables of type int named m_x, m_y, and m_z;
* A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
* A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>

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

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

class Point3d
{
    int m_x;
    int m_y;
    int m_z;

    public:
        void set_values(int x, int y, int z)
        {
            m_x = x;
            m_y = y;
            m_z = z;
        }

        void print()
        {
            std::cout << "<" << m_x <<", " << m_y << ", " << m_z << ">";
        }

        bool is_equal(const Point3d &point)
        {
            return ( point.m_x == m_x && point.m_y == m_y && point.m_z == m_z );
        }
};

int main()
{
    Point3d point1;
    point1.set_values(1, 2, 3 );

    Point3d point2;
    point2.set_values(1, 2, 3);

    if (point1.is_equal(point2))
    {
        std::cout << "point1 and point2 are equal.\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal.\n";
    }

    Point3d point3;
    point3.set_values(2, 3, 4);

    if (point1.is_equal(point3))
    {
        std::cout << "point1 and point3 are equal.\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal.\n";
    }
    
    return 0;
}