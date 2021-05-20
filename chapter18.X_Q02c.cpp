/*


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

class Point
{
private:
	int m_x{ 0 };
	int m_y{ 0 };
	int m_z{ 0 };
 
public:
	Point(int x, int y, int z)
		: m_x{x}, m_y{y}, m_z{z}
	{
 
	}
 
	friend std::ostream& operator<<(std::ostream &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ')';
		return out;
	}
};

class Shape
{
    public:
        virtual std::ostream& print(std::ostream &out) const = 0;
        friend std::ostream& operator<<(std::ostream &out, const Shape &s)
        {
            return s.print(out);
        }

        virtual ~Shape() {}
};

class Triangle : public Shape
{
    private:
        Point m_length1;
        Point m_length2;
        Point m_length3;
    
    public: 
        Triangle(const Point &p1, const Point &p2, const Point &p3)
        : m_length1{ p1 }, m_length2{ p2 }, m_length3{ p3 }
        {

        }

        virtual std::ostream& print(std::ostream &out) const override
        {
            out << "Trainagle(";
            out << m_length1 <<", " << m_length2 << ", " << m_length3 << ")";
            return out;
        }
};

class Circle : virtual public Shape
{
    private:
        int m_radius{ };
        Point m_c;

    public:
        Circle(const Point &p1, int r)
        : m_radius{ r }, m_c{ p1 }
        {

        }
         virtual std::ostream& print(std::ostream &out) const override
        {
            out << "Circle(";
            out <<m_c << ", " << "radius " << m_radius << ")";
            return out;
        }

        int get_radius() const { return m_radius; }
};

// h/t to reader Olivier for this updated solution
int getLargestRadius(const std::vector<Shape*> &v)
{
	int largestRadius { 0 };
 
	// Loop through all the shapes in the vector
	for (const auto* element : v) 
	{
		// // Ensure the dynamic cast succeeds by checking for a null pointer result
    		if (auto *c{ dynamic_cast<const Circle*>(element) })
		{
			if (c->get_radius() > largestRadius)
				largestRadius = c->get_radius();
		}
	}
 
    return largestRadius;
}

int main()
{
    Circle c{ Point{ 1, 2, 3 }, 7 };
    std::cout << c << '\n';

    Triangle t{Point{1, 2, 3}, Point{4, 5, 6}, Point{7, 8, 9}};
    std::cout << t << '\n';

    std::vector<Shape*> v{
      new Circle{Point{1, 2, 3}, 7},
      new Triangle{Point{1, 2, 3}, Point{4, 5, 6}, Point{7, 8, 9}},
      new Circle{Point{4, 5, 6}, 3}
    };

    for (const auto* elem : v)
    {
        std::cout << *elem << '\n';
    }

    std::cout << "The largest radius is: " << getLargestRadius(v) << '\n';


    for (const auto* elem : v)
    {
        delete elem;
    }
 
    return 0;
}