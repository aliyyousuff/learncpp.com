/*
2) Write a Pair class that allows you to specify separate types for each of the two values in the pair.

Note: We’re naming this class differently from the previous one because C++ does not currently allow you 
to “overload” classes that differ only in the number or type of template parameters.

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


template <typename T1, typename T2>
class Pair
{
    private:
        T1 m_element1{ };
        T2 m_element2{ };
    
    public:
        Pair(const T1 x, const T2 y)
        : m_element1{ x }, m_element2{ y }
        {

        }      

        const T1& first() const
        {
            return this->m_element1;
        }

        const T2& second() const
        {
            return this->m_element2;
        }
};

int main()
{
    Pair<int, double> p1(5, 6.7);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair<double, int> p2(2.3, 4);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
   

    return 0;
}