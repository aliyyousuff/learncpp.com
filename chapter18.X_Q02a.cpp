/*

2a) Create an abstract class named Shape. This class should have three 
functions: a pure virtual print function that takes and returns a 
std::ostream, an overloaded operator<< and an empty virtual destructor.

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


int main()
{
    return 0;
}