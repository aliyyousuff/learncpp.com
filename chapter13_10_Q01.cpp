/*

Write a class that holds a string. Overload operator() to return the substring that starts at the index of the first parameter. 
The length of the substring should be defined by the second parameter.
Hint: You can use array indices to access individual chars within the std::string
Hint: You can use operator+= to append something to a string

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

class MyString
{
    private:
        std::string m_string{ };
    
    public:
        MyString(const std::string& string = "")
        : m_string{ string }
        {

        }

        std::string operator() (int start_index, int length);
};

std::string MyString::operator() (int start_index, int length)
{
    std::string r{ };

    assert(start_index >= 0);
    assert(start_index + length <= static_cast<int>(m_string.length()) &&
    "MyString::operator(int, int) : Substring is out of range");

    for (int i{start_index}; i < start_index + length; ++i)
        {
            r += m_string[static_cast<unsigned long>(i)];
        }
    return r;
}

int main()
{
    MyString string{ "Hello, world!"};
    std::cout << string(7, 5) << '\n'; 
    return 0;
}