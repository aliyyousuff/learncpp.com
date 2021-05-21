/*
3) A string-value pair is a special type of pair where the first value is always a string type, and the second value can be any type. 
Write a template class named StringValuePair that inherits from a partially specialized Pair class (using std::string as the first type, 
and allowing the user to specify the second type).

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
            return m_element1;
        }

        const T2& second() const
        {
            return m_element2;
        }
};

template <typename T1>
class StringValuePair : public Pair<std::string, T1>
{
    public:
        StringValuePair(const std::string& string, const T1& other) 
        : Pair<std::string, T1>(string, other)
        {

        }

};

int main()
{
    StringValuePair<int> svp("Hello", 5);
    std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    return 0;
}
