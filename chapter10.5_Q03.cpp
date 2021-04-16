/*

3) A function named minmax() that takes two integers as input and returns back 
to the caller the smaller and larger number in a std::pair. A std::pair works 
identical to a std::tuple but stores exactly two elements.

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

std::pair<int, int> minmax(const int x, const int y)
{
    std::pair<int, int> p{ x, y };

    if (x > y)
    {
        p.first = y;
        p.second = x;
    }

    return p;
}

int main()
{
    std::pair<int, int> pair{ minmax(2,20)};

    std::cout << "first element is " << pair.first << '\n';
    std::cout << "second element is " << pair.second << '\n';

    return 0;
}