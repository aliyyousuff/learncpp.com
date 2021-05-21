/*
1) It’s sometimes useful to define data that travels in pairs. Write a templated class named Pair1 that allows the user to define one template 
type that is used for both values in the pair. The following function should work:
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


template <typename T>
class Pair1
{
    private:
        T m_element1{ };
        T m_element2{ };
    
    public:
        Pair1(const T x, const T y)
        : m_element1{ x }, m_element2{ y }
        {

        }      

        const T& first() const
        {
            return this->m_element1;
        }

        const T& second() const
        {
            return this->m_element2;
        }
};

int main()
{
    Pair1<int> p1(5, 8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
 
	const Pair1<double> p2(2.3, 4.5);
	std::cout << "Pair: " << p2.first()<< ' ' << p2.second() << '\n';

    return 0;
}